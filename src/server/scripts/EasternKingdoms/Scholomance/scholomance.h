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

#ifndef DEF_SCHOLOMANCE_H
#define DEF_SCHOLOMANCE_H

enum Data
{
    DATA_BOSS_CHILLBORN,
    DATA_BOSS_JANDICE,
    DATA_RATTLE_GORE,
    DATA_LILLIAN_VOSS,
    DATA_LILLIAN_VOSS_SOUL,
    DATA_BOSS_GANDLING,
    DATA_VOSS_RP,
    DATA_GANDLING_RP_1,
    DATA_TELEPORTER,
    DATA_GANDLING_RP_2,
    DATA_LILIAN_CONTROLLER,
};

enum BossEntrys
{
    BOSS_CHILLHEART = 58633,
    BOSS_JANDICE = 59184,
    BOSS_JANDICE_2 = 59217,
    BOSS_RATTLE_GORE = 59153,
    BOSS_VOSS = 59200,
    BOSS_VOSS_SOUL = 58791,
    BOSS_GANDLING = 453425,
};

enum Creatures
{
    CREATURE_JANDICE_ILLUSION = 59220,
    CREATURE_GRAVITY_FLUX = 67272,
    CREATURE_BONE_PILE = 59304,
    CREATURE_RISEN_GUARD = 58822,
    CREATURE_ACOLYTE = 58757,
    CREATURE_NEPHOLYTE = 58823,
    CREATURE_PHYLACTERY = 58664,
    CREATURE_PHYLACTERY_TRIGGER = 58662,
    CREATURE_ICE_WALL = 62731,
    CREATURE_ICE_WALL_DROP = 589643,
    CREATURE_ICE_WALL_DEST = 68291,
    CREATURE_ICE_WALL_BLOCKAGE = 589642,
    CREATRUE_FRIGID_GRASP = 58640,
    CREATURE_SOUL_SHATTER_TRIGGER = 58758,
    CREATURE_BOOK = 65123, // INVALID
    CREATURE_WANDERS_COLOSSAL_BOOK_OF_SHADOW_PUPPETS = 59227, // shadow
    CREATURE_ANTONIAS_SELF_HELP_GUIDE_TO_STANDING_IN_FIRE = 66240, //fire
    CREATURE_THE_ARNARCHIST_ARCANIST = 59230, // arcane
    CREATURE_BOOK_TRIGGER_TARGET = 58917,
    CREATURE_TRIGGER_ARCANE_BOMB = 59711,
    CREATURE_TRIGGER_CANDLE = 93242,
    CREATURE_CANDLESTICK_MAGE = 59467,
    CREATURE_BONE_WEAVER = 59193,
    CREATURE_VOSS = 58722,
    CREATURE_GANDLING = 59080,
    CREATURE_BONE_WEAVING = 59242,
    CREATURE_BONE_STORM_TRIGGER = 76566,
    CREATURE_SOUL_FLAME_VISUAL = 76565,
    CREATURE_TELEPORT_TRIGGER = 76564,
    CREATURE_KRASTINOV_CARVER = 59368,
    CREATURE_FLESH_HORROR = 59359,
    CREATURE_MEAT_GRAFT = 59980,
    CREATURE_LILIAN_SOUL = 58791,
    CREATURE_CONTROLLER_LILIAN_VOSS = 423524,
    CREATURE_GANDLING_2 = 453424,
    CREATURE_EXPIRED_TEST_SUBJECT = 114201,
    CREATURE_GANDLING_FIRE_COSMETIC = 324252,
};

enum GameObjects
{
    GAME_OBJECT_IRON_GATE = 211256,
    GAME_OBJECT_CHILL_HEART_IRON_GATE = 211257, 
    GAME_OBJECT_RATTLE_GORE_GATE = 211258, // rattlegore
    GAME_OBJECT_RATTLE_GORE_GATE_TO_BUTCHERY = 211259, 
    GAME_OBJECT_DOOR_LILIAN_VOSS = 211260,
    GAME_OBJECT_GHOST_GATE = 180322,
   
    GAME_OBJECT_CHEST_OF_FORGOTTEN_NORMAL = 211277,
    GAME_OBJECT_CHEST_OF_FORGOTTEN_HEROIC = 211278,
    GAME_OBJECT_DOOR = 210781,
    GAME_OBJECT_PROFESSOR_DOOR = 174626,
    GAME_OBJECT_LILIAN_CHEST_DOOR = 210781,
};
enum Displays
{
    CREATURE_THE_ARNARCHIST_ARCANIST_DISPLAY = 42955,
    CREATURE_ANTONIAS_SELF_HELP_GUIDE_TO_STANDING_IN_FIRE_DISPLAY = 44900,
    CREATURE_WANDERS_COLOSSAL_BOOK_OF_SHADOW_PUPPETS_DISPLAY = 44897,
};

enum SpellsBosses
{
    SPELL_VISUAL_STRANGULATE_EMOTE = 78037,
    SPELL_ICE_WALL_BOSS_FIGHT = 122451,
    SPELL_ICE_WALL_BOSS_BLOCKAGE = 122443,
    SPELL_PHYLACTERY_DESTROY = 113685,
    SPELL_PHYLACTERY_FILL = 111441,
    SPELL_DRAIN_SOUL_VISUAL = 112081,
    SPELL_TOUCH_OF_THE_GRAVE = 111606,
    SPELL_SUMMON_BOOKS = 111669,
    SPELL_WRACK_SOUL = 111631,
    SPELL_WRACK_SOUL_UNKNOWN = 111637,
    SPELL_WRACK_SOUL_DUMMY = 114658,
    SPELL_FRIGID_GRASP = 111239,
    SPELL_FRIGID_GRASP_DAMAGE = 114886,
    SPELL_ICE_WRATH = 111610,
    SPELL_ICE_WRATH_DAMAGE = 111616,
    SPELL_ARCANE_BOMB_SUMMON = 111575,
    SPELL_ARCANE_BOMB_VISUAL_TURNING_RITUAL = 102460,
    SPELL_ARCANE_BOMB_VISUAL_PURPLE_LED = 109122,
    SPELL_ARCANE_BOMB_VISUAL_MOVING_RITUAL = 113848,
    SPELL_ARCANE_BOMB_EXPLOSION = 113859,
    SPELL_ARCANE_BOMB_CAST_HANDLER = 111577,
    SPELL_FIRE_TOME = 111574,
    SPELL_FIRE_BURN = 120027,
    SPELL_SHADOW_BOLT_BOOK = 113809,
    SPELL_SHADOW_FORM_VISUAL = 51126,
    SPELL_DARK_CHANNELING_VISUAL = 75129,
    SPELL_WONDROUS_RAPIDITY = 114062,
    SPELL_WONDROUS_RAPIDITY_DAMAGE = 114061,
    SPELL_GRAVITY_FLUX_DAMAGE = 114038,
    SPELL_GRAVITY_FLUX_HANDLER = 114035,
    SPELL_GRAVITY_FLUX_MISSILE = 114059,
    SPELL_FLASH_BANG = 113866,
    SPELL_WHIRL_OF_ILLUSION = 114048,
    SPELL_BONE_SHARDS = 113629,
    SPELL_SUMMON_WOVEN_GUARDS_SINGLE = 113686,
    SPELL_BONE_WEAVING = 113647,
    SPELL_SOULFLAME_VISUAL = 114057,
    SPELL_SOULFLAME_HANDLER = 114007,
    SPELL_SOULFLAME_DAMAGE_AND_SCALE = 114009,
    SPELL_BONE_WHIRL_WIND_VISUAL = 114079,
    SPELL_BONE_COSMETIC = 114077,
    SPELL_BONE_COSMETIC_2 = 114076,
    SPELL_BONE_ARMOR = 113996,
    SPELL_BONE_SPIKE = 113999,
    SPELL_RUSTING = 113763,
    SPELL_RUSTING_TRIGGER = 113765,
    SPELL_TALKING_SKULL = 126155,
    SPELL_BOLIDING_BLOODTHIRST = 114141,
    SPELL_CHAIN_LILIAN_VOSS = 112063,
    SPELL_GANDLING_INTRO_CHANNEL = 114201,
    SPELL_BONE_ARMOR_2 = 11445,
    SPELL_BEAM_SOUL_BACK = 114200,
    SPELL_SUMMON_LILIAN_VOSS_SPIRIT = 112063,
    SPELL_LILIAN_VOSS_DEAD = 112057,
    SPELL_LILIAN_KNEEL = 123821,
    SPELL_LILIAN_VOSS_SOUL_PAIN = 112058,
    SPELL_SHADOW_EXPLOSION = 118756,
    SPELL_EMOTE_POINT = 48349,
    SPELL_TELEPORT_MISC = 41232,
    SPELL_BLAZING_SOUL = 111642,
    // Neophyte
    SPELL_REND_FLESH_LOW_LEVEL = 120787,
    SPELL_REND_FLESH_HIGH_LEVEL = 111762,
    SPELL_SHADOW_INCINERATION = 111752,

    // Acolyte
    SPELL_SHADOW_BOLT = 111599,
    SPELL_SHATTER_SOUL = 111594,
    SPELL_SHATTER_SOUL_SUMMON = 111596,
    // SPELL_UNBOUND = 111772,
    SPELL_SPIRIT_BARRAGE = 111774, /*I think wowhead is wrong, because after a lot of research i never seen a single use of this spells in the realm dungeon*/

    SPELL_IMPALE = 111813,
    SPELL_UNHOLY_WEAPON = 111801,

    // DARK CANDLE
    SPELL_SUMMON_BLACK_CANDLE = 114473,
    SPELL_BLACK_CANDLE_SPELL = 114400,

    // Candleflickring mages
    SPELL_FLICKERING_FLAME = 114474,
    SPELL_SKIN_LIKE_WAX = 114479,
    SPELL_TWILING_CHANNEL = 78198,
    SPELL_CANDLE_EURPTION_VISUAL = 39180,

    // Professor slate , bored student
    SPELL_SHADOW_BOLT_BORED_STUDENT = 114859,
    SPELL_SHADOW_NOVA_BORED_STUDENT = 114864,
    SPELL_FIRE_BREATH_POTION_BORED_STUDENT = 114872,
    SPELL_POTION_OF_BRUTISH_FORCE = 114874,
    SPELL_TOXIC_POTION = 114873,

    /// GANDLING
    SPELL_INCINERATE = 113136,
    SPELL_IMMOLATE = 113141,
    SPELL_HARSH_LESSON = 113395,
    SPELL_FIRE_COSMETIC = 114904,
    SPELL_RISE = 113143,
    SPELL_SHADOW_BLINK = 130260,

};

#endif
