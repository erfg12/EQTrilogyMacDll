/*	EQEMu: Everquest Server Emulator
	Copyright (C) 2001-2003 EQEMu Development Team (http://eqemulator.net)

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; version 2 of the License.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY except by those people which sell it, which
	are required to give you total support for your newly bought product;
	without even the implied warranty of MERCHANTABILITY or FITNESS FOR
	A PARTICULAR PURPOSE. See the GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/
#ifndef EQ_CONSTANTS_H
#define EQ_CONSTANTS_H

#include "skills.h"
#include "types.h"

/*
** Light Types
**
*/
enum LightTypes
{
	lightTypeNone = 0,
	lightTypeCandle,
	lightTypeTorch,
	lightTypeTinyGlowingSkull,
	lightTypeSmallLantern,
	lightTypeSteinOfMoggok,
	lightTypeLargeLantern,
	lightTypeFlamelessLantern,
	lightTypeGlobeOfStars,
	lightTypeLightGlobe,
	lightTypeLightstone,
	lightTypeGreaterLightstone,
	lightTypeFireBeetleEye,
	lightTypeColdlight,
	lightTypeUnknown1,
	lightTypeUnknown2
};

#define LIGHT_TYPES_COUNT 16

/*
** Light Levels
**
*/
enum LightLevels
{
	lightLevelUnlit = 0,
	lightLevelCandle,
	lightLevelTorch,
	lightLevelSmallMagic,
	lightLevelRedLight,
	lightLevelBlueLight,
	lightLevelSmallLantern,
	lightLevelMagicLantern,
	lightLevelLargeLantern,
	lightLevelLargeMagic,
	lightLevelBrilliant
};

#define LIGHT_LEVELS_COUNT 11

/*
**	Item attributes
**
**	(There are no grepwin hits other than these declarations... Do they have a use?)
*/
enum ItemAttributes : uint32
{
	ItemAttrNone			= 0x00000000,
	ItemAttrLore			= 0x00000001,
	ItemAttrArtifact		= 0x00000002,
	ItemAttrSummoned		= 0x00000004,
	ItemAttrMagic			= 0x00000008,
	ItemAttrPendingLore		= 0x00000020,
	ItemAttrUnknown			= 0xFFFFFFFF
};

/*
**	Item class types
**
*/
enum ItemClassTypes
{
	ItemClassCommon = 0,
	ItemClassContainer,
	ItemClassBook,
	_ItemClassCount
};

/*
**	Item use types
**
**	(ref: database and eqstr_us.txt)
**
**	(Looking at a recent database, it's possible that some of the item values may be off [10-27-2013] -U)
*/
enum ItemUseTypes : uint8
{
/*9138*/	ItemType1HSlash = 0,
/*9141*/	ItemType2HSlash,
/*9140*/	ItemType1HPiercing,
/*9139*/	ItemType1HBlunt,
/*9142*/	ItemType2HBlunt,
/*5504*/	ItemTypeBow,
/*----*/	ItemTypeUnknown1,
/*----*/	ItemTypeLargeThrowing,
/*5505*/	ItemTypeShield,
/*5506*/	ItemTypeScroll,
/*5507*/	ItemTypeArmor,
/*5508*/	ItemTypeMisc,			// a lot of random crap has this item use.
/*7564*/	ItemTypeLockPick,
/*----*/	ItemTypeUnknown2,
/*5509*/	ItemTypeFood,
/*5510*/	ItemTypeDrink,
/*5511*/	ItemTypeLight,
/*5512*/	ItemTypeCombinable,		// not all stackable items are this use...
/*5513*/	ItemTypeBandage,
/*----*/	ItemTypeSmallThrowing,
/*----*/	ItemTypeSpell,			// spells and tomes
/*5514*/	ItemTypePotion,
/*----*/	ItemTypeFletchedArrows,
/*0406*/	ItemTypeWindInstrument,
/*0407*/	ItemTypeStringedInstrument,
/*0408*/	ItemTypeBrassInstrument,
/*0405*/	ItemTypePercussionInstrument,
/*5515*/	ItemTypeArrow,
/*----*/	ItemTypeUnknown4,
/*5521*/	ItemTypeJewelry,
/*----*/	ItemTypeSkull,
/*5516*/	ItemTypeBook,			// skill-up tomes/books? (would probably need a pp flag if true...)
/*5517*/	ItemTypeNote,
/*5518*/	ItemTypeKey,
/*----*/	ItemTypeCoin,
/*5520*/	ItemType2HPiercing,
/*----*/	ItemTypeFishingPole,
/*----*/	ItemTypeFishingBait,
/*5519*/	ItemTypeAlcohol,
/*----*/	ItemTypeKey2,			// keys and satchels?? (questable keys?)
/*----*/	ItemTypeCompass,
/*----*/	ItemTypeUnknown5,
/*----*/	ItemTypePoison,			// might be wrong, but includes poisons
/*----*/	ItemTypeUnknown6,
/*----*/	ItemTypeUnknown7,
/*5522*/	ItemTypeMartial,
/*----*/	_ItemTypeCount

/*
	Unknowns:

	Mounts?
	Ornamentations?
	GuildBanners?
	Collectible? 
	Placeable?
	(others?)
*/
};
/*
**	Container use types
**
**	This correlates to world 'object.type' (object.h/Object.cpp) as well as Item_Struct.BagType
**
**	(ref: database, web forums and eqstr_us.txt)
*/
enum ContainerUseTypes : uint8
{
/*3400*/	BagTypeSmallBag = 0,
/*3401*/	BagTypeLargeBag,
/*3402*/	BagTypeQuiver,
/*3403*/	BagTypeBeltPouch,
/*3404*/	BagTypeWristPouch,
/*3405*/	BagTypeBackPack,
/*3406*/	BagTypeSmallChest,
/*3407*/	BagTypeLargeChest,
/*----*/	BagTypeBandolier,				// <*Database Reference Only>
/*3408*/	BagTypeMedicineBag,
/*3409*/	BagTypeToolBox,
/*3410*/	BagTypeLexicon,
/*3411*/	BagTypeMortar,
/*3412*/	BagTypeSelfDusting,				// Quest container (Auto-clear contents?)
/*3413*/	BagTypeMixingBowl,
/*3414*/	BagTypeOven,
/*3415*/	BagTypeSewingKit,
/*3416*/	BagTypeForge,
/*3417*/	BagTypeFletchingKit,
/*3418*/	BagTypeBrewBarrel,
/*3419*/	BagTypeJewelersKit,
/*3420*/	BagTypePotteryWheel,
/*3421*/	BagTypeKiln,
/*3422*/	BagTypeKeymaker,				// (no database entries as of peq rev 69)
/*3423*/	BagTypeWizardsLexicon,
/*3424*/	BagTypeMagesLexicon,
/*3425*/	BagTypeNecromancersLexicon,
/*3426*/	BagTypeEnchantersLexicon,
/*----*/	BagTypeUnknown1,				// (a coin pouch/purse?) (no database entries as of peq rev 69)
/*----*/	BagTypeConcordanceofResearch,	// <*Database Reference Only>
/*3427*/	BagTypeAlwaysWorks,				// Quest container (Never-fail combines?)
/*3428*/	BagTypeKoadaDalForge,			// High Elf
/*3429*/	BagTypeTeirDalForge,			// Dark Elf
/*3430*/	BagTypeOggokForge,				// Ogre
/*3431*/	BagTypeStormguardForge,			// Dwarf
/*3432*/	BagTypeAkanonForge,				// Gnome
/*3433*/	BagTypeNorthmanForge,			// Barbarian
/*----*/	BagTypeUnknown2,				// (no database entries as of peq rev 69)
/*3434*/	BagTypeCabilisForge,			// Iksar
/*3435*/	BagTypeFreeportForge,			// Human 1
/*3436*/	BagTypeRoyalQeynosForge,		// Human 2
/*3439*/	BagTypeHalflingTailoringKit,
/*3438*/	BagTypeErudTailoringKit,
/*3440*/	BagTypeFierDalTailoringKit,		// Wood Elf
/*3441*/	BagTypeFierDalFletchingKit,		// Wood Elf
/*3437*/	BagTypeIksarPotteryWheel,
/*3442*/	BagTypeTackleBox,
/*3443*/	BagTypeTrollForge,
/*3445*/	BagTypeFierDalForge,			// Wood Elf
/*3444*/	BagTypeValeForge,				// Halfling
/*3446*/	BagTypeErudForge,
/*----*/	BagTypeTradersSatchel,			// <*Database Reference Only> (db: Yellow Trader's Satchel Token?)
/*----*/	_BagTypeCount
};

/*
** Item Effect Types
**
*/
enum {
	ET_CombatProc = 0,
	ET_ClickEffect = 1,
	ET_WornEffect = 2,
	ET_Expendable = 3,
	ET_EquipClick = 4,
	ET_ClickEffect2 = 5,	//name unknown
	ET_Focus = 6,
	ET_Scroll = 7
};

enum ItemQuantityTypes
{
	Quantity_Unknown = 0,
	Quantity_Normal = 1,
	Quantity_Charges = 2,
	Quantity_Stacked = 3
};

//SpawnAppearance types:
#define AT_Die			0	// this causes the client to keel over and zone to bind point
#define AT_WhoLevel		1	// the level that shows up on /who
#define AT_Invis		3	// 0 = visible, 1 = invisible
#define AT_PVP			4	// 0 = blue, 1 = pvp (red)
#define AT_Light		5	// light type emitted by player (lightstone, shiny shield)
#define AT_Anim			14	// 100=standing, 110=sitting, 111=ducking, 115=feigned, 105=looting
#define AT_Sneak		15	// 0 = normal, 1 = sneaking
#define AT_SpawnID		16	// server to client, sets player spawn id
#define AT_HP			17	// Client->Server, my HP has changed (like regen tic)
#define AT_Linkdead		18	// 0 = normal, 1 = linkdead
#define AT_Levitate		19	// 0=off, 1=flymode, 2=levitate
#define AT_GM			20	// 0 = normal, 1 = GM - all odd numbers seem to make it GM
#define AT_Anon			21	// 0 = normal, 1 = anon, 2 = roleplay
#define AT_GuildID		22
#define AT_GuildRank	23	// 0=member, 1=officer, 2=leader
#define AT_AFK			24	// 0 = normal, 1 = afk
#define AT_Pet			25	// Param is EntityID of owner, or 0 for when charm breaks
#define AT_Split		28	// 0 = normal, 1 = autosplit on
#define AT_Size			29	// spawn's size
#define AT_NPCName		31	// change PC's name's color to NPC color 0 = normal, 1 = npc name
#define AT_DamageState	44	// The damage state of a destructible object (0 through 4)
//#define AT_Trader		300	// Bazzar Trader Mode

// solar: animations for AT_Anim
#define ANIM_FREEZE	102
#define	ANIM_STAND		0x64
#define	ANIM_SIT		0x6e
#define	ANIM_CROUCH		0x6f
#define	ANIM_DEATH		0x73
#define ANIM_LOOT		0x69

typedef enum {
	eaStanding = 0,
	eaSitting,		//1
	eaCrouching,	//2
	eaDead,			//3
	eaLooting,		//4
	_eaMaxAppearance
} EmuAppearance;

// msg_type's for custom usercolors
#define MT_Say					256
#define MT_Tell					257
#define MT_Group				258
#define MT_Guild				259
#define MT_OOC					260
#define MT_Auction				261
#define MT_Shout				262
#define MT_Emote				263
#define MT_Spells				264
#define MT_YouHitOther			265
#define MT_OtherHitsYou			266
#define MT_YouMissOther			267
#define MT_OtherMissesYou		268
#define MT_Broadcasts			269
#define MT_Skills				270
#define MT_Disciplines			271
#define	MT_Unused1				272
#define MT_DefaultText			273
#define MT_Unused2				274
#define MT_MerchantOffer		275
#define MT_MerchantBuySell		276
#define	MT_YourDeath			277
#define MT_OtherDeath			278
#define MT_OtherHits			279
#define MT_OtherMisses			280
#define	MT_Who					281
#define MT_YellForHelp			282
#define MT_NonMelee				283
#define MT_WornOff				284
#define MT_MoneySplit			285
#define MT_LootMessages			286 // Filters under Damage Shield?
#define MT_DiceRoll				287
#define MT_OtherSpells			288
#define MT_SpellFailure			289
#define MT_Chat					290
#define MT_Channel1				291
#define MT_Channel2				292
#define MT_Channel3				293
#define MT_Channel4				294
#define MT_Channel5				295
#define MT_Channel6				296
#define MT_Channel7				297
#define MT_Channel8				298
#define MT_Channel9				299
#define MT_Channel10			300
#define MT_CritMelee			301
#define MT_SpellCrits			302
#define MT_TooFarAway			303
#define MT_NPCRampage			304
#define MT_NPCFlurry			305
#define MT_NPCEnrage			306
#define MT_SayEcho				307
#define MT_TellEcho				308
#define MT_GroupEcho			309
#define MT_GuildEcho			310
#define MT_OOCEcho				311
#define MT_AuctionEcho			312
#define MT_ShoutECho			313
#define MT_EmoteEcho			314
#define MT_Chat1Echo			315
#define MT_Chat2Echo			316
#define MT_Chat3Echo			317
#define MT_Chat4Echo			318
#define MT_Chat5Echo			319
#define MT_Chat6Echo			320
#define MT_Chat7Echo			321
#define MT_Chat8Echo			322
#define MT_Chat9Echo			323
#define MT_Chat10Echo			324
#define MT_DoTDamage			325
#define MT_ItemLink				326
#define MT_RaidSay				327
#define MT_MyPet				328
#define MT_DS					329 //White text (should be non-melee) unknown filter
#define MT_Leadership			330
#define MT_PetFlurry			331
#define MT_PetCrit				332
#define MT_FocusEffect			333
#define MT_Experience			334
#define MT_System				335
#define MT_PetSpell				336
#define MT_PetResponse			337
#define MT_ItemSpeech			338
#define MT_StrikeThrough		339
#define MT_Stun					340

//Unused numbers are either White, Grey, or LightGrey. After 20, all are LightGrey until 256.
enum ChatColor
{
	CC_Default					= 0, // Normal
	CC_Grey						= 1, 
	CC_Green					= 2, // Auction/OOC
	CC_Blue						= 4, // Skills/Spells/Emote
	CC_Purple					= 5, // Item Tags
	CC_LightGrey				= 6, 
	CC_Say						= 7,
	CC_Red						= 13, // Shout/Fizzles
	CC_LightGreen				= 14, // Guild
	CC_Yellow					= 15, // Spell Worn Off/Broadcast
	CC_LightBlue				= 16, 
	CC_Cyan						= 18, // Group/Raid
	CC_User_Say					= 256,
	CC_User_Tell				= 257,
	CC_User_Group				= 258,
	CC_User_Guild				= 259,
	CC_User_OOC					= 260,
	CC_User_Auction				= 261,
	CC_User_Shout				= 262,
	CC_User_Emote				= 263,
	CC_User_Spells				= 264,
	CC_User_YouHitOther			= 265,
	CC_User_OtherHitYou			= 266,
	CC_User_YouMissOther		= 267,
	CC_User_OtherMissYou		= 268,
	CC_User_Duels				= 269,
	CC_User_Skills				= 270,
	CC_User_Disciplines			= 271,
	CC_User_Default				= 273,
	CC_User_MerchantOffer		= 275,
	CC_User_MerchantExchange	= 276,
	CC_User_YourDeath			= 277,
	CC_User_OtherDeath			= 278,
	CC_User_OtherHitOther		= 279,
	CC_User_OtherMissOther		= 280,
	CC_User_Who					= 281,
	CC_User_Yell				= 282,
	CC_User_NonMelee			= 283,
	CC_User_SpellWornOff		= 284,
	CC_User_MoneySplit			= 285,
	CC_User_Loot				= 286,
	CC_User_Random				= 287,
	CC_User_OtherSpells			= 288,
	CC_User_SpellFailure		= 289,
	CC_User_ChatChannel			= 290,
	CC_User_Chat1				= 291,
	CC_User_Chat2				= 292,
	CC_User_Chat3				= 293,
	CC_User_Chat4				= 294,
	CC_User_Chat5				= 295,
	CC_User_Chat6				= 296,
	CC_User_Chat7				= 297,
	CC_User_Chat8				= 298,
	CC_User_Chat9				= 299,
	CC_User_Chat10				= 300,
	CC_User_MeleeCrit			= 301,
	CC_User_SpellCrit			= 302,
	CC_User_TooFarAway			= 303,
	CC_User_NPCRampage			= 304,
	CC_User_NPCFurry			= 305,
	CC_User_NPCEnrage			= 306,
	CC_User_EchoSay				= 307,
	CC_User_EchoTell			= 308,
	CC_User_EchoGroup			= 309,
	CC_User_EchoGuild			= 310,
	CC_User_EchoOOC				= 311,
	CC_User_EchoAuction			= 312,
	CC_User_EchoShout			= 313,
	CC_User_EchoEmote			= 314,
	CC_User_EchoChat1			= 315,
	CC_User_EchoChat2			= 316,
	CC_User_EchoChat3			= 317,
	CC_User_EchoChat4			= 318,
	CC_User_EchoChat5			= 319,
	CC_User_EchoChat6			= 320,
	CC_User_EchoChat7			= 321,
	CC_User_EchoChat8			= 322,
	CC_User_EchoChat9			= 323,
	CC_User_EchoChat10			= 324,
	CC_User_UnusedAtThisTime	= 325, //Yellow
	CC_User_ItemTags			= 326,
	CC_User_RaidSay				= 327,
	CC_User_MyPet				= 328,
	CC_User_DamageShield		= 329,
};

//ZoneChange_Struct->success values
#define ZONE_ERROR_NOMSG 0
#define ZONE_ERROR_NOTREADY -1
#define ZONE_ERROR_VALIDPC -2
#define ZONE_ERROR_STORYZONE -3
#define ZONE_ERROR_NOEXPANSION -6
#define ZONE_ERROR_NOEXPERIENCE -7


typedef enum {
	FilterDamageShields = 0,	//0 is on 1 is off
	FilterNPCSpells = 1,		//0 is on - doesn't send packet	
	FilterPCSpells = 2,			//0 is on 1 is off 2 is group
	FilterBardSongs = 3,		//0 is on 1 is self 2 is group 3 is off
	FilterNone = 4,				//0 is on
	FilterGuildChat = 5,		//0 is off 1 is on		
	FilterSocials = 6,			//0 is off 1 is on
	FilterGroupChat = 7,		//0 is off 1 is on	
	FilterShouts = 8,		    //0 is off 1 is on
	FilterAuctions = 9,		    //0 is off 1 is on
	FilterOOC = 10,				//0 is off 1 is on
	FilterMyMisses = 11,		//0 is off 1 is on
	FilterOthersMiss = 12,		//0 is off 1 is on
	FilterOthersHit = 13,		//0 is off 1 is on
	FilterMissedMe = 14,		//0 is off 1 is on
	FilterSpellCrits = 15,		//0 is on 1 is self 2 is off
	FilterMeleeCrits = 16,		//0 is on 1 is self 2 is off
	_FilterCount
} eqFilterType;

typedef enum {
	FilterHide,
	FilterShow,
	FilterShowGroupOnly,
	FilterShowSelfOnly
} eqFilterMode;

#define	STAT_STR		0
#define	STAT_STA		1
#define	STAT_AGI		2
#define	STAT_DEX		3
#define	STAT_INT		4
#define	STAT_WIS		5
#define	STAT_CHA		6
#define	STAT_MAGIC		7
#define	STAT_COLD		8
#define	STAT_FIRE		9
#define	STAT_POISON		10
#define	STAT_DISEASE		11
#define	STAT_MANA		12
#define	STAT_HP			13
#define	STAT_AC			14
#define STAT_ENDURANCE		15
#define STAT_ATTACK		16
#define STAT_HP_REGEN		17
#define STAT_MANA_REGEN		18
#define STAT_HASTE		19
#define STAT_DAMAGE_SHIELD	20

/*
**	Recast timer types. Used as an off set to charProfileStruct timers.
**
**	(Another orphaned enumeration...)
*/
enum RecastTimerTypes
{
	RecTimer_0 = 0,
	RecTimer_1,
	RecTimer_WeaponHealClick,		// 2
	RecTimer_MuramiteBaneNukeClick,	// 3
	RecTimer_4,
	RecTimer_DispellClick,			// 5 (also click heal orbs?)
	RecTimer_Epic,					// 6
	RecTimer_OoWBPClick,			// 7
	RecTimer_VishQuestClassItem,	// 8
	RecTimer_HealPotion,			// 9
	RecTimer_10,
	RecTimer_11,
	RecTimer_12,
	RecTimer_13,
	RecTimer_14,
	RecTimer_15,
	RecTimer_16,
	RecTimer_17,
	RecTimer_18,
	RecTimer_ModRod,				// 19
	_RecTimerCount
};

enum GroupUpdateAction
{
	GUA_Joined = 0,
	GUA_Left = 1,
	GUA_LastLeft = 6,
	GUA_FullGroupInfo = 7,
	GUA_MakeLeader = 8,
	GUA_Started = 9
};

static const uint8 DamageTypeSomething	= 0x1C;	//0x1c is something...
static const uint8 DamageTypeFalling	= 0xFC;
static const uint8 DamageTypeSpell		= 0xE7;
static const uint8 DamageTypeUnknown	= 0xFF;

/*
**	Skill damage types
**
**	(indexed by 'Skill' of SkillUseTypes)
*/
static const uint8 SkillDamageTypes[HIGHEST_SKILL + 1] = // change to _SkillServerArraySize once activated
{
/*1HBlunt*/					0,
/*1HSlashing*/				1,
/*2HBlunt*/					0,
/*2HSlashing*/				1,
/*Abjuration*/				DamageTypeSpell,
/*Alteration*/				DamageTypeSpell,
/*ApplyPoison*/				DamageTypeUnknown,
/*Archery*/					7,
/*Backstab*/				8,
/*BindWound*/				DamageTypeUnknown,
/*Bash*/					10,
/*Block*/					DamageTypeUnknown,
/*BrassInstruments*/		DamageTypeSpell,
/*Channeling*/				DamageTypeUnknown,
/*Conjuration*/				DamageTypeSpell,
/*Defense*/					DamageTypeUnknown,
/*Disarm*/					DamageTypeUnknown,
/*DisarmTraps*/				DamageTypeUnknown,
/*Divination*/				DamageTypeSpell,
/*Dodge*/					DamageTypeUnknown,
/*DoubleAttack*/			DamageTypeUnknown,
/*DragonPunch*/				21,
/*DualWield*/				DamageTypeUnknown,
/*EagleStrike*/				23,
/*Evocation*/				DamageTypeSpell,
/*FeignDeath*/				4,
/*FlyingKick*/				30,
/*Forage*/					DamageTypeUnknown,
/*HandtoHand*/				4,
/*Hide*/					DamageTypeUnknown,
/*Kick*/					30,
/*Meditate*/				DamageTypeUnknown,
/*Mend*/					DamageTypeUnknown,
/*Offense*/					DamageTypeUnknown,
/*Parry*/					DamageTypeUnknown,
/*PickLock*/				DamageTypeUnknown,
/*1HPiercing*/				36,
/*Riposte*/					DamageTypeUnknown,
/*RoundKick*/				30,
/*SafeFall*/				DamageTypeUnknown,
/*SsenseHeading*/			DamageTypeUnknown,
/*Singing*/					DamageTypeSpell,
/*Sneak*/					DamageTypeUnknown,
/*SpecializeAbjure*/		DamageTypeUnknown,
/*SpecializeAlteration*/	DamageTypeUnknown,
/*SpecializeConjuration*/	DamageTypeUnknown,
/*SpecializeDivination*/	DamageTypeUnknown,
/*SpecializeEvocation*/		DamageTypeUnknown,
/*PickPockets*/				DamageTypeUnknown,
/*StringedInstruments*/		DamageTypeSpell,
/*Swimming*/				DamageTypeUnknown,
/*Throwing*/				51,
/*TigerClaw*/				23,
/*Tracking*/				DamageTypeUnknown,
/*WindInstruments*/			DamageTypeSpell,
/*Fishing*/					DamageTypeUnknown,
/*MakePoison*/				DamageTypeUnknown,
/*Tinkering*/				DamageTypeUnknown,
/*Research*/				DamageTypeUnknown,
/*Alchemy*/					DamageTypeUnknown,
/*Baking*/					DamageTypeUnknown,
/*Tailoring*/				DamageTypeUnknown,
/*SenseTraps*/				DamageTypeUnknown,
/*Blacksmithing*/			DamageTypeUnknown,
/*Fletching*/				DamageTypeUnknown,
/*Brewing*/					DamageTypeUnknown,
/*AlcoholTolerance*/		DamageTypeUnknown,
/*Begging*/					DamageTypeUnknown,
/*JewelryMaking*/			DamageTypeUnknown,
/*Pottery*/					DamageTypeUnknown,
/*PercussionInstruments*/	DamageTypeSpell,
/*Intimidation*/			DamageTypeUnknown,
/*Berserking*/				DamageTypeUnknown,
/*Taunt*/					DamageTypeUnknown,
/*Frenzy*/					//74 //,
// /*RemoveTrap*/				DamageTypeUnknown,	// Needs research (set for SenseTrap value)
// /*TripleAttack*/			DamageTypeUnknown,	// Needs research (set for DoubleAttack value)
// /*2HPiercing*/				36					// Needs research (set for 1HPiercing value - similar to slash/blunt)
};

/*
**	Material use slots
**
*/
enum MaterialUseSlots : uint8
{
	MaterialHead = 0,
	MaterialChest,
	MaterialArms,
	MaterialWrist,
	MaterialHands,
	MaterialLegs,
	MaterialFeet,
	MaterialPrimary,
	MaterialSecondary,
	_MaterialCount,
	_MaterialInvalid = 255
};

/*
// Used for worn NPC inventory tracking. NPCs don't use
// augments, so only the basic slots need to be kept track of.
#define MAX_WORN_INVENTORY	22
*/

/*
**	Inventory Slot Equipment Enum
**	Mostly used for third-party tools to reference inventory slots
**
**	[pre-HoT]
**	NOTE: Numbering for personal inventory goes top to bottom, then left to right
**	It's the opposite for inside bags: left to right, then top to bottom
**	Example:
**	Inventory:	Containers:
**	1	5		1	2
**	2	6		3	4
**	3	7		5	6
**	4	8		7	8
**	-	-		9	10
**
**	[HoT and Higher]
**	Note: Numbering for inventory and bags goes left to right, then top to bottom
**	Example:
**	Inventory:	Containers:
**	1	2		1	2
**	3	4		3	4
**	5	6		5	6
**	7	8		7	8
**	9	10		9	10
**	-	-		11	12	[Note: Additional slots are only available in RoF and higher]
**
*/

enum InventoryMapTypes : int16 {
	MapPossessions = 0,
	MapBank,
	MapUnused,
	MapTrade,
	MapWorld,
	MapLimbo,
	MapTribute,
	MapTrophyTribute,
	MapGuildTribute,
	MapMerchant,
	MapDeleted,
	MapCorpse,
	MapBazaar,
	MapInspect,
	MapRealEstate,
	MapViewMODPC,
	MapViewMODBank,
	MapViewMODUnused,
	MapViewMODLimbo,
	MapAltStorage,
	MapArchived,
	MapMail,
	MapGuildTrophyTribute,
	MapKrono,
	MapOther,
	_MapCount
};

enum InventoryMainTypes : int16 {
	MainCursor = 0,
	MainEar1,
	MainHead,
	MainFace,
	MainEar2,
	MainNeck,
	MainShoulders,
	MainArms,
	MainBack,
	MainWrist1,
	MainWrist2,
	MainRange,
	MainHands,
	MainPrimary,
	MainSecondary,
	MainFinger1,
	MainFinger2,
	MainChest,
	MainLegs,
	MainFeet,
	MainWaist,
	MainPowerSource = 9999, // temp
	MainQuest = 9999,
	MainAmmo = 21, // temp
	MainGeneral1,
	MainGeneral2,
	MainGeneral3,
	MainGeneral4,
	MainGeneral5,
	MainGeneral6,
	MainGeneral7,
	MainGeneral8,
	//MainGeneral9,
	//MainGeneral10,
	//MainCursor,
	_MainCount
};

#define INVALID_INDEX	-1
#define NOT_USED		0
#define NO_ITEM			0

// yes..these are redundant... but, they help to identify and define what is actually being performed
// plus, since they're pre-op's, they don't affect the actual binary size
#define MAP_BEGIN	0
#define MAIN_BEGIN	0
#define SUB_BEGIN	0

namespace legacy {
	// this is for perl and other legacy systems

	typedef enum {
		SLOT_CHARM			= 0,
		SLOT_EAR01			= 1,
		SLOT_HEAD			= 2,
		SLOT_FACE			= 3,
		SLOT_EAR02			= 4,
		SLOT_NECK			= 5,
		SLOT_SHOULDER		= 6,
		SLOT_ARMS			= 7,
		SLOT_BACK			= 8,
		SLOT_BRACER01		= 9,
		SLOT_BRACER02		= 10,
		SLOT_RANGE			= 11,
		SLOT_HANDS			= 12,
		SLOT_PRIMARY		= 13,
		SLOT_SECONDARY		= 14,
		SLOT_RING01			= 15,
		SLOT_RING02			= 16,
		SLOT_CHEST			= 17,
		SLOT_LEGS			= 18,
		SLOT_FEET			= 19,
		SLOT_WAIST			= 20,
		SLOT_POWER_SOURCE	= 9999,
		SLOT_AMMO			= 21,
		SLOT_GENERAL_1		= 22,
		SLOT_GENERAL_2		= 23,
		SLOT_GENERAL_3		= 24,
		SLOT_GENERAL_4		= 25,
		SLOT_GENERAL_5		= 26,
		SLOT_GENERAL_6		= 27,
		SLOT_GENERAL_7		= 28,
		SLOT_GENERAL_8		= 29,
		//SLOT_GENERAL_9	= not supported
		//SLOT_GENERAL_10	= not supported
		MainCursor			= 30,
		MainCursor_END		= (int16)0xFFFE, // I hope no one is using this...
		SLOT_TRADESKILL		= 1000,
		SLOT_INVALID		= (int16)0xFFFF,

		SLOT_POSSESSIONS_BEGIN	= 0,
		SLOT_POSSESSIONS_END	= 30,

		SLOT_EQUIPMENT_BEGIN	= 0,
		SLOT_EQUIPMENT_END		= 21,

		SLOT_PERSONAL_BEGIN		= 22,
		SLOT_PERSONAL_END		= 29,
		SLOT_PERSONAL_BAGS_BEGIN	= 251,
		SLOT_PERSONAL_BAGS_END		= 330,

		MainCursor_BAG_BEGIN		= 330,
		MainCursor_BAG_END			= 339,

		SLOT_BANK_BEGIN			= 2000,
		SLOT_BANK_END			= 2007,
		SLOT_BANK_BAGS_BEGIN	= 2030,
		SLOT_BANK_BAGS_END		= 2107,

		SLOT_TRADE_BEGIN		= 3000,
		SLOT_TRADE_END			= 3007,
		SLOT_TRADE_BAGS_BEGIN	= 3031,
		SLOT_TRADE_BAGS_END		= 3110,

		SLOT_WORLD_BEGIN	= 4000,
		SLOT_WORLD_END		= 4009
	} InventorySlot;
}

enum Zones
{
	qeynos=1,
	qeynos2=2,
	qrg=3,
	qeytoqrg=4,
	highpass=5,
	highkeep=6,
	freportn=8,
	freportw=9,
	freporte=10,
	runnyeye=11,
	qey2hh1=12,
	northkarana=13,
	southkarana=14,
	eastkarana=15,
	beholder=16,
	blackburrow=17,
	paw=18,
	rivervale=19,
	kithicor=20,
	commons=21,
	ecommons=22,
	erudnint=23,
	erudnext=24,
	nektulos=25,
	cshome=26,
	lavastorm=27,
	nektropos=28,
	halas=29,
	everfrost=30,
	soldunga=31,
	soldungb=32,
	misty=33,
	nro=34,
	sro=35,
	befallen=36,
	oasis=37,
	tox=38,
	hole=39,
	neriaka=40,
	neriakb=41,
	neriakc=42,
	neriakd=43,
	najena=44,
	qcat=45,
	innothule=46,
	feerrott=47,
	cazicthule=48,
	oggok=49,
	rathemtn=50,
	lakerathe=51,
	grobb=52,
	aviak=53,
	gfaydark=54,
	akanon=55,
	steamfont=56,
	lfaydark=57,
	crushbone=58,
	mistmoore=59,
	kaladima=60,
	felwithea=61,
	felwitheb=62,
	unrest=63,
	kedge=64,
	guktop=65,
	gukbottom=66,
	kaladimb=67,
	butcher=68,
	oot=69,
	cauldron=70,
	airplane=71,
	fearplane=72,
	permafrost=73,
	kerraridge=74,
	paineel=75,
	hateplane=76,
	arena=77,
	fieldofbone=78,
	warslikswood=79,
	soltemple=80,
	droga=81,
	cabwest=82,
	swampofnohope=83,
	firiona=84,
	lakeofillomen=85,
	dreadlands=86,
	burningwood=87,
	kaesora=88,
	sebilis=89,
	citymist=90,
	skyfire=91,
	frontiermtns=92,
	overthere=93,
	emeraldjungle=94,
	trakanon=95,
	timorous=96,
	kurn=97,
	erudsxing=98,
	stonebrunt=100,
	warrens=101,
	karnor=102,
	chardok=103,
	dalnir=104,
	charasis=105,
	cabeast=106,
	nurga=107,
	veeshan=108,
	veksar=109,
	iceclad=110,
	frozenshadow=111,
	velketor=112,
	kael=113,
	skyshrine=114,
	thurgadina=115,
	eastwastes=116,
	cobaltscar=117,
	greatdivide=118,
	wakening=119,
	westwastes=120,
	crystal=121,
	necropolis=123,
	templeveeshan=124,
	sirens=125,
	mischiefplane=126,
	growthplane=127,
	sleeper=128,
	thurgadinb=129,
	erudsxing2=130,
	shadowhaven=150,
	bazaar=151,
	nexus=152,
	echo=153,
	acrylia=154,
	sharvahl=155,
	paludal=156,
	fungusgrove=157,
	vexthal=158,
	sseru=159,
	katta=160,
	netherbian=161,
	ssratemple=162,
	griegsend=163,
	thedeep=164,
	shadeweaver=165,
	hollowshade=166,
	grimling=167,
	mseru=168,
	letalis=169,
	twilight=170,
	thegrey=171,
	tenebrous=172,
	maiden=173,
	dawnshroud=174,
	scarlet=175,
	umbral=176,
	akheva=179,
	arena2=180,
	jaggedpine=181,
	tutorial = 183,
	load=184,
	load2=185,
	clz=190,
	codecay=200,
	pojustice=201,
	poknowledge=202,
	potranquility=203,
	ponightmare=204,
	podisease=205,
	poinnovation=206,
	potorment=207,
	povalor=208,
	bothunder=209,
	postorms=210,
	hohonora=211,
	solrotower=212,
	powar=213,
	potactics=214,
	poair=215,
	powater=216,
	pofire=217,
	poeartha=218,
	potimea=219,
	hohonorb=220,
	nightmareb=221,
	poearthb=222,
	potimeb=223,
};

//These are NPCIDs in the database. All of these boats send a BoardBoat opcode when boarded.
enum Boats
{
	Stormbreaker = 770, //freporte-oot-butcherblock
	SirensBane  = 771,
	Sea_King = 772, //erudext-erudsxing-qeynos
	Golden_Maiden  = 773,
	Maidens_Voyage  = 838, //timorous-firiona
	Bloated_Belly = 839, //timorous-overthere
	Barrel_Barge = 840, //Shuttle timorous-oasis
	Muckskimmer = 841,
	Sabrina = 24056, //Shuttle in Erud
	Island_Shuttle = 96075 //Shuttle to Elf docks in timorous
	//Captains_Skiff = //Shuttle timorous-butcherblock
};

// Values are bitwise, so we can compare with the expansion field in account.
enum Expansions
{
	ClassicEQ = 0,
	KunarkEQ = 1,
	VeliousEQ = 2,
	LuclinEQ = 4,
	PlanesEQ = 8
};

static const uint32 MAX_SPELL_DB_ID_VAL = 65535;

#endif
