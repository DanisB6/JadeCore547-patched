/*
 * Copyright (C) 2013-2016 JadeCore <https://www.jadecore.tk/>
 * Copyright (C) 2008-2016 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2011-2016 Project SkyFire <http://www.projectskyfire.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "ScriptPCH.h"
#include "blackrock_caverns.h"

//todo: ������� ������������ ������ �� ������ �����
enum ScriptTexts
{
	SAY_AGGRO	= 0,
	SAY_KILL	= 1,
	SAY_BURN	= 2,
	SAY_DEATH	= 3,
};
enum Spells
{
	SPELL_CLEAVE							= 15284,
	SPELL_QUICKSILVER_ARMOR					= 75842,
	SPELL_HEAT_WAVE							= 75851,
	SPELL_SUPERHEATED_QUICKSILVER_ARMOR		= 75846,
	SPELL_SUPERHEATED_QUICKSILVER_ARMOR_H	= 93567,
	SPELL_SUPERHEATED_QUICKSILVER_ARMOR_0	= 76015,

    SPELL_BURNING                           = 77490,
};

enum Events
{
	EVENT_CLEAVE		= 1,
	EVENT_HEAT_ARMOR	= 2,
};

enum Adds
{
    NPC_BOUND_FLAMES    = 50417,
};

const Position centerkarshPos = {237.84f, 784.76f, 95.67f, 1.95f};

class boss_karsh_steelbender : public CreatureScript
{
    public:
        boss_karsh_steelbender() : CreatureScript("boss_karsh_steelbender") { }
     
        CreatureAI* GetAI(Creature* pCreature) const
        {
            return new boss_karsh_steelbenderAI (pCreature);
        }
     
        struct boss_karsh_steelbenderAI : public ScriptedAI
        {
            boss_karsh_steelbenderAI(Creature* c) : ScriptedAI(c)
            {
			    me->ApplySpellImmune(0, IMMUNITY_EFFECT, SPELL_EFFECT_KNOCK_BACK, true);
                me->ApplySpellImmune(0, IMMUNITY_MECHANIC, MECHANIC_GRIP, true);
			    pInstance = c->GetInstanceScript();
            }
     
            InstanceScript* pInstance;
		    EventMap events;
		    bool bHeat;


            void Reset()
            {
			    events.Reset();
			    DoCast(me, SPELL_QUICKSILVER_ARMOR);
			    bHeat = false;
                if (pInstance)
                    pInstance->SetData(DATA_KARSH, NOT_STARTED);
            }


            void EnterCombat(Unit* /*who*/) 
            {
			    events.ScheduleEvent(EVENT_CLEAVE, urand(5000, 7000));
			    events.ScheduleEvent(EVENT_HEAT_ARMOR, 1000);
			    Talk(SAY_AGGRO);
                DoZoneInCombat();
                if (pInstance)
                    pInstance->SetData(DATA_KARSH, IN_PROGRESS);
            }
     
            void UpdateAI(const uint32 diff)
            {
                if (!UpdateVictim())
                    return;

			    if (me->GetDistance(me->GetHomePosition()) > 60.0f)
                {
                    EnterEvadeMode();
                    return;
                }
     
			    if (me->GetDistance(centerkarshPos) <= 6.0f)
				    bHeat = true;
			    else
				    bHeat = false;

			    if (!me->HasAura(SPELL_QUICKSILVER_ARMOR) && !me->HasAura(DUNGEON_MODE(SPELL_SUPERHEATED_QUICKSILVER_ARMOR, SPELL_SUPERHEATED_QUICKSILVER_ARMOR_H)))
				    DoCast(me, SPELL_QUICKSILVER_ARMOR);
			    if (me->HasAura(DUNGEON_MODE(SPELL_SUPERHEATED_QUICKSILVER_ARMOR, SPELL_SUPERHEATED_QUICKSILVER_ARMOR_H)))
				    me->RemoveAurasDueToSpell(SPELL_QUICKSILVER_ARMOR);

                events.Update(diff);

			    if (me->HasUnitState(UNIT_STATE_CASTING))
                    return;
    			
			    while (uint32 eventId = events.ExecuteEvent())
                {
                    switch (eventId)
                    {
				    case EVENT_CLEAVE:
					    DoCast(me->getVictim(), SPELL_CLEAVE);
					    events.ScheduleEvent(EVENT_CLEAVE, urand(5000, 7000));
					    break;
				    case EVENT_HEAT_ARMOR:
					    if (bHeat)
					    {
						    DoCast(me, SPELL_HEAT_WAVE);
						    DoCast(me, DUNGEON_MODE(SPELL_SUPERHEATED_QUICKSILVER_ARMOR, SPELL_SUPERHEATED_QUICKSILVER_ARMOR_H));
					    }
					    events.ScheduleEvent(EVENT_HEAT_ARMOR, 1000);
					    break;
				    }
			    }
      
                DoMeleeAttackIfReady();
            }
     
            void JustDied(Unit* /*killer*/)
            {
			    Talk(SAY_DEATH);
                if (pInstance)
                    pInstance->SetData(DATA_KARSH, DONE);
            }
     
            void KilledUnit(Unit * victim)
            {
			    Talk(SAY_KILL);
            }
        };
};
 
void AddSC_boss_karsh_steelbender()
{
    new boss_karsh_steelbender();
}
