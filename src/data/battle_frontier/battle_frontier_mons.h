const struct FacilityMon gBattleFrontierMons[NUM_FRONTIER_MONS] =
{
    [FRONTIER_MON_SUNKERN] = {
        .species = SPECIES_SUNKERN,
        .moves = {MOVE_MEGA_DRAIN, MOVE_HELPING_HAND, MOVE_SUNNY_DAY, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_AZURILL] = {
        .species = SPECIES_AZURILL,
        .moves = {MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_SING, MOVE_CHARM},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_CATERPIE] = {
        .species = SPECIES_CATERPIE,
        .moves = {MOVE_TACKLE, MOVE_STRING_SHOT, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_WEEDLE] = {
        .species = SPECIES_WEEDLE,
        .moves = {MOVE_POISON_STING, MOVE_STRING_SHOT, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_WURMPLE] = {
        .species = SPECIES_WURMPLE,
        .moves = {MOVE_TACKLE, MOVE_STRING_SHOT, MOVE_POISON_STING, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_RALTS] = {
        .species = SPECIES_RALTS,
        .moves = {MOVE_CONFUSION, MOVE_IMPRISON, MOVE_DOUBLE_TEAM, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MAGIKARP] = {
        .species = SPECIES_MAGIKARP,
        .moves = {MOVE_FLAIL, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_FEEBAS] = {
        .species = SPECIES_FEEBAS,
        .moves = {MOVE_FLAIL, MOVE_MIRROR_COAT, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_METAPOD] = {
        .species = SPECIES_METAPOD,
        .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BASHFUL
    },
    [FRONTIER_MON_KAKUNA] = {
        .species = SPECIES_KAKUNA,
        .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BASHFUL
    },
    [FRONTIER_MON_PICHU] = {
        .species = SPECIES_PICHU,
        .moves = {MOVE_SWEET_KISS, MOVE_THUNDER_WAVE, MOVE_ATTRACT, MOVE_SHOCK_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_SILCOON] = {
        .species = SPECIES_SILCOON,
        .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BASHFUL
    },
    [FRONTIER_MON_CASCOON] = {
        .species = SPECIES_CASCOON,
        .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BASHFUL
    },
    [FRONTIER_MON_IGGLYBUFF] = {
        .species = SPECIES_IGGLYBUFF,
        .moves = {MOVE_SWEET_KISS, MOVE_SING, MOVE_ATTRACT, MOVE_SEISMIC_TOSS},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_WOOPER] = {
        .species = SPECIES_WOOPER,
        .moves = {MOVE_YAWN, MOVE_DIG, MOVE_WATER_PULSE, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_TYROGUE] = {
        .species = SPECIES_TYROGUE,
        .moves = {MOVE_MACH_PUNCH, MOVE_PROTECT, MOVE_DOUBLE_TEAM, MOVE_FACADE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SENTRET] = {
        .species = SPECIES_SENTRET,
        .moves = {MOVE_QUICK_ATTACK, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_ASSIST},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CLEFFA] = {
        .species = SPECIES_CLEFFA,
        .moves = {MOVE_SWEET_KISS, MOVE_SING, MOVE_ATTRACT, MOVE_METRONOME},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_SERIOUS
    },
    [FRONTIER_MON_SEEDOT] = {
        .species = SPECIES_SEEDOT,
        .moves = {MOVE_BULLET_SEED, MOVE_BIDE, MOVE_DEFENSE_CURL, MOVE_ROLLOUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_LOTAD] = {
        .species = SPECIES_LOTAD,
        .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_SUNNY_DAY, MOVE_MEGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_POOCHYENA] = {
        .species = SPECIES_POOCHYENA,
        .moves = {MOVE_CRUNCH, MOVE_SWAGGER, MOVE_ROAR, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SHEDINJA] = {
        .species = SPECIES_SHEDINJA,
        .moves = {MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_SILVER_WIND, MOVE_GRUDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_MAKUHITA] = {
        .species = SPECIES_MAKUHITA,
        .moves = {MOVE_FAKE_OUT, MOVE_SEISMIC_TOSS, MOVE_DETECT, MOVE_WHIRLWIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_WHISMUR] = {
        .species = SPECIES_WHISMUR,
        .moves = {MOVE_UPROAR, MOVE_SWAGGER, MOVE_BODY_SLAM, MOVE_SMELLING_SALT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ZIGZAGOON] = {
        .species = SPECIES_ZIGZAGOON,
        .moves = {MOVE_HEADBUTT, MOVE_PIN_MISSILE, MOVE_SWIFT, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ZUBAT] = {
        .species = SPECIES_ZUBAT,
        .moves = {MOVE_POISON_FANG, MOVE_WHIRLWIND, MOVE_CONFUSE_RAY, MOVE_AERIAL_ACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_TOGEPI] = {
        .species = SPECIES_TOGEPI,
        .moves = {MOVE_RETURN, MOVE_YAWN, MOVE_WISH, MOVE_SWEET_KISS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SPINARAK] = {
        .species = SPECIES_SPINARAK,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_NIGHT_SHADE, MOVE_SPIDER_WEB, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_MARILL] = {
        .species = SPECIES_MARILL,
        .moves = {MOVE_WATER_PULSE, MOVE_RAIN_DANCE, MOVE_LIGHT_SCREEN, MOVE_RETURN},
        .itemTableId = BATTLE_FRONTIER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_GENTLE
    },
    [FRONTIER_MON_HOPPIP] = {
        .species = SPECIES_HOPPIP,
        .moves = {MOVE_MEGA_DRAIN, MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_STUN_SPORE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_LAX
    },
    [FRONTIER_MON_SLUGMA] = {
        .species = SPECIES_SLUGMA,
        .moves = {MOVE_EMBER, MOVE_ROCK_SLIDE, MOVE_YAWN, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_SWINUB] = {
        .species = SPECIES_SWINUB,
        .moves = {MOVE_ICY_WIND, MOVE_DIG, MOVE_ROCK_TOMB, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_GENTLE
    },
    [FRONTIER_MON_SMEARGLE] = {
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_EXTREME_SPEED, MOVE_FAKE_OUT, MOVE_QUICK_ATTACK, MOVE_MACH_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_PIDGEY] = {
        .species = SPECIES_PIDGEY,
        .moves = {MOVE_GUST, MOVE_SAND_ATTACK, MOVE_WHIRLWIND, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHARP_BEAK,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_RATTATA] = {
        .species = SPECIES_RATTATA,
        .moves = {MOVE_HYPER_FANG, MOVE_PURSUIT, MOVE_QUICK_ATTACK, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_WYNAUT] = {
        .species = SPECIES_WYNAUT,
        .moves = {MOVE_ENCORE, MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_CHARM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SKITTY] = {
        .species = SPECIES_SKITTY,
        .moves = {MOVE_SING, MOVE_ATTRACT, MOVE_CHARM, MOVE_DOUBLE_SLAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SPEAROW] = {
        .species = SPECIES_SPEAROW,
        .moves = {MOVE_FURY_ATTACK, MOVE_PURSUIT, MOVE_MIRROR_MOVE, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_HOOTHOOT] = {
        .species = SPECIES_HOOTHOOT,
        .moves = {MOVE_CONFUSION, MOVE_HYPNOSIS, MOVE_SUPERSONIC, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_DIGLETT] = {
        .species = SPECIES_DIGLETT,
        .moves = {MOVE_MAGNITUDE, MOVE_SLASH, MOVE_ROCK_TOMB, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_LEDYBA] = {
        .species = SPECIES_LEDYBA,
        .moves = {MOVE_PSYBEAM, MOVE_AGILITY, MOVE_BATON_PASS, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BASHFUL
    },
    [FRONTIER_MON_NINCADA] = {
        .species = SPECIES_NINCADA,
        .moves = {MOVE_MUD_SLAP, MOVE_DIG, MOVE_TOXIC, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PECHA_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SURSKIT] = {
        .species = SPECIES_SURSKIT,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_RAIN_DANCE, MOVE_SWEET_SCENT, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_JIGGLYPUFF] = {
        .species = SPECIES_JIGGLYPUFF,
        .moves = {MOVE_SING, MOVE_WISH, MOVE_MIMIC, MOVE_DOUBLE_SLAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_TAILLOW] = {
        .species = SPECIES_TAILLOW,
        .moves = {MOVE_FLY, MOVE_QUICK_ATTACK, MOVE_ENDEAVOR, MOVE_FOCUS_ENERGY},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_GENTLE
    },
    [FRONTIER_MON_WINGULL] = {
        .species = SPECIES_WINGULL,
        .moves = {MOVE_WATER_PULSE, MOVE_FLY, MOVE_QUICK_ATTACK, MOVE_STEEL_WING},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_NIDORAN_M] = {
        .species = SPECIES_NIDORAN_M,
        .moves = {MOVE_DOUBLE_KICK, MOVE_POISON_STING, MOVE_DISABLE, MOVE_HELPING_HAND},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_NIDORAN_F] = {
        .species = SPECIES_NIDORAN_F,
        .moves = {MOVE_CRUNCH, MOVE_DOUBLE_KICK, MOVE_FLATTER, MOVE_HELPING_HAND},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_KIRLIA] = {
        .species = SPECIES_KIRLIA,
        .moves = {MOVE_CONFUSION, MOVE_WILL_O_WISP, MOVE_FUTURE_SIGHT, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MAREEP] = {
        .species = SPECIES_MAREEP,
        .moves = {MOVE_SHOCK_WAVE, MOVE_FLASH, MOVE_REFLECT, MOVE_COTTON_SPORE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_MEDITITE] = {
        .species = SPECIES_MEDITITE,
        .moves = {MOVE_HI_JUMP_KICK, MOVE_MEDITATE, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .itemTableId = BATTLE_FRONTIER_ITEM_MENTAL_HERB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_SLAKOTH] = {
        .species = SPECIES_SLAKOTH,
        .moves = {MOVE_YAWN, MOVE_SCRATCH, MOVE_ENCORE, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_PARAS] = {
        .species = SPECIES_PARAS,
        .moves = {MOVE_SPORE, MOVE_LEECH_LIFE, MOVE_SLASH, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_EKANS] = {
        .species = SPECIES_EKANS,
        .moves = {MOVE_ACID, MOVE_DIG, MOVE_SCREECH, MOVE_TORMENT},
        .itemTableId = BATTLE_FRONTIER_ITEM_POISON_BARB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DITTO] = {
        .species = SPECIES_DITTO,
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_METAL_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_BARBOACH] = {
        .species = SPECIES_BARBOACH,
        .moves = {MOVE_MAGNITUDE, MOVE_WATER_PULSE, MOVE_SPARK, MOVE_FUTURE_SIGHT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BASHFUL
    },
    [FRONTIER_MON_MEOWTH] = {
        .species = SPECIES_MEOWTH,
        .moves = {MOVE_SLASH, MOVE_BITE, MOVE_SCREECH, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_PINECO] = {
        .species = SPECIES_PINECO,
        .moves = {MOVE_SELF_DESTRUCT, MOVE_TAKE_DOWN, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_TRAPINCH] = {
        .species = SPECIES_TRAPINCH,
        .moves = {MOVE_TOXIC, MOVE_DIG, MOVE_SANDSTORM, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_SERIOUS
    },
    [FRONTIER_MON_SPHEAL] = {
        .species = SPECIES_SPHEAL,
        .moves = {MOVE_ICE_BALL, MOVE_WATER_PULSE, MOVE_HAIL, MOVE_MUD_SLAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_NEVER_MELT_ICE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_HORSEA] = {
        .species = SPECIES_HORSEA,
        .moves = {MOVE_WATER_GUN, MOVE_AGILITY, MOVE_ICY_WIND, MOVE_TWISTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SHROOMISH] = {
        .species = SPECIES_SHROOMISH,
        .moves = {MOVE_SPORE, MOVE_BULLET_SEED, MOVE_LEECH_SEED, MOVE_HEADBUTT},
        .itemTableId = BATTLE_FRONTIER_ITEM_MIRACLE_SEED,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SHUPPET] = {
        .species = SPECIES_SHUPPET,
        .moves = {MOVE_WILL_O_WISP, MOVE_NIGHT_SHADE, MOVE_GRUDGE, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_RAWST_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_DUSKULL] = {
        .species = SPECIES_DUSKULL,
        .moves = {MOVE_SKILL_SWAP, MOVE_NIGHT_SHADE, MOVE_DISABLE, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_ELECTRIKE] = {
        .species = SPECIES_ELECTRIKE,
        .moves = {MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_ROAR, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_VULPIX] = {
        .species = SPECIES_VULPIX,
        .moves = {MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_FIRE_SPIN, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_RAWST_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PIKACHU] = {
        .species = SPECIES_PIKACHU,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIGHT_BALL,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SANDSHREW] = {
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_DIG, MOVE_ROCK_TOMB, MOVE_SANDSTORM, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SOFT_SAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_POLIWAG] = {
        .species = SPECIES_POLIWAG,
        .moves = {MOVE_HYPNOSIS, MOVE_ICY_WIND, MOVE_WATER_GUN, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_BELLSPROUT] = {
        .species = SPECIES_BELLSPROUT,
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_STUN_SPORE, MOVE_WRAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_LAX
    },
    [FRONTIER_MON_GEODUDE] = {
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_BLAST, MOVE_STRENGTH, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_DRATINI] = {
        .species = SPECIES_DRATINI,
        .moves = {MOVE_OUTRAGE, MOVE_THUNDER_WAVE, MOVE_SUPERSONIC, MOVE_WATER_PULSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SNUBBULL] = {
        .species = SPECIES_SNUBBULL,
        .moves = {MOVE_BITE, MOVE_CHARM, MOVE_SWAGGER, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_REMORAID] = {
        .species = SPECIES_REMORAID,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_AURORA_BEAM, MOVE_PSYBEAM, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_LARVITAR] = {
        .species = SPECIES_LARVITAR,
        .moves = {MOVE_THRASH, MOVE_ROCK_SLIDE, MOVE_DIG, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_BALTOY] = {
        .species = SPECIES_BALTOY,
        .moves = {MOVE_PSYBEAM, MOVE_ANCIENT_POWER, MOVE_LIGHT_SCREEN, MOVE_MUD_SLAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_SNORUNT] = {
        .species = SPECIES_SNORUNT,
        .moves = {MOVE_ICY_WIND, MOVE_HEADBUTT, MOVE_LEER, MOVE_BITE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_BAGON] = {
        .species = SPECIES_BAGON,
        .moves = {MOVE_DRAGON_BREATH, MOVE_HEADBUTT, MOVE_BRICK_BREAK, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_BELDUM] = {
        .species = SPECIES_BELDUM,
        .moves = {MOVE_TAKE_DOWN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GULPIN] = {
        .species = SPECIES_GULPIN,
        .moves = {MOVE_TOXIC, MOVE_YAWN, MOVE_PAIN_SPLIT, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SERIOUS
    },
    [FRONTIER_MON_VENONAT] = {
        .species = SPECIES_VENONAT,
        .moves = {MOVE_PSYBEAM, MOVE_SUPERSONIC, MOVE_STUN_SPORE, MOVE_SKILL_SWAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_MANKEY] = {
        .species = SPECIES_MANKEY,
        .moves = {MOVE_KARATE_CHOP, MOVE_LOW_KICK, MOVE_SCREECH, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_BELT,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_MACHOP] = {
        .species = SPECIES_MACHOP,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_REVENGE, MOVE_ROCK_TOMB, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHELLDER] = {
        .species = SPECIES_SHELLDER,
        .moves = {MOVE_ICICLE_SPEAR, MOVE_SUPERSONIC, MOVE_CLAMP, MOVE_WITHDRAW},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SMOOCHUM] = {
        .species = SPECIES_SMOOCHUM,
        .moves = {MOVE_SWEET_KISS, MOVE_SING, MOVE_MUD_SLAP, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_NUMEL] = {
        .species = SPECIES_NUMEL,
        .moves = {MOVE_EMBER, MOVE_MAGNITUDE, MOVE_ROCK_TOMB, MOVE_SANDSTORM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_CARVANHA] = {
        .species = SPECIES_CARVANHA,
        .moves = {MOVE_BITE, MOVE_SCREECH, MOVE_SCARY_FACE, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_CORPHISH] = {
        .species = SPECIES_CORPHISH,
        .moves = {MOVE_CRABHAMMER, MOVE_WATER_PULSE, MOVE_MUD_SLAP, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_CHARMANDER] = {
        .species = SPECIES_CHARMANDER,
        .moves = {MOVE_FIRE_SPIN, MOVE_METAL_CLAW, MOVE_SMOKESCREEN, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CYNDAQUIL] = {
        .species = SPECIES_CYNDAQUIL,
        .moves = {MOVE_EMBER, MOVE_SWIFT, MOVE_QUICK_ATTACK, MOVE_SMOKESCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ABRA] = {
        .species = SPECIES_ABRA,
        .moves = {MOVE_MIMIC, MOVE_METRONOME, MOVE_FLASH, MOVE_SEISMIC_TOSS},
        .itemTableId = BATTLE_FRONTIER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_DODUO] = {
        .species = SPECIES_DODUO,
        .moves = {MOVE_FURY_ATTACK, MOVE_UPROAR, MOVE_MUD_SLAP, MOVE_FAINT_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_GASTLY] = {
        .species = SPECIES_GASTLY,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_NIGHT_SHADE, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_SWABLU] = {
        .species = SPECIES_SWABLU,
        .moves = {MOVE_TAKE_DOWN, MOVE_DREAM_EATER, MOVE_SING, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_MENTAL_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_TREECKO] = {
        .species = SPECIES_TREECKO,
        .moves = {MOVE_BULLET_SEED, MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_TORCHIC] = {
        .species = SPECIES_TORCHIC,
        .moves = {MOVE_FIRE_SPIN, MOVE_QUICK_ATTACK, MOVE_SAND_ATTACK, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_MUDKIP] = {
        .species = SPECIES_MUDKIP,
        .moves = {MOVE_WHIRLPOOL, MOVE_ENDEAVOR, MOVE_MUD_SPORT, MOVE_MUD_SLAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SQUIRTLE] = {
        .species = SPECIES_SQUIRTLE,
        .moves = {MOVE_WATER_PULSE, MOVE_BITE, MOVE_WITHDRAW, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_TOTODILE] = {
        .species = SPECIES_TOTODILE,
        .moves = {MOVE_SLASH, MOVE_WATER_PULSE, MOVE_SCREECH, MOVE_ICY_WIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SLOWPOKE] = {
        .species = SPECIES_SLOWPOKE,
        .moves = {MOVE_CONFUSION, MOVE_DISABLE, MOVE_WATER_PULSE, MOVE_YAWN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_BULBASAUR] = {
        .species = SPECIES_BULBASAUR,
        .moves = {MOVE_RAZOR_LEAF, MOVE_SWEET_SCENT, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CHIKORITA] = {
        .species = SPECIES_CHIKORITA,
        .moves = {MOVE_SECRET_POWER, MOVE_BULLET_SEED, MOVE_MUD_SLAP, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ODDISH] = {
        .species = SPECIES_ODDISH,
        .moves = {MOVE_ACID, MOVE_STUN_SPORE, MOVE_SWEET_SCENT, MOVE_MOONLIGHT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PECHA_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_PSYDUCK] = {
        .species = SPECIES_PSYDUCK,
        .moves = {MOVE_CONFUSION, MOVE_FURY_SWIPES, MOVE_AERIAL_ACE, MOVE_DISABLE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_CUBONE] = {
        .species = SPECIES_CUBONE,
        .moves = {MOVE_BONE_CLUB, MOVE_HEADBUTT, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SOFT_SAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GOLDEEN] = {
        .species = SPECIES_GOLDEEN,
        .moves = {MOVE_WATERFALL, MOVE_FURY_ATTACK, MOVE_AGILITY, MOVE_PSYBEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_NATU] = {
        .species = SPECIES_NATU,
        .moves = {MOVE_NIGHT_SHADE, MOVE_FUTURE_SIGHT, MOVE_CONFUSE_RAY, MOVE_FLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CLEFAIRY] = {
        .species = SPECIES_CLEFAIRY,
        .moves = {MOVE_FOLLOW_ME, MOVE_RETURN, MOVE_ENCORE, MOVE_SING},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_MAGNEMITE] = {
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_SHOCK_WAVE, MOVE_SUPERSONIC, MOVE_METAL_SOUND, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_RAWST_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_GENTLE
    },
    [FRONTIER_MON_SEEL] = {
        .species = SPECIES_SEEL,
        .moves = {MOVE_AURORA_BEAM, MOVE_DIVE, MOVE_BODY_SLAM, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASPEAR_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GRIMER] = {
        .species = SPECIES_GRIMER,
        .moves = {MOVE_TOXIC, MOVE_DIG, MOVE_PROTECT, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_KRABBY] = {
        .species = SPECIES_KRABBY,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_MUD_SHOT, MOVE_SWORDS_DANCE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_EXEGGCUTE] = {
        .species = SPECIES_EXEGGCUTE,
        .moves = {MOVE_PSYCHIC, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EEVEE] = {
        .species = SPECIES_EEVEE,
        .moves = {MOVE_QUICK_ATTACK, MOVE_BODY_SLAM, MOVE_SHADOW_BALL, MOVE_TICKLE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DROWZEE] = {
        .species = SPECIES_DROWZEE,
        .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HIDDEN_POWER, MOVE_FUTURE_SIGHT},
        .itemTableId = BATTLE_FRONTIER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VOLTORB] = {
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_THUNDERBOLT, MOVE_SCREECH, MOVE_THUNDER_WAVE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHINCHOU] = {
        .species = SPECIES_CHINCHOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_SURF, MOVE_ICE_BEAM, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_NEVER_MELT_ICE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TEDDIURSA] = {
        .species = SPECIES_TEDDIURSA,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SECRET_POWER, MOVE_CRUNCH, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DELIBIRD] = {
        .species = SPECIES_DELIBIRD,
        .moves = {MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_HAIL, MOVE_BLIZZARD},
        .itemTableId = BATTLE_FRONTIER_ITEM_NEVER_MELT_ICE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_HOUNDOUR] = {
        .species = SPECIES_HOUNDOUR,
        .moves = {MOVE_CRUNCH, MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHARCOAL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PHANPY] = {
        .species = SPECIES_PHANPY,
        .moves = {MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE, MOVE_FISSURE, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_SPOINK] = {
        .species = SPECIES_SPOINK,
        .moves = {MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ARON] = {
        .species = SPECIES_ARON,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_LUVDISC] = {
        .species = SPECIES_LUVDISC,
        .moves = {MOVE_DIVE, MOVE_PROTECT, MOVE_TOXIC, MOVE_SWEET_KISS},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_TENTACOOL] = {
        .species = SPECIES_TENTACOOL,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SWORDS_DANCE, MOVE_BLIZZARD, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_CACNEA] = {
        .species = SPECIES_CACNEA,
        .moves = {MOVE_SANDSTORM, MOVE_DOUBLE_TEAM, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_UNOWN] = {
        .species = SPECIES_UNOWN,
        .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_KOFFING] = {
        .species = SPECIES_KOFFING,
        .moves = {MOVE_FLAMETHROWER, MOVE_HIDDEN_POWER, MOVE_THUNDERBOLT, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_GLASSES,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_STARYU] = {
        .species = SPECIES_STARYU,
        .moves = {MOVE_SURF, MOVE_RECOVER, MOVE_MINIMIZE, MOVE_COSMIC_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SKIPLOOM] = {
        .species = SPECIES_SKIPLOOM,
        .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_MIRACLE_SEED,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NUZLEAF] = {
        .species = SPECIES_NUZLEAF,
        .moves = {MOVE_LEECH_SEED, MOVE_DOUBLE_TEAM, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LOMBRE] = {
        .species = SPECIES_LOMBRE,
        .moves = {MOVE_RAIN_DANCE, MOVE_BULLET_SEED, MOVE_SURF, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VIBRAVA] = {
        .species = SPECIES_VIBRAVA,
        .moves = {MOVE_DRAGON_BREATH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_RHYHORN] = {
        .species = SPECIES_RHYHORN,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_HORN_DRILL, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CLAMPERL] = {
        .species = SPECIES_CLAMPERL,
        .moves = {MOVE_DIVE, MOVE_TOXIC, MOVE_PROTECT, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEPPA_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_PIDGEOTTO] = {
        .species = SPECIES_PIDGEOTTO,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_QUICK_ATTACK, MOVE_STEEL_WING, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GROWLITHE] = {
        .species = SPECIES_GROWLITHE,
        .moves = {MOVE_OVERHEAT, MOVE_CRUNCH, MOVE_FLAMETHROWER, MOVE_AGILITY},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FARFETCHD] = {
        .species = SPECIES_FARFETCHD,
        .moves = {MOVE_SLASH, MOVE_QUICK_ATTACK, MOVE_SWORDS_DANCE, MOVE_AERIAL_ACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_STICK,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_OMANYTE] = {
        .species = SPECIES_OMANYTE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KABUTO] = {
        .species = SPECIES_KABUTO,
        .moves = {MOVE_CONFUSE_RAY, MOVE_ANCIENT_POWER, MOVE_DOUBLE_TEAM, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEPPA_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LILEEP] = {
        .species = SPECIES_LILEEP,
        .moves = {MOVE_BULLET_SEED, MOVE_BARRIER, MOVE_RECOVER, MOVE_AMNESIA},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ANORITH] = {
        .species = SPECIES_ANORITH,
        .moves = {MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_SWORDS_DANCE, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AIPOM] = {
        .species = SPECIES_AIPOM,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ELEKID] = {
        .species = SPECIES_ELEKID,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_LOUDRED] = {
        .species = SPECIES_LOUDRED,
        .moves = {MOVE_TEETER_DANCE, MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SPINDA] = {
        .species = SPECIES_SPINDA,
        .moves = {MOVE_TEETER_DANCE, MOVE_WISH, MOVE_PROTECT, MOVE_SEISMIC_TOSS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_NIDORINA] = {
        .species = SPECIES_NIDORINA,
        .moves = {MOVE_DOUBLE_KICK, MOVE_SLUDGE_BOMB, MOVE_AERIAL_ACE, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NIDORINO] = {
        .species = SPECIES_NIDORINO,
        .moves = {MOVE_REST, MOVE_SLEEP_TALK, MOVE_DOUBLE_EDGE, MOVE_SLUDGE_BOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FLAAFFY] = {
        .species = SPECIES_FLAAFFY,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_CHARGE, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_MAGNET,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MAGBY] = {
        .species = SPECIES_MAGBY,
        .moves = {MOVE_FLAMETHROWER, MOVE_BODY_SLAM, MOVE_PSYCHIC, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_BELT,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_NOSEPASS] = {
        .species = SPECIES_NOSEPASS,
        .moves = {MOVE_BLOCK, MOVE_LOCK_ON, MOVE_ZAP_CANNON, MOVE_DYNAMIC_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_CORSOLA] = {
        .species = SPECIES_CORSOLA,
        .moves = {MOVE_SURF, MOVE_RECOVER, MOVE_CALM_MIND, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MAWILE] = {
        .species = SPECIES_MAWILE,
        .moves = {MOVE_SWORDS_DANCE, MOVE_SING, MOVE_DOUBLE_TEAM, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_BUTTERFREE] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_SILVER_WIND, MOVE_SLEEP_POWDER, MOVE_NIGHTMARE, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BEEDRILL] = {
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SWORDS_DANCE, MOVE_BATON_PASS, MOVE_AGILITY},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_POLIWHIRL] = {
        .species = SPECIES_POLIWHIRL,
        .moves = {MOVE_REST, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE, MOVE_FRUSTRATION},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ONIX] = {
        .species = SPECIES_ONIX,
        .moves = {MOVE_ROCK_SLIDE, MOVE_DOUBLE_TEAM, MOVE_SUBSTITUTE, MOVE_SANDSTORM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_BEAUTIFLY] = {
        .species = SPECIES_BEAUTIFLY,
        .moves = {MOVE_SILVER_WIND, MOVE_MEGA_DRAIN, MOVE_AERIAL_ACE, MOVE_MORNING_SUN},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DUSTOX] = {
        .species = SPECIES_DUSTOX,
        .moves = {MOVE_MOONLIGHT, MOVE_TOXIC, MOVE_PSYCHIC, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LEDIAN] = {
        .species = SPECIES_LEDIAN,
        .moves = {MOVE_REFLECT, MOVE_BATON_PASS, MOVE_LIGHT_SCREEN, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARIADOS] = {
        .species = SPECIES_ARIADOS,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_HIDDEN_POWER, MOVE_GIGA_DRAIN, MOVE_AGILITY},
        .itemTableId = BATTLE_FRONTIER_ITEM_SILVER_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_YANMA] = {
        .species = SPECIES_YANMA,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_AERIAL_ACE, MOVE_SCREECH, MOVE_HYPNOSIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DELCATTY_1] = {
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_BODY_SLAM, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SABLEYE_1] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_CALM_MIND, MOVE_CONFUSE_RAY, MOVE_FAINT_ATTACK, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_GLASSES,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_LICKITUNG_1] = {
        .species = SPECIES_LICKITUNG,
        .moves = {MOVE_CURSE, MOVE_BODY_SLAM, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_WEEPINBELL_1] = {
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_SUNNY_DAY, MOVE_SLUDGE_BOMB, MOVE_MORNING_SUN, MOVE_MAGICAL_LEAF},
        .itemTableId = BATTLE_FRONTIER_ITEM_MIRACLE_SEED,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GRAVELER_1] = {
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_EXPLOSION, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GLOOM_1] = {
        .species = SPECIES_GLOOM,
        .moves = {MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_PROTECT, MOVE_MOONLIGHT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_PORYGON_1] = {
        .species = SPECIES_PORYGON,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_AGILITY},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KADABRA_1] = {
        .species = SPECIES_KADABRA,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ENCORE},
        .itemTableId = BATTLE_FRONTIER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WAILMER_1] = {
        .species = SPECIES_WAILMER,
        .moves = {MOVE_HYDRO_PUMP, MOVE_REST, MOVE_SLEEP_TALK, MOVE_BLIZZARD},
        .itemTableId = BATTLE_FRONTIER_ITEM_NEVER_MELT_ICE,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ROSELIA_1] = {
        .species = SPECIES_ROSELIA,
        .moves = {MOVE_INGRAIN, MOVE_TOXIC, MOVE_PROTECT, MOVE_LEECH_SEED},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_VOLBEAT_1] = {
        .species = SPECIES_VOLBEAT,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK, MOVE_TRICK},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ILLUMISE_1] = {
        .species = SPECIES_ILLUMISE,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_THUNDER_WAVE, MOVE_ENCORE, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_IVYSAUR_1] = {
        .species = SPECIES_IVYSAUR,
        .moves = {MOVE_BODY_SLAM, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_MIRACLE_SEED,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CHARMELEON_1] = {
        .species = SPECIES_CHARMELEON,
        .moves = {MOVE_ROCK_SLIDE, MOVE_OVERHEAT, MOVE_DRAGON_DANCE, MOVE_AERIAL_ACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_WARTORTLE_1] = {
        .species = SPECIES_WARTORTLE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_RAPID_SPIN, MOVE_YAWN},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PARASECT_1] = {
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_SPORE, MOVE_GROWTH},
        .itemTableId = BATTLE_FRONTIER_ITEM_MIRACLE_SEED,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_MACHOKE_1] = {
        .species = SPECIES_MACHOKE,
        .moves = {MOVE_VITAL_THROW, MOVE_CROSS_CHOP, MOVE_BULK_UP, MOVE_FIRE_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HAUNTER_1] = {
        .species = SPECIES_HAUNTER,
        .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP},
        .itemTableId = BATTLE_FRONTIER_ITEM_SPELL_TAG,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BAYLEEF_1] = {
        .species = SPECIES_BAYLEEF,
        .moves = {MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_PROTECT, MOVE_LEECH_SEED},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_QUILAVA_1] = {
        .species = SPECIES_QUILAVA,
        .moves = {MOVE_FLAMETHROWER, MOVE_OVERHEAT, MOVE_ENDURE, MOVE_REVERSAL},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CROCONAW_1] = {
        .species = SPECIES_CROCONAW,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_CRUNCH, MOVE_DRAGON_CLAW},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TOGETIC_1] = {
        .species = SPECIES_TOGETIC,
        .moves = {MOVE_BODY_SLAM, MOVE_STEEL_WING, MOVE_SOFT_BOILED, MOVE_FLAMETHROWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MURKROW_1] = {
        .species = SPECIES_MURKROW,
        .moves = {MOVE_DRILL_PECK, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_STEEL_WING},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WOBBUFFET_1] = {
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_PLUSLE_1] = {
        .species = SPECIES_PLUSLE,
        .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_WISH, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MINUN_1] = {
        .species = SPECIES_MINUN,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_ENCORE, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GROVYLE_1] = {
        .species = SPECIES_GROVYLE,
        .moves = {MOVE_LEAF_BLADE, MOVE_THUNDER_PUNCH, MOVE_BRICK_BREAK, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_COMBUSKEN_1] = {
        .species = SPECIES_COMBUSKEN,
        .moves = {MOVE_OVERHEAT, MOVE_REVERSAL, MOVE_ROCK_SLIDE, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MARSHTOMP_1] = {
        .species = SPECIES_MARSHTOMP,
        .moves = {MOVE_EARTHQUAKE, MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_REFRESH},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_PONYTA_1] = {
        .species = SPECIES_PONYTA,
        .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_FIRE_BLAST, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AZUMARILL_1] = {
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_SUBSTITUTE, MOVE_FOCUS_PUNCH, MOVE_SING, MOVE_IRON_TAIL},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SUDOWOODO_1] = {
        .species = SPECIES_SUDOWOODO,
        .moves = {MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAGCARGO_1] = {
        .species = SPECIES_MAGCARGO,
        .moves = {MOVE_SLEEP_TALK, MOVE_FLAMETHROWER, MOVE_REST, MOVE_YAWN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_GENTLE
    },
    [FRONTIER_MON_PUPITAR_1] = {
        .species = SPECIES_PUPITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE, MOVE_SANDSTORM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SOFT_SAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SEALEO_1] = {
        .species = SPECIES_SEALEO,
        .moves = {MOVE_ICE_BEAM, MOVE_HYDRO_PUMP, MOVE_SLEEP_TALK, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_RATICATE_1] = {
        .species = SPECIES_RATICATE,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MASQUERAIN_1] = {
        .species = SPECIES_MASQUERAIN,
        .moves = {MOVE_STUN_SPORE, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FURRET_1] = {
        .species = SPECIES_FURRET,
        .moves = {MOVE_ENDURE, MOVE_REVERSAL, MOVE_SHADOW_BALL, MOVE_FRUSTRATION},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUNSPARCE_1] = {
        .species = SPECIES_DUNSPARCE,
        .moves = {MOVE_HEADBUTT, MOVE_GLARE, MOVE_SHADOW_BALL, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGONAIR_1] = {
        .species = SPECIES_DRAGONAIR,
        .moves = {MOVE_DRAGON_BREATH, MOVE_THUNDER, MOVE_FIRE_BLAST, MOVE_BLIZZARD},
        .itemTableId = BATTLE_FRONTIER_ITEM_DRAGON_FANG,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MIGHTYENA_1] = {
        .species = SPECIES_MIGHTYENA,
        .moves = {MOVE_CRUNCH, MOVE_FRUSTRATION, MOVE_TAUNT, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_GLASSES,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LINOONE_1] = {
        .species = SPECIES_LINOONE,
        .moves = {MOVE_EXTREME_SPEED, MOVE_SHADOW_BALL, MOVE_BELLY_DRUM, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CASTFORM_1] = {
        .species = SPECIES_CASTFORM,
        .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_FLAMETHROWER, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_SHELGON_1] = {
        .species = SPECIES_SHELGON,
        .moves = {MOVE_DRAGON_DANCE, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_METANG_1] = {
        .species = SPECIES_METANG,
        .moves = {MOVE_METEOR_MASH, MOVE_PROTECT, MOVE_TOXIC, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_WIGGLYTUFF_1] = {
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_COUNTER, MOVE_TOXIC, MOVE_WISH, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SUNFLORA_1] = {
        .species = SPECIES_SUNFLORA,
        .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_GRASS_WHISTLE, MOVE_INGRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CHIMECHO_1] = {
        .species = SPECIES_CHIMECHO,
        .moves = {MOVE_PSYCHIC, MOVE_YAWN, MOVE_SNATCH, MOVE_HEAL_BELL},
        .itemTableId = BATTLE_FRONTIER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GLIGAR_1] = {
        .species = SPECIES_GLIGAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_QWILFISH_1] = {
        .species = SPECIES_QWILFISH,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_DESTINY_BOND, MOVE_SELF_DESTRUCT},
        .itemTableId = BATTLE_FRONTIER_ITEM_POISON_BARB,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SNEASEL_1] = {
        .species = SPECIES_SNEASEL,
        .moves = {MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_BRICK_BREAK, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PELIPPER_1] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_SURF, MOVE_AERIAL_ACE, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SWELLOW_1] = {
        .species = SPECIES_SWELLOW,
        .moves = {MOVE_FLY, MOVE_ENDEAVOR, MOVE_FACADE, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LAIRON_1] = {
        .species = SPECIES_LAIRON,
        .moves = {MOVE_METAL_CLAW, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_METAL_COAT,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TANGELA_1] = {
        .species = SPECIES_TANGELA,
        .moves = {MOVE_SUBSTITUTE, MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_ARBOK_1] = {
        .species = SPECIES_ARBOK,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_GLARE},
        .itemTableId = BATTLE_FRONTIER_ITEM_POISON_BARB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PERSIAN_1] = {
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_SHADOW_BALL, MOVE_RETURN, MOVE_TORMENT, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SEADRA_1] = {
        .species = SPECIES_SEADRA,
        .moves = {MOVE_ICE_BEAM, MOVE_DOUBLE_TEAM, MOVE_HYDRO_PUMP, MOVE_AGILITY},
        .itemTableId = BATTLE_FRONTIER_ITEM_NEVER_MELT_ICE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KECLEON_1] = {
        .species = SPECIES_KECLEON,
        .moves = {MOVE_SKILL_SWAP, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_FAINT_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SPELL_TAG,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_VIGOROTH_1] = {
        .species = SPECIES_VIGOROTH,
        .moves = {MOVE_FRUSTRATION, MOVE_EARTHQUAKE, MOVE_ENCORE, MOVE_SLACK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_LUNATONE_1] = {
        .species = SPECIES_LUNATONE,
        .moves = {MOVE_COSMIC_POWER, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SOLROCK_1] = {
        .species = SPECIES_SOLROCK,
        .moves = {MOVE_REFLECT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_SOFT_SAND,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_NOCTOWL_1] = {
        .species = SPECIES_NOCTOWL,
        .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_FAINT_ATTACK, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SANDSLASH_1] = {
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_SANDSTORM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VENOMOTH_1] = {
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_SILVER_WIND, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_SCREECH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SILVER_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_CHANSEY_1] = {
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_SOFT_BOILED, MOVE_CALM_MIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUCKY_PUNCH,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SEAKING_1] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_RAIN_DANCE, MOVE_MEGAHORN, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SILVER_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_JUMPLUFF_1] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_ENCORE, MOVE_LEECH_SEED, MOVE_BULLET_SEED, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PILOSWINE_1] = {
        .species = SPECIES_PILOSWINE,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_TOXIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_GOLBAT_1] = {
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_AIR_CUTTER, MOVE_CONFUSE_RAY, MOVE_TOXIC, MOVE_SLUDGE_BOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHARP_BEAK,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PRIMEAPE_1] = {
        .species = SPECIES_PRIMEAPE,
        .moves = {MOVE_CROSS_CHOP, MOVE_FOCUS_PUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_HITMONLEE_1] = {
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_ATTRACT, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE, MOVE_MACH_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_BELT,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HITMONCHAN_1] = {
        .species = SPECIES_HITMONCHAN,
        .moves = {MOVE_MACH_PUNCH, MOVE_SKY_UPPERCUT, MOVE_DETECT, MOVE_PURSUIT},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GIRAFARIG_1] = {
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HITMONTOP_1] = {
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_TRIPLE_KICK, MOVE_DIG, MOVE_MACH_PUNCH, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_BANETTE_1] = {
        .species = SPECIES_BANETTE,
        .moves = {MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_DESTINY_BOND, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_NINJASK_1] = {
        .species = SPECIES_NINJASK,
        .moves = {MOVE_BATON_PASS, MOVE_SWORDS_DANCE, MOVE_ENDURE, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LANSAT_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SEVIPER_1] = {
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_GLARE, MOVE_FLAMETHROWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ZANGOOSE_1] = {
        .species = SPECIES_ZANGOOSE,
        .moves = {MOVE_SLASH, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CAMERUPT_1] = {
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_MAGNITUDE, MOVE_PROTECT, MOVE_TOXIC, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SHARPEDO_1] = {
        .species = SPECIES_SHARPEDO,
        .moves = {MOVE_SURF, MOVE_CRUNCH, MOVE_TAUNT, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TROPIUS_1] = {
        .species = SPECIES_TROPIUS,
        .moves = {MOVE_SWORDS_DANCE, MOVE_AERIAL_ACE, MOVE_EARTHQUAKE, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHARP_BEAK,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_MAGNETON_1] = {
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER, MOVE_THUNDER_WAVE, MOVE_SUPERSONIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_MAGNET,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_MANTINE_1] = {
        .species = SPECIES_MANTINE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SOFT_SAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_STANTLER_1] = {
        .species = SPECIES_STANTLER,
        .moves = {MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_FRUSTRATION, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ABSOL_1] = {
        .species = SPECIES_ABSOL,
        .moves = {MOVE_CALM_MIND, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SWALOT_1] = {
        .species = SPECIES_SWALOT,
        .moves = {MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_MIRACLE_SEED,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CRAWDAUNT_1] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_SWORDS_DANCE, MOVE_SURF, MOVE_BODY_SLAM, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PIDGEOT_1] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_STEEL_WING},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHARP_BEAK,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GRUMPIG_1] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_FIRE_PUNCH, MOVE_CALM_MIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TORKOAL_1] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_IRON_DEFENSE, MOVE_AMNESIA, MOVE_TOXIC, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_KINGLER_1] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_ENDURE, MOVE_FLAIL, MOVE_SWORDS_DANCE, MOVE_SURF},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CACTURNE_1] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_SANDSTORM, MOVE_GIGA_DRAIN, MOVE_DESTINY_BOND, MOVE_FAINT_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BELLOSSOM_1] = {
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_SLEEP_POWDER, MOVE_INGRAIN, MOVE_GIGA_DRAIN, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEPPA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_OCTILLERY_1] = {
        .species = SPECIES_OCTILLERY,
        .moves = {MOVE_OCTAZOOKA, MOVE_ICE_BEAM, MOVE_FIRE_BLAST, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_HUNTAIL_1] = {
        .species = SPECIES_HUNTAIL,
        .moves = {MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_CRUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GOREBYSS_1] = {
        .species = SPECIES_GOREBYSS,
        .moves = {MOVE_CONFUSE_RAY, MOVE_AMNESIA, MOVE_ICE_BEAM, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_STARF_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_RELICANTH_1] = {
        .species = SPECIES_RELICANTH,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_REST, MOVE_AMNESIA},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_OMASTAR_1] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_BLIZZARD, MOVE_HYDRO_PUMP, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_KABUTOPS_1] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_CONFUSE_RAY, MOVE_ANCIENT_POWER, MOVE_GIGA_DRAIN, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEPPA_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_POLIWRATH_1] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_BELLY_DRUM, MOVE_REST, MOVE_BRICK_BREAK, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCYTHER_1] = {
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_SILVER_WIND, MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PINSIR_1] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_SUBMISSION, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_POLITOED_1] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_SURF, MOVE_COUNTER, MOVE_HYPNOSIS, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_NEVER_MELT_ICE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CLOYSTER_1] = {
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_SPIKE_CANNON, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_DELCATTY_2] = {
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_FAKE_TEARS, MOVE_SING, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SABLEYE_2] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_SHADOW_BALL, MOVE_FAINT_ATTACK, MOVE_CONFUSE_RAY, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_LICKITUNG_2] = {
        .species = SPECIES_LICKITUNG,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_SHADOW_BALL, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WEEPINBELL_2] = {
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_RAZOR_LEAF, MOVE_SLEEP_POWDER, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_GRAVELER_2] = {
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GLOOM_2] = {
        .species = SPECIES_GLOOM,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SLUDGE_BOMB, MOVE_MOONLIGHT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PECHA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_PORYGON_2] = {
        .species = SPECIES_PORYGON,
        .moves = {MOVE_TRI_ATTACK, MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_KADABRA_2] = {
        .species = SPECIES_KADABRA,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_REFLECT, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WAILMER_2] = {
        .species = SPECIES_WAILMER,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_SELF_DESTRUCT, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_ROSELIA_2] = {
        .species = SPECIES_ROSELIA,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_GRASS_WHISTLE, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_VOLBEAT_2] = {
        .species = SPECIES_VOLBEAT,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_TAIL_GLOW},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_ILLUMISE_2] = {
        .species = SPECIES_ILLUMISE,
        .moves = {MOVE_SILVER_WIND, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_IVYSAUR_2] = {
        .species = SPECIES_IVYSAUR,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_CHARMELEON_2] = {
        .species = SPECIES_CHARMELEON,
        .moves = {MOVE_FLAMETHROWER, MOVE_SLASH, MOVE_ANCIENT_POWER, MOVE_DRAGON_RAGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_WARTORTLE_2] = {
        .species = SPECIES_WARTORTLE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAPID_SPIN, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PARASECT_2] = {
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_DIG, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MACHOKE_2] = {
        .species = SPECIES_MACHOKE,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_FORESIGHT, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HAUNTER_2] = {
        .species = SPECIES_HAUNTER,
        .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_NIGHTMARE, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_BAYLEEF_2] = {
        .species = SPECIES_BAYLEEF,
        .moves = {MOVE_GIGA_DRAIN, MOVE_BODY_SLAM, MOVE_GRASS_WHISTLE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_QUILAVA_2] = {
        .species = SPECIES_QUILAVA,
        .moves = {MOVE_FLAMETHROWER, MOVE_CRUSH_CLAW, MOVE_BODY_SLAM, MOVE_SMOKESCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CROCONAW_2] = {
        .species = SPECIES_CROCONAW,
        .moves = {MOVE_MEGA_KICK, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE, MOVE_DIG},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TOGETIC_2] = {
        .species = SPECIES_TOGETIC,
        .moves = {MOVE_RETURN, MOVE_SWEET_KISS, MOVE_AERIAL_ACE, MOVE_YAWN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_MURKROW_2] = {
        .species = SPECIES_MURKROW,
        .moves = {MOVE_PERISH_SONG, MOVE_MEAN_LOOK, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_WOBBUFFET_2] = {
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_PLUSLE_2] = {
        .species = SPECIES_PLUSLE,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SEISMIC_TOSS, MOVE_WISH},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MINUN_2] = {
        .species = SPECIES_MINUN,
        .moves = {MOVE_THUNDERBOLT, MOVE_ATTRACT, MOVE_CHARM, MOVE_WISH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GROVYLE_2] = {
        .species = SPECIES_GROVYLE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_CRUSH_CLAW, MOVE_SCREECH, MOVE_ROCK_TOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_COMBUSKEN_2] = {
        .species = SPECIES_COMBUSKEN,
        .moves = {MOVE_FLAMETHROWER, MOVE_SKY_UPPERCUT, MOVE_SLASH, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MARSHTOMP_2] = {
        .species = SPECIES_MARSHTOMP,
        .moves = {MOVE_MUDDY_WATER, MOVE_EARTHQUAKE, MOVE_MUD_SLAP, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PONYTA_2] = {
        .species = SPECIES_PONYTA,
        .moves = {MOVE_FLAMETHROWER, MOVE_BODY_SLAM, MOVE_DOUBLE_KICK, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_AZUMARILL_2] = {
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_MEGA_KICK, MOVE_BRICK_BREAK, MOVE_IRON_TAIL, MOVE_DIG},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SUDOWOODO_2] = {
        .species = SPECIES_SUDOWOODO,
        .moves = {MOVE_MEGA_KICK, MOVE_EARTHQUAKE, MOVE_LOW_KICK, MOVE_SELF_DESTRUCT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_MAGCARGO_2] = {
        .species = SPECIES_MAGCARGO,
        .moves = {MOVE_OVERHEAT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_PUPITAR_2] = {
        .species = SPECIES_PUPITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_SEALEO_2] = {
        .species = SPECIES_SEALEO,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_BODY_SLAM, MOVE_HAIL},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_RATICATE_2] = {
        .species = SPECIES_RATICATE,
        .moves = {MOVE_SUPER_FANG, MOVE_HYPER_FANG, MOVE_SHADOW_BALL, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MASQUERAIN_2] = {
        .species = SPECIES_MASQUERAIN,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN, MOVE_STUN_SPORE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_FURRET_2] = {
        .species = SPECIES_FURRET,
        .moves = {MOVE_TRICK, MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_FOLLOW_ME},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DUNSPARCE_2] = {
        .species = SPECIES_DUNSPARCE,
        .moves = {MOVE_ICE_BEAM, MOVE_ROCK_TOMB, MOVE_BITE, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_DRAGONAIR_2] = {
        .species = SPECIES_DRAGONAIR,
        .moves = {MOVE_RETURN, MOVE_REST, MOVE_THUNDER_WAVE, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MIGHTYENA_2] = {
        .species = SPECIES_MIGHTYENA,
        .moves = {MOVE_CRUNCH, MOVE_SHADOW_BALL, MOVE_FRUSTRATION, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_LINOONE_2] = {
        .species = SPECIES_LINOONE,
        .moves = {MOVE_TRICK, MOVE_FRUSTRATION, MOVE_THUNDER_WAVE, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CASTFORM_2] = {
        .species = SPECIES_CASTFORM,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_WATER_PULSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SHELGON_2] = {
        .species = SPECIES_SHELGON,
        .moves = {MOVE_FRUSTRATION, MOVE_DRAGON_DANCE, MOVE_CRUNCH, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_METANG_2] = {
        .species = SPECIES_METANG,
        .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC, MOVE_BODY_SLAM, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_WIGGLYTUFF_2] = {
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_FAKE_TEARS, MOVE_SING, MOVE_DREAM_EATER, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SUNFLORA_2] = {
        .species = SPECIES_SUNFLORA,
        .moves = {MOVE_GIGA_DRAIN, MOVE_GRASS_WHISTLE, MOVE_GROWTH, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_CHIMECHO_2] = {
        .species = SPECIES_CHIMECHO,
        .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEAL_BELL},
        .itemTableId = BATTLE_FRONTIER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GLIGAR_2] = {
        .species = SPECIES_GLIGAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_GUILLOTINE, MOVE_SCREECH},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_QWILFISH_2] = {
        .species = SPECIES_QWILFISH,
        .moves = {MOVE_REVENGE, MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNEASEL_2] = {
        .species = SPECIES_SNEASEL,
        .moves = {MOVE_CRUSH_CLAW, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE, MOVE_SCREECH},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PELIPPER_2] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_AERIAL_ACE, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SWELLOW_2] = {
        .species = SPECIES_SWELLOW,
        .moves = {MOVE_FACADE, MOVE_AERIAL_ACE, MOVE_PURSUIT, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LAIRON_2] = {
        .species = SPECIES_LAIRON,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_ROAR, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_TANGELA_2] = {
        .species = SPECIES_TANGELA,
        .moves = {MOVE_GIGA_DRAIN, MOVE_STUN_SPORE, MOVE_REST, MOVE_AMNESIA},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ARBOK_2] = {
        .species = SPECIES_ARBOK,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_GLARE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PERSIAN_2] = {
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_ROAR, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SEADRA_2] = {
        .species = SPECIES_SEADRA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FRUSTRATION, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_KECLEON_2] = {
        .species = SPECIES_KECLEON,
        .moves = {MOVE_TRICK, MOVE_BRICK_BREAK, MOVE_SHADOW_BALL, MOVE_SKILL_SWAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_VIGOROTH_2] = {
        .species = SPECIES_VIGOROTH,
        .moves = {MOVE_CRUSH_CLAW, MOVE_REVERSAL, MOVE_ENDURE, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LUNATONE_2] = {
        .species = SPECIES_LUNATONE,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_COSMIC_POWER, MOVE_CALM_MIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SOLROCK_2] = {
        .species = SPECIES_SOLROCK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_COSMIC_POWER, MOVE_OVERHEAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_NOCTOWL_2] = {
        .species = SPECIES_NOCTOWL,
        .moves = {MOVE_PSYCHIC, MOVE_FAINT_ATTACK, MOVE_AERIAL_ACE, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SANDSLASH_2] = {
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CRUSH_CLAW, MOVE_SANDSTORM},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VENOMOTH_2] = {
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CHANSEY_2] = {
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM, MOVE_SOFT_BOILED},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SEAKING_2] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_HORN_DRILL, MOVE_MEGAHORN, MOVE_SLEEP_TALK, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_JUMPLUFF_2] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PILOSWINE_2] = {
        .species = SPECIES_PILOSWINE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BODY_SLAM, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLBAT_2] = {
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_AIR_CUTTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PRIMEAPE_2] = {
        .species = SPECIES_PRIMEAPE,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_TOMB, MOVE_OVERHEAT, MOVE_BULK_UP},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_HITMONLEE_2] = {
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_MEGA_KICK, MOVE_BRICK_BREAK, MOVE_FORESIGHT, MOVE_ROCK_TOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HITMONCHAN_2] = {
        .species = SPECIES_HITMONCHAN,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_MACH_PUNCH, MOVE_DETECT, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GIRAFARIG_2] = {
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_PSYCHIC, MOVE_CRUNCH, MOVE_BATON_PASS, MOVE_AGILITY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HITMONTOP_2] = {
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SEISMIC_TOSS, MOVE_ROCK_SLIDE, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BANETTE_2] = {
        .species = SPECIES_BANETTE,
        .moves = {MOVE_SHADOW_BALL, MOVE_FRUSTRATION, MOVE_SCREECH, MOVE_WILL_O_WISP},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NINJASK_2] = {
        .species = SPECIES_NINJASK,
        .moves = {MOVE_SLASH, MOVE_SHADOW_BALL, MOVE_SWORDS_DANCE, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SEVIPER_2] = {
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_ZANGOOSE_2] = {
        .species = SPECIES_ZANGOOSE,
        .moves = {MOVE_CRUSH_CLAW, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CAMERUPT_2] = {
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_EARTHQUAKE, MOVE_ERUPTION, MOVE_BODY_SLAM, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SHARPEDO_2] = {
        .species = SPECIES_SHARPEDO,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_SURF},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_TROPIUS_2] = {
        .species = SPECIES_TROPIUS,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_MAGNETON_2] = {
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_THUNDER_WAVE, MOVE_METAL_SOUND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_MANTINE_2] = {
        .species = SPECIES_MANTINE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STANTLER_2] = {
        .species = SPECIES_STANTLER,
        .moves = {MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ABSOL_2] = {
        .species = SPECIES_ABSOL,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_AERIAL_ACE, MOVE_IRON_TAIL},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SWALOT_2] = {
        .species = SPECIES_SWALOT,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_BODY_SLAM, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CRAWDAUNT_2] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_GUILLOTINE, MOVE_FRUSTRATION, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PIDGEOT_2] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_RETURN, MOVE_AERIAL_ACE, MOVE_STEEL_WING, MOVE_MUD_SLAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GRUMPIG_2] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TORKOAL_2] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_OVERHEAT, MOVE_BODY_SLAM, MOVE_SMOKESCREEN, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_KINGLER_2] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_GUILLOTINE, MOVE_ROCK_TOMB, MOVE_FLAIL, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CACTURNE_2] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_MEGA_KICK, MOVE_TEETER_DANCE, MOVE_FAINT_ATTACK, MOVE_SANDSTORM},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_BELLOSSOM_2] = {
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_SOLAR_BEAM, MOVE_ATTRACT, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_OCTILLERY_2] = {
        .species = SPECIES_OCTILLERY,
        .moves = {MOVE_OCTAZOOKA, MOVE_FIRE_BLAST, MOVE_THUNDER_WAVE, MOVE_MUD_SLAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_HUNTAIL_2] = {
        .species = SPECIES_HUNTAIL,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_CRUNCH, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GOREBYSS_2] = {
        .species = SPECIES_GOREBYSS,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_PSYCHIC, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_RELICANTH_2] = {
        .species = SPECIES_RELICANTH,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AMNESIA, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_OMASTAR_2] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_ICE_BEAM, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KABUTOPS_2] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_SLASH, MOVE_ROCK_SLIDE, MOVE_FLAIL, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_POLIWRATH_2] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_BRICK_BREAK, MOVE_HYPNOSIS, MOVE_REST, MOVE_BELLY_DRUM},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCYTHER_2] = {
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_SILVER_WIND, MOVE_AERIAL_ACE, MOVE_SWORDS_DANCE, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PINSIR_2] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_GUILLOTINE, MOVE_SWORDS_DANCE, MOVE_FLAIL, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_POLITOED_2] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_MUD_SLAP, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CLOYSTER_2] = {
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_DIVE, MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DUGTRIO_1] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MEDICHAM_1] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_SUBSTITUTE, MOVE_SHADOW_BALL, MOVE_FOCUS_PUNCH, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MISDREAVUS_1] = {
        .species = SPECIES_MISDREAVUS,
        .moves = {MOVE_MEAN_LOOK, MOVE_PERISH_SONG, MOVE_CONFUSE_RAY, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FEAROW_1] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_AGILITY, MOVE_FACADE, MOVE_SUBSTITUTE, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_STARF_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GRANBULL_1] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_BULK_UP, MOVE_SHADOW_BALL, MOVE_THUNDER_WAVE, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_JYNX_1] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_MEAN_LOOK, MOVE_PERISH_SONG, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DUSCLOPS_1] = {
        .species = SPECIES_DUSCLOPS,
        .moves = {MOVE_WILL_O_WISP, MOVE_CURSE, MOVE_THIEF, MOVE_TAUNT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DODRIO_1] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_DRILL_PECK, MOVE_ENDEAVOR, MOVE_ENDURE, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_MR_MIME_1] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_PSYCHIC, MOVE_SUBSTITUTE, MOVE_RECYCLE, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LANTURN_1] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_TOXIC, MOVE_CONFUSE_RAY, MOVE_DIVE, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_BRELOOM_1] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_GIGA_DRAIN, MOVE_THUNDER_PUNCH, MOVE_GROWTH, MOVE_SPORE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FORRETRESS_1] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WHISCASH_1] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE, MOVE_FISSURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_XATU_1] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_DRILL_PECK, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_STEEL_WING},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SKARMORY_1] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_SPIKES, MOVE_WHIRLWIND, MOVE_ROAR, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MAROWAK_1] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_BONE_CLUB, MOVE_BONE_RUSH, MOVE_THUNDER_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_THICK_CLUB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_QUAGSIRE_1] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_SANDSTORM, MOVE_DIVE, MOVE_AMNESIA, MOVE_DEFENSE_CURL},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CLEFABLE_1] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_BRICK_BREAK, MOVE_SHADOW_BALL, MOVE_METEOR_MASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HARIYAMA_1] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_COUNTER, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_RAICHU_1] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_VOLT_TACKLE, MOVE_THIEF, MOVE_SUBSTITUTE, MOVE_FOCUS_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_DEWGONG_1] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_FAKE_OUT, MOVE_BODY_SLAM, MOVE_SIGNAL_BEAM, MOVE_BLIZZARD},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_MANECTRIC_1] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDERBOLT, MOVE_CRUNCH, MOVE_CHARGE, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VILEPLUME_1] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_ATTRACT, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_VICTREEBEL_1] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_SUNNY_DAY, MOVE_ENCORE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_ELECTRODE_1] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_THUNDER_WAVE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_EXPLOUD_1] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_EXTRASENSORY, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SHIFTRY_1] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_SWIFT, MOVE_FAINT_ATTACK, MOVE_AERIAL_ACE, MOVE_PSYCH_UP},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_GLALIE_1] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_EXPLOSION, MOVE_SHEER_COLD, MOVE_SPIKES, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LUDICOLO_1] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_LEECH_SEED, MOVE_SYNTHESIS, MOVE_TOXIC, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HYPNO_1] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_NIGHTMARE, MOVE_CALM_MIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GOLEM_1] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_COUNTER, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RHYDON_1] = {
        .species = SPECIES_RHYDON,
        .moves = {MOVE_HORN_DRILL, MOVE_ROCK_SLIDE, MOVE_SLEEP_TALK, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ALAKAZAM_1] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_WEEZING_1] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_EXPLOSION, MOVE_SELF_DESTRUCT, MOVE_DESTINY_BOND, MOVE_MEMENTO},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KANGASKHAN_1] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_BRICK_BREAK, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ELECTABUZZ_1] = {
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_THUNDER, MOVE_CROSS_CHOP, MOVE_DOUBLE_EDGE, MOVE_IRON_TAIL},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_TAUROS_1] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_EARTHQUAKE, MOVE_FRUSTRATION, MOVE_FACADE, MOVE_IRON_TAIL},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLOWBRO_1] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SURF, MOVE_CALM_MIND, MOVE_REST, MOVE_PSYCHIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEPPA_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SLOWKING_1] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_CURSE, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MILTANK_1] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_ROLLOUT, MOVE_DEFENSE_CURL, MOVE_MILK_DRINK, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALTARIA_1] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_DRAGON_CLAW, MOVE_PROTECT, MOVE_DRAGON_CLAW, MOVE_FLY},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_NIDOQUEEN_1] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NIDOKING_1] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_TAUNT, MOVE_AMNESIA, MOVE_DEFENSE_CURL, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEPPA_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SERIOUS
    },
    [FRONTIER_MON_MAGMAR_1] = {
        .species = SPECIES_MAGMAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_THUNDER_PUNCH, MOVE_CROSS_CHOP, MOVE_SCREECH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BASHFUL
    },
    [FRONTIER_MON_CRADILY_1] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_INGRAIN, MOVE_STOCKPILE, MOVE_SPIT_UP, MOVE_SWALLOW},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARMALDO_1] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_SLASH, MOVE_AERIAL_ACE, MOVE_ANCIENT_POWER, MOVE_WATER_PULSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_GOLDUCK_1] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_PSYCHIC, MOVE_CALM_MIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAPIDASH_1] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_HYPNOSIS, MOVE_CHARM},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MUK_1] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_SHADOW_PUNCH, MOVE_BRICK_BREAK, MOVE_REST, MOVE_CURSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_GENGAR_1] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_SPITE, MOVE_TORMENT, MOVE_TAUNT, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_AMPHAROS_1] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SCIZOR_1] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_SILVER_WIND, MOVE_BATON_PASS, MOVE_STEEL_WING, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_STARF_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HERACROSS_1] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_MEGAHORN, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSARING_1] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_BULK_UP, MOVE_FRUSTRATION, MOVE_FOCUS_PUNCH, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_HOUNDOOM_1] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FIRE_BLAST, MOVE_SOLAR_BEAM, MOVE_CRUNCH, MOVE_SUNNY_DAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DONPHAN_1] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_FISSURE, MOVE_SECRET_POWER, MOVE_SWAGGER, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_CLAYDOL_1] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SHADOW_BALL, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WAILORD_1] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_AMNESIA, MOVE_REST, MOVE_SLEEP_TALK, MOVE_WATERFALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_GANLON_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_LAX
    },
    [FRONTIER_MON_NINETALES_1] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MACHAMP_1] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_ENCORE, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHUCKLE_1] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_SANDSTORM, MOVE_BIDE, MOVE_WRAP, MOVE_TOXIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_MAGO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_STEELIX_1] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_ROCK_SLIDE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TENTACRUEL_1] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_HYDRO_PUMP, MOVE_SUBSTITUTE, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_AERODACTYL_1] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_HYPER_BEAM, MOVE_FIRE_BLAST, MOVE_SKY_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_PORYGON2_1] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_MIMIC, MOVE_AERIAL_ACE, MOVE_CONVERSION, MOVE_RECYCLE},
        .itemTableId = BATTLE_FRONTIER_ITEM_STARF_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_GARDEVOIR_1] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_CHARM, MOVE_ATTRACT, MOVE_BODY_SLAM, MOVE_TAUNT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_EXEGGUTOR_1] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_NIGHTMARE, MOVE_SLEEP_POWDER, MOVE_SWEET_SCENT, MOVE_LEECH_SEED},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEPPA_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_STARMIE_1] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_RECOVER, MOVE_DOUBLE_TEAM, MOVE_SURF, MOVE_COSMIC_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_FLYGON_1] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_TOXIC, MOVE_ATTRACT, MOVE_DIG, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_VENUSAUR_1] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_PETAL_DANCE, MOVE_SAFEGUARD, MOVE_SLEEP_POWDER, MOVE_MIMIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_FIGY_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VAPOREON_1] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_DIVE, MOVE_ACID_ARMOR, MOVE_TOXIC, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_JOLTEON_1] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_BITE, MOVE_WISH},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FLAREON_1] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_OVERHEAT, MOVE_DOUBLE_EDGE, MOVE_DIG, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_MEGANIUM_1] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_FRENZY_PLANT, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_ESPEON_1] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYCHIC, MOVE_CURSE, MOVE_CALM_MIND, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_UMBREON_1] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_PSYCHIC, MOVE_BITE, MOVE_CONFUSE_RAY, MOVE_MOONLIGHT},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BLASTOISE_1] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_EARTHQUAKE, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_FERALIGATR_1] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_BLIZZARD, MOVE_COUNTER, MOVE_PROTECT, MOVE_HYDRO_CANNON},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AGGRON_1] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_IRON_TAIL, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BLAZIKEN_1] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_MIRROR_MOVE, MOVE_COUNTER, MOVE_REST, MOVE_BLAZE_KICK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WALREIN_1] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_ATTRACT, MOVE_PROTECT, MOVE_DEFENSE_CURL, MOVE_ICE_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SCEPTILE_1] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_DOUBLE_TEAM, MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CHARIZARD_1] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHARCOAL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_TYPHLOSION_1] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_SUBSTITUTE, MOVE_FLAMETHROWER, MOVE_THUNDER_PUNCH, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LAPRAS_1] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_HORN_DRILL, MOVE_SHEER_COLD, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEPPA_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CROBAT_1] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_TOXIC, MOVE_HAZE, MOVE_SWAGGER, MOVE_SLUDGE_BOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SWAMPERT_1] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_ENDEAVOR, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GYARADOS_1] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_SURF},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SNORLAX_1] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_DOUBLE_TEAM, MOVE_FISSURE, MOVE_TOXIC, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_KINGDRA_1] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_DANCE, MOVE_ENDURE, MOVE_FLAIL},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_BLISSEY_1] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_ATTRACT, MOVE_THUNDER_WAVE, MOVE_SOFT_BOILED, MOVE_METRONOME},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_MILOTIC_1] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCANINE_1] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_OVERHEAT, MOVE_EXTREME_SPEED, MOVE_IRON_TAIL, MOVE_AERIAL_ACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SALAMENCE_1] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DRAGON_DANCE, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_METAGROSS_1] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_IRON_DEFENSE, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SLAKING_1] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_HYPER_BEAM, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DUGTRIO_2] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_FURY_SWIPES, MOVE_BEAT_UP, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MEDICHAM_2] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_REVERSAL, MOVE_BULK_UP, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MAROWAK_2] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_SWORDS_DANCE, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_THICK_CLUB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_QUAGSIRE_2] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MISDREAVUS_2] = {
        .species = SPECIES_MISDREAVUS,
        .moves = {MOVE_MEAN_LOOK, MOVE_SPITE, MOVE_REST, MOVE_TOXIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_FEAROW_2] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_DOUBLE_EDGE, MOVE_STEEL_WING, MOVE_FAINT_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GRANBULL_2] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_FLAMETHROWER, MOVE_THUNDER, MOVE_ICE_PUNCH, MOVE_CRUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_JYNX_2] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_LOVELY_KISS, MOVE_NIGHTMARE, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUSCLOPS_2] = {
        .species = SPECIES_DUSCLOPS,
        .moves = {MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_GRUDGE, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DODRIO_2] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_DRILL_PECK, MOVE_SUBSTITUTE, MOVE_AGILITY, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_STARF_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MR_MIME_2] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_TRICK, MOVE_TORMENT, MOVE_PROTECT, MOVE_PSYCHIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LANTURN_2] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_RAIN_DANCE, MOVE_ICE_BEAM, MOVE_THUNDER, MOVE_SURF},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BRELOOM_2] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_SUBSTITUTE, MOVE_LEECH_SEED, MOVE_FOCUS_PUNCH, MOVE_SPORE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_FORRETRESS_2] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_SPIKES, MOVE_RAPID_SPIN, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SKARMORY_2] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_TOXIC, MOVE_FLY, MOVE_SUBSTITUTE, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_WHISCASH_2] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_DOUBLE_TEAM, MOVE_SUBSTITUTE, MOVE_EARTHQUAKE, MOVE_SURF},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_XATU_2] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_PSYCHIC, MOVE_REFLECT, MOVE_CALM_MIND, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CLEFABLE_2] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_TOXIC, MOVE_COSMIC_POWER, MOVE_MINIMIZE, MOVE_SOFT_BOILED},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_HARIYAMA_2] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_ARM_THRUST, MOVE_ROCK_TOMB, MOVE_BODY_SLAM, MOVE_REVERSAL},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RAICHU_2] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDERBOLT, MOVE_REVERSAL, MOVE_ENDURE, MOVE_IRON_TAIL},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_DEWGONG_2] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_TOXIC, MOVE_DIVE, MOVE_PROTECT, MOVE_PERISH_SONG},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MANECTRIC_2] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDERBOLT, MOVE_TOXIC, MOVE_REST, MOVE_THIEF},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VILEPLUME_2] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_AROMATHERAPY, MOVE_SLEEP_POWDER, MOVE_MOONLIGHT, MOVE_SLUDGE_BOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_VICTREEBEL_2] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_SLEEP_POWDER, MOVE_SOLAR_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ELECTRODE_2] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_THUNDER, MOVE_TOXIC, MOVE_THUNDERBOLT, MOVE_FLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_EXPLOUD_2] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHIFTRY_2] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_ROLLOUT, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GLALIE_2] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_EXPLOSION, MOVE_SHEER_COLD, MOVE_ICE_BEAM, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_STARF_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_LUDICOLO_2] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_METRONOME, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_STARF_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_HYPNO_2] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_ASSIST, MOVE_METRONOME, MOVE_MIMIC, MOVE_SNATCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_GOLEM_2] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SUNNY_DAY, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHARCOAL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_RHYDON_2] = {
        .species = SPECIES_RHYDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_HORN_DRILL, MOVE_ROCK_SLIDE, MOVE_MEGAHORN},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALAKAZAM_2] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_KINESIS, MOVE_DOUBLE_TEAM, MOVE_RECOVER, MOVE_PSYBEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_WEEZING_2] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_EXPLOSION, MOVE_SMOKESCREEN, MOVE_TOXIC, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_KANGASKHAN_2] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_WIKI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ELECTABUZZ_2] = {
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_PSYCHIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TAUROS_2] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_FRUSTRATION, MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SLOWBRO_2] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SURF, MOVE_THUNDER_WAVE, MOVE_AMNESIA, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SLOWKING_2] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_YAWN, MOVE_ICE_BEAM, MOVE_SURF, MOVE_PSYCHIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_MILTANK_2] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ALTARIA_2] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_SKY_ATTACK, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NIDOQUEEN_2] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_DIG, MOVE_TOXIC, MOVE_PROTECT, MOVE_SANDSTORM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_NIDOKING_2] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_HORN_DRILL, MOVE_ICE_BEAM, MOVE_SUPERSONIC, MOVE_MUD_SLAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MAGMAR_2] = {
        .species = SPECIES_MAGMAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_PSYCHIC, MOVE_THUNDER_PUNCH, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CRADILY_2] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_TOXIC, MOVE_BARRIER, MOVE_AMNESIA, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ARMALDO_2] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_GOLDUCK_2] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_CROSS_CHOP, MOVE_COUNTER, MOVE_FRUSTRATION, MOVE_DIG},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RAPIDASH_2] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_DOUBLE_KICK, MOVE_BOUNCE, MOVE_IRON_TAIL, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MUK_2] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN, MOVE_ICE_PUNCH, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GENGAR_2] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_FIRE_PUNCH, MOVE_SHADOW_BALL, MOVE_TAUNT, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_AMPHAROS_2] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH, MOVE_BRICK_BREAK, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SCIZOR_2] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_REVERSAL, MOVE_STEEL_WING, MOVE_SWORDS_DANCE, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HERACROSS_2] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_MEGAHORN, MOVE_REVERSAL, MOVE_FLAIL, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSARING_2] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_WIKI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HOUNDOOM_2] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FIRE_SPIN, MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DONPHAN_2] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CLAYDOL_2] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_SANDSTORM, MOVE_EARTHQUAKE, MOVE_DOUBLE_TEAM, MOVE_COSMIC_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_WAILORD_2] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_SELF_DESTRUCT, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_NINETALES_2] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_SPITE, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_WILL_O_WISP},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MACHAMP_2] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_KARATE_CHOP, MOVE_FOCUS_ENERGY},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK |  F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHUCKLE_2] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_REST, MOVE_WRAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_STEELIX_2] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_TOXIC, MOVE_BLOCK, MOVE_REST, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_APICOT_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_TENTACRUEL_2] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_TOXIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_AERODACTYL_2] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_SUBSTITUTE, MOVE_SKY_ATTACK, MOVE_HYPER_BEAM, MOVE_ANCIENT_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PORYGON2_2] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_REST, MOVE_RECYCLE, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GARDEVOIR_2] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_CALM_MIND, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_EXEGGUTOR_2] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_STARMIE_2] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CAMOUFLAGE, MOVE_PSYCH_UP, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FLYGON_2] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_SAND_TOMB, MOVE_PROTECT, MOVE_FLY, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_VENUSAUR_2] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_FACADE, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VAPOREON_2] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_ICY_WIND, MOVE_BITE, MOVE_WISH, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_JOLTEON_2] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDER, MOVE_TOXIC, MOVE_SUBSTITUTE, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FLAREON_2] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_SUNNY_DAY, MOVE_ATTRACT, MOVE_FIRE_BLAST, MOVE_BITE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MEGANIUM_2] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_SOLAR_BEAM, MOVE_GRASS_WHISTLE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ESPEON_2] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_WISH, MOVE_TOXIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_UMBREON_2] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_TOXIC, MOVE_PROTECT, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BLASTOISE_2] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_HYDRO_CANNON, MOVE_FLAIL, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_FERALIGATR_2] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_FRUSTRATION, MOVE_IRON_TAIL, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_AGGRON_2] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_ENDURE, MOVE_METAL_SOUND},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BLAZIKEN_2] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_FOCUS_ENERGY, MOVE_BLAZE_KICK, MOVE_SLASH, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_WALREIN_2] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_ENCORE, MOVE_ICY_WIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCEPTILE_2] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEECH_SEED, MOVE_SEISMIC_TOSS, MOVE_SUBSTITUTE, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CHARIZARD_2] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_DRAGON_DANCE, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYPHLOSION_2] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_FIRE_BLAST, MOVE_THUNDER_PUNCH, MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_LAPRAS_2] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_HAIL, MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, MOVE_BLIZZARD},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CROBAT_2] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_TOXIC, MOVE_AIR_CUTTER, MOVE_CONFUSE_RAY, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SWAMPERT_2] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_HYDRO_PUMP},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_GYARADOS_2] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_DRAGON_DANCE, MOVE_THUNDER_WAVE, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_2] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_EARTHQUAKE, MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_SELF_DESTRUCT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KINGDRA_2] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_RAIN_DANCE, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP, MOVE_TOXIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BLISSEY_2] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_CALM_MIND, MOVE_BLIZZARD, MOVE_THUNDER, MOVE_SOFT_BOILED},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MILOTIC_2] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_WRAP, MOVE_TOXIC, MOVE_CONFUSE_RAY, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ARCANINE_2] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_OVERHEAT, MOVE_EXTREME_SPEED, MOVE_TOXIC, MOVE_CHARM},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_GENTLE
    },
    [FRONTIER_MON_SALAMENCE_2] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_FIRE_BLAST, MOVE_HYDRO_PUMP, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_METAGROSS_2] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_EARTHQUAKE, MOVE_METEOR_MASH, MOVE_SHADOW_BALL, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLAKING_2] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_HYPER_BEAM, MOVE_SLACK_OFF, MOVE_COUNTER, MOVE_BULK_UP},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DUGTRIO_3] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_TOXIC, MOVE_DIG, MOVE_PROTECT, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MEDICHAM_3] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_BULK_UP, MOVE_CALM_MIND, MOVE_SUBSTITUTE, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_STARF_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MISDREAVUS_3] = {
        .species = SPECIES_MISDREAVUS,
        .moves = {MOVE_SPITE, MOVE_REST, MOVE_DEFENSE_CURL, MOVE_CALM_MIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEPPA_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_FEAROW_3] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_HYPER_BEAM, MOVE_SWIFT, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GRANBULL_3] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_FIRE_BLAST, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_JYNX_3] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_HAIL, MOVE_BLIZZARD, MOVE_WATER_PULSE, MOVE_PSYCHIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DUSCLOPS_3] = {
        .species = SPECIES_DUSCLOPS,
        .moves = {MOVE_CALM_MIND, MOVE_ICE_BEAM, MOVE_REST, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DODRIO_3] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_AGILITY, MOVE_ENDURE, MOVE_FLAIL, MOVE_DRILL_PECK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MR_MIME_3] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_RECYCLE, MOVE_DOUBLE_TEAM, MOVE_REST, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEPPA_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LANTURN_3] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_SUBSTITUTE, MOVE_SURF},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_BRELOOM_3] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SKY_UPPERCUT, MOVE_SLUDGE_BOMB, MOVE_IRON_TAIL},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FORRETRESS_3] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_ENDURE, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_WHISCASH_3] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_SPARK, MOVE_FUTURE_SIGHT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_XATU_3] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_AEROBLAST, MOVE_PSYCHO_BOOST, MOVE_RECOVER, MOVE_CALM_MIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SKARMORY_3] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_SPIKES, MOVE_WHIRLWIND, MOVE_TOXIC, MOVE_TAUNT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MAROWAK_3] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_SING, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_THICK_CLUB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_QUAGSIRE_3] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB, MOVE_ANCIENT_POWER, MOVE_FACADE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CLEFABLE_3] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_BELLY_DRUM, MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HARIYAMA_3] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_HYPER_BEAM, MOVE_BELLY_DRUM, MOVE_SUBSTITUTE, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RAICHU_3] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_VOLT_TACKLE, MOVE_THIEF, MOVE_SEISMIC_TOSS, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FIGY_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DEWGONG_3] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_SHEER_COLD, MOVE_LICK, MOVE_ATTRACT, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MANECTRIC_3] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_BITE, MOVE_SPARK, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VILEPLUME_3] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_SLEEP_POWDER, MOVE_SWORDS_DANCE, MOVE_SLUDGE_BOMB, MOVE_FRUSTRATION},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VICTREEBEL_3] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_SLUDGE_BOMB, MOVE_FRUSTRATION, MOVE_ENCORE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ELECTRODE_3] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_DOUBLE_TEAM, MOVE_ROLLOUT, MOVE_THUNDER_WAVE, MOVE_SCREECH},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_EXPLOUD_3] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_TAUNT, MOVE_COUNTER, MOVE_DOUBLE_EDGE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHIFTRY_3] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_THIEF, MOVE_FAKE_OUT, MOVE_EXPLOSION, MOVE_TOXIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_NONE,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GLALIE_3] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_SPIKES, MOVE_EXPLOSION, MOVE_HAIL, MOVE_BLIZZARD},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_LUDICOLO_3] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_SOLAR_BEAM, MOVE_FIRE_PUNCH, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HYPNO_3] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_BODY_SLAM, MOVE_BRICK_BREAK, MOVE_SHADOW_BALL, MOVE_HYPER_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GOLEM_3] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_EXPLOSION, MOVE_ROCK_SLIDE, MOVE_FIRE_BLAST, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_RHYDON_3] = {
        .species = SPECIES_RHYDON,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_FLAMETHROWER, MOVE_CRUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ALAKAZAM_3] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_IRON_TAIL, MOVE_PSYCHIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_WEEZING_3] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_FIRE_BLAST, MOVE_THUNDER, MOVE_PSYBEAM, MOVE_MEMENTO},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KANGASKHAN_3] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_THUNDER, MOVE_SURF, MOVE_RAIN_DANCE, MOVE_YAWN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ELECTABUZZ_3] = {
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_THUNDER_WAVE, MOVE_ATTRACT, MOVE_DOUBLE_TEAM, MOVE_FOCUS_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TAUROS_3] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_BODY_SLAM, MOVE_HYPER_BEAM, MOVE_BLIZZARD, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SLOWBRO_3] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SURF, MOVE_REST, MOVE_PSYCHIC, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SLOWKING_3] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_NIGHTMARE, MOVE_YAWN, MOVE_REST, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MILTANK_3] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_STOMP, MOVE_MILK_DRINK, MOVE_ATTRACT, MOVE_ROLLOUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ALTARIA_3] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_DRAGON_CLAW, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NIDOQUEEN_3] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_RAIN_DANCE, MOVE_THUNDER, MOVE_SURF, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NIDOKING_3] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_MEGAHORN, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAGMAR_3] = {
        .species = SPECIES_MAGMAR,
        .moves = {MOVE_COUNTER, MOVE_CROSS_CHOP, MOVE_DOUBLE_EDGE, MOVE_FLAMETHROWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_CRADILY_3] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_SLUDGE_BOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARMALDO_3] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_DOUBLE_TEAM, MOVE_REST, MOVE_DIG, MOVE_HARDEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GOLDUCK_3] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_ENDURE, MOVE_CALM_MIND, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAPIDASH_3] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FIRE_SPIN, MOVE_BOUNCE, MOVE_PROTECT, MOVE_HYPNOSIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MUK_3] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_BRICK_BREAK, MOVE_MINIMIZE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GENGAR_3] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_EXPLOSION, MOVE_SELF_DESTRUCT, MOVE_DESTINY_BOND, MOVE_CURSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_AMPHAROS_3] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_RAIN_DANCE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_CHARGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_MAGNET,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SCIZOR_3] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_SANDSTORM, MOVE_ATTRACT, MOVE_DOUBLE_TEAM, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_HERACROSS_3] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_BULK_UP, MOVE_REST, MOVE_ROCK_SLIDE, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_URSARING_3] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_REST, MOVE_SLEEP_TALK, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HOUNDOOM_3] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_OVERHEAT, MOVE_WILL_O_WISP, MOVE_THIEF, MOVE_CRUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DONPHAN_3] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_SANDSTORM, MOVE_EARTHQUAKE, MOVE_REST, MOVE_TOXIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_CLAYDOL_3] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_DOUBLE_TEAM, MOVE_COSMIC_POWER, MOVE_REFRESH, MOVE_TOXIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WAILORD_3] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FISSURE, MOVE_BLIZZARD, MOVE_SELF_DESTRUCT},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NINETALES_3] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_MIMIC, MOVE_IMPRISON, MOVE_DISABLE, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MACHAMP_3] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_FRUSTRATION, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SHUCKLE_3] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB, MOVE_CONSTRICT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_STEELIX_3] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_CRUNCH, MOVE_DRAGON_BREATH, MOVE_ENDURE, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TENTACRUEL_3] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_DOUBLE_EDGE, MOVE_REST, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AERODACTYL_3] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE, MOVE_FLY, MOVE_STEEL_WING},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PORYGON2_3] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_SHADOW_BALL, MOVE_TRI_ATTACK, MOVE_CONVERSION, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GARDEVOIR_3] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_DREAM_EATER, MOVE_NIGHTMARE, MOVE_HYPNOSIS, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EXEGGUTOR_3] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STARMIE_3] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_THUNDERBOLT, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FLYGON_3] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_STEEL_WING, MOVE_HYPER_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VENUSAUR_3] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_ATTRACT, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_VAPOREON_3] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_BATON_PASS, MOVE_DOUBLE_TEAM, MOVE_SURF, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_STARF_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_JOLTEON_3] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_DOUBLE_KICK, MOVE_IRON_TAIL, MOVE_SHADOW_BALL, MOVE_PIN_MISSILE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FLAREON_3] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_OVERHEAT, MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_CURSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_MEGANIUM_3] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_INGRAIN, MOVE_LEECH_SEED, MOVE_DOUBLE_TEAM, MOVE_TOXIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ESPEON_3] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYCHIC, MOVE_BITE, MOVE_CALM_MIND, MOVE_MORNING_SUN},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_UMBREON_3] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CURSE, MOVE_DOUBLE_TEAM, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_BLASTOISE_3] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_EARTHQUAKE, MOVE_SURF},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_FERALIGATR_3] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_ICE_BEAM, MOVE_CRUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AGGRON_3] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BLAZIKEN_3] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_OVERHEAT, MOVE_FOCUS_PUNCH, MOVE_ROCK_SLIDE, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_WALREIN_3] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_SURF, MOVE_HAIL, MOVE_SUBSTITUTE, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SCEPTILE_3] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_BLADE, MOVE_DRAGON_CLAW, MOVE_THUNDER_PUNCH, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CHARIZARD_3] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FIRE_BLAST, MOVE_DRAGON_CLAW, MOVE_AERIAL_ACE, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_TYPHLOSION_3] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_EARTHQUAKE, MOVE_OVERHEAT, MOVE_CRUSH_CLAW, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_LAPRAS_3] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_NIGHTMARE, MOVE_SING, MOVE_PROTECT, MOVE_CURSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CROBAT_3] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_CURSE, MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_AERIAL_ACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SWAMPERT_3] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_SURF, MOVE_PROTECT, MOVE_TOXIC, MOVE_REFRESH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_GYARADOS_3] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_DRAGON_RAGE, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEPPA_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SNORLAX_3] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_BODY_SLAM, MOVE_YAWN, MOVE_BLOCK, MOVE_BELLY_DRUM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_KINGDRA_3] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_DRAGON_BREATH},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BLISSEY_3] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_SNATCH, MOVE_SEISMIC_TOSS, MOVE_THUNDER, MOVE_SOFT_BOILED},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MILOTIC_3] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_SLEEP_TALK, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_GANLON_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ARCANINE_3] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLAMETHROWER, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SALAMENCE_3] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_FURY_CUTTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_METAGROSS_3] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_EARTHQUAKE, MOVE_METEOR_MASH, MOVE_PSYCHIC, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_SLAKING_3] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_THUNDER, MOVE_BLIZZARD, MOVE_FIRE_BLAST, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DUGTRIO_4] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_SANDSTORM, MOVE_SAND_ATTACK, MOVE_SUBSTITUTE, MOVE_MAGNITUDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MEDICHAM_4] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_MEGA_KICK, MOVE_DYNAMIC_PUNCH, MOVE_MIND_READER, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MISDREAVUS_4] = {
        .species = SPECIES_MISDREAVUS,
        .moves = {MOVE_PAIN_SPLIT, MOVE_THUNDER_WAVE, MOVE_ASTONISH, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FEAROW_4] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_SUBSTITUTE, MOVE_BATON_PASS, MOVE_FRUSTRATION},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GRANBULL_4] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_ATTRACT, MOVE_BULK_UP, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_JYNX_4] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_DOUBLE_SLAP, MOVE_MEDITATE, MOVE_LOVELY_KISS, MOVE_WISH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUSCLOPS_4] = {
        .species = SPECIES_DUSCLOPS,
        .moves = {MOVE_TOXIC, MOVE_MEAN_LOOK, MOVE_NIGHT_SHADE, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DODRIO_4] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_DRILL_PECK, MOVE_SWIFT, MOVE_AERIAL_ACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MR_MIME_4] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_ENCORE, MOVE_SUBSTITUTE, MOVE_BATON_PASS, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LANTURN_4] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_ENDURE, MOVE_FLAIL, MOVE_CONFUSE_RAY, MOVE_SURF},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_GENTLE
    },
    [FRONTIER_MON_BRELOOM_4] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_SPORE, MOVE_BULLET_SEED, MOVE_SKY_UPPERCUT, MOVE_IRON_TAIL},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_SERIOUS
    },
    [FRONTIER_MON_FORRETRESS_4] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_FLAIL, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WHISCASH_4] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_WHIRLPOOL, MOVE_AMNESIA, MOVE_PROTECT, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_XATU_4] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_CONFUSE_RAY, MOVE_DRILL_PECK, MOVE_QUICK_ATTACK, MOVE_STEEL_WING},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SKARMORY_4] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_CURSE, MOVE_STEEL_WING, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MAROWAK_4] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_BLIZZARD, MOVE_FLAMETHROWER, MOVE_THUNDER_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_THICK_CLUB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_QUAGSIRE_4] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB, MOVE_AMNESIA},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_CLEFABLE_4] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_NIGHTMARE, MOVE_SING, MOVE_COSMIC_POWER, MOVE_SOFT_BOILED},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEPPA_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_HARIYAMA_4] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_REST, MOVE_SLEEP_TALK, MOVE_BRICK_BREAK, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RAICHU_4] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_ATTRACT, MOVE_TEETER_DANCE, MOVE_TOXIC, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DEWGONG_4] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_HAIL, MOVE_ICE_BEAM, MOVE_SURF, MOVE_SURF},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MANECTRIC_4] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDERBOLT, MOVE_CRUNCH, MOVE_THUNDER_WAVE, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VILEPLUME_4] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_DOUBLE_TEAM, MOVE_SLEEP_POWDER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_VICTREEBEL_4] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_GROWTH, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ELECTRODE_4] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_EXPLOSION, MOVE_REST, MOVE_SNORE, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_EXPLOUD_4] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_FRUSTRATION, MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SHIFTRY_4] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_BULLET_SEED, MOVE_FAINT_ATTACK, MOVE_EXPLOSION, MOVE_TOXIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_GLALIE_4] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_LUDICOLO_4] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HYPNO_4] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_PUNCH, MOVE_ATTRACT, MOVE_ICE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_STARF_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GOLEM_4] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_SUBSTITUTE, MOVE_FOCUS_PUNCH, MOVE_REST, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RHYDON_4] = {
        .species = SPECIES_RHYDON,
        .moves = {MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_CURSE, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ALAKAZAM_4] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WEEZING_4] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_EXPLOSION, MOVE_SLUDGE_BOMB, MOVE_TOXIC, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KANGASKHAN_4] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_COUNTER, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_ELECTABUZZ_4] = {
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_TAUROS_4] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ROCK_TOMB, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLOWBRO_4] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_BELLY_DRUM, MOVE_SUBSTITUTE, MOVE_YAWN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SLOWKING_4] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_CALM_MIND, MOVE_FLAMETHROWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MILTANK_4] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_BODY_SLAM, MOVE_CURSE, MOVE_EARTHQUAKE, MOVE_MILK_DRINK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_ALTARIA_4] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_ICE_BEAM, MOVE_DRAGON_CLAW, MOVE_SING, MOVE_DREAM_EATER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NIDOQUEEN_4] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NIDOKING_4] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_ENDURE, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MAGMAR_4] = {
        .species = SPECIES_MAGMAR,
        .moves = {MOVE_CONFUSE_RAY, MOVE_DOUBLE_TEAM, MOVE_SEISMIC_TOSS, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CRADILY_4] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_MIRROR_COAT, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ARMALDO_4] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_DOUBLE_TEAM, MOVE_FURY_CUTTER, MOVE_SUBSTITUTE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GOLDUCK_4] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RAPIDASH_4] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_SUNNY_DAY, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MUK_4] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_MIMIC, MOVE_IMPRISON, MOVE_DISABLE, MOVE_SLUDGE_BOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_GENGAR_4] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_HYPNOSIS, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_AMPHAROS_4] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_IRON_TAIL, MOVE_DOUBLE_EDGE, MOVE_BRICK_BREAK, MOVE_MIMIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCIZOR_4] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_SILVER_WIND, MOVE_SWORDS_DANCE, MOVE_AGILITY, MOVE_STEEL_WING},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_HERACROSS_4] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_MEGAHORN, MOVE_SWORDS_DANCE, MOVE_REVERSAL, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_URSARING_4] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_LICK, MOVE_SWORDS_DANCE, MOVE_HYPER_BEAM, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HOUNDOOM_4] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_REVERSAL, MOVE_SHADOW_BALL, MOVE_HOWL, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DONPHAN_4] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_ENDURE, MOVE_EARTHQUAKE, MOVE_FLAIL, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CLAYDOL_4] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_SWAGGER, MOVE_DOUBLE_TEAM, MOVE_FLASH, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WAILORD_4] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_WATER_SPOUT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_SELF_DESTRUCT},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_NINETALES_4] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FRUSTRATION, MOVE_IRON_TAIL, MOVE_CONFUSE_RAY, MOVE_HOWL},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MACHAMP_4] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_TOXIC, MOVE_SUBSTITUTE, MOVE_PROTECT, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SHUCKLE_4] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_ENCORE, MOVE_PROTECT, MOVE_BIDE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_STEELIX_4] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BODY_SLAM, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TENTACRUEL_4] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_HAZE, MOVE_PROTECT, MOVE_SURF, MOVE_TOXIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_AERODACTYL_4] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_ENDURE, MOVE_DRAGON_CLAW, MOVE_FLAMETHROWER, MOVE_ANCIENT_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_PORYGON2_4] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_TRI_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GARDEVOIR_4] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_TOXIC, MOVE_WILL_O_WISP, MOVE_THUNDER_WAVE, MOVE_HYPNOSIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_EXEGGUTOR_4] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_THIEF, MOVE_CURSE, MOVE_SLUDGE_BOMB, MOVE_SLUDGE_BOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_STARMIE_4] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SWAGGER, MOVE_REFLECT, MOVE_COSMIC_POWER, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_FLYGON_4] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_SUNNY_DAY, MOVE_DRAGON_CLAW, MOVE_SOLAR_BEAM, MOVE_FLAMETHROWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VENUSAUR_4] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_FRENZY_PLANT, MOVE_SLUDGE_BOMB, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_VAPOREON_4] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_BITE, MOVE_WISH},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_JOLTEON_4] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_SUBSTITUTE, MOVE_DOUBLE_TEAM, MOVE_TOXIC, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FLAREON_4] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_WISH, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_MEGANIUM_4] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_GIGA_DRAIN, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_ESPEON_4] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_QUICK_ATTACK, MOVE_CURSE, MOVE_LIGHT_SCREEN, MOVE_MORNING_SUN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_UMBREON_4] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_SNATCH, MOVE_MOONLIGHT, MOVE_PROTECT, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_BLASTOISE_4] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_SUBSTITUTE, MOVE_BLIZZARD, MOVE_HYDRO_PUMP, MOVE_YAWN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FERALIGATR_4] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_SWORDS_DANCE, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AGGRON_4] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_SMELLING_SALT, MOVE_THUNDER_WAVE, MOVE_ROAR, MOVE_METAL_CLAW},
        .itemTableId = BATTLE_FRONTIER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BLAZIKEN_4] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_OVERHEAT, MOVE_ENDURE, MOVE_REVERSAL, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_WALREIN_4] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_SHEER_COLD, MOVE_ICE_BEAM, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_SCEPTILE_4] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_BLADE, MOVE_THUNDER_PUNCH, MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_CHARIZARD_4] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FURY_CUTTER, MOVE_SWORDS_DANCE, MOVE_SUBSTITUTE, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TYPHLOSION_4] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_ATTRACT, MOVE_TOXIC, MOVE_DIG, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LAPRAS_4] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_FRUSTRATION, MOVE_IRON_TAIL, MOVE_DRAGON_DANCE, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CROBAT_4] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_FLY, MOVE_SHADOW_BALL, MOVE_FRUSTRATION},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SWAMPERT_4] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_GYARADOS_4] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_FIRE_BLAST, MOVE_BLIZZARD, MOVE_HYDRO_PUMP, MOVE_THUNDER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SNORLAX_4] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_CURSE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_KINGDRA_4] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_TOXIC, MOVE_ATTRACT, MOVE_SUBSTITUTE, MOVE_DIVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_BLISSEY_4] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_BODY_SLAM, MOVE_SHADOW_BALL, MOVE_IRON_TAIL, MOVE_DYNAMIC_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MILOTIC_4] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_BODY_SLAM, MOVE_IRON_TAIL, MOVE_MUD_SLAP, MOVE_HYPER_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARCANINE_4] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_SUNNY_DAY, MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHARCOAL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SALAMENCE_4] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_PROTECT, MOVE_WISH},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_METAGROSS_4] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLAKING_4] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_SNORE, MOVE_REST, MOVE_BULK_UP, MOVE_YAWN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_ARTICUNO_1] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_ICE_BEAM, MOVE_EXTRASENSORY, MOVE_AERIAL_ACE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_ZAPDOS_1] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_MOLTRES_1] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_SUNNY_DAY, MOVE_FIRE_BLAST, MOVE_FLAMETHROWER, MOVE_OVERHEAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHARCOAL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_RAIKOU_1] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_BITE, MOVE_REFLECT, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ENTEI_1] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_FLAMETHROWER, MOVE_SLEEP_TALK, MOVE_CALM_MIND, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SUICUNE_1] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SURF, MOVE_SUBSTITUTE, MOVE_CALM_MIND, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_REGIROCK_1] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_ANCIENT_POWER, MOVE_REST, MOVE_CURSE, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_REGICE_1] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_BLIZZARD, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_HAIL},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REGISTEEL_1] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_METAL_CLAW, MOVE_CURSE, MOVE_AMNESIA, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_LATIAS_1] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_LATIOS_1] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_EARTHQUAKE, MOVE_FLY, MOVE_TOXIC, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARTICUNO_2] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_SHEER_COLD, MOVE_MIND_READER, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEPPA_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZAPDOS_2] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDERBOLT, MOVE_EXTRASENSORY, MOVE_METAL_SOUND, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MOLTRES_2] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_OVERHEAT, MOVE_FLAMETHROWER, MOVE_SUBSTITUTE, MOVE_SUNNY_DAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_RAIKOU_2] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_CALM_MIND, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ENTEI_2] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHARCOAL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_SUICUNE_2] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SURF, MOVE_SUBSTITUTE, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_REGIROCK_2] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGICE_2] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_REGISTEEL_2] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_EXPLOSION, MOVE_THUNDER_WAVE, MOVE_EARTHQUAKE, MOVE_METAL_CLAW},
        .itemTableId = BATTLE_FRONTIER_ITEM_LANSAT_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LATIAS_2] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_DRAGON_BREATH, MOVE_CALM_MIND, MOVE_RECOVER, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LATIOS_2] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_DRAGON_CLAW, MOVE_CALM_MIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARTICUNO_3] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_HAIL, MOVE_DOUBLE_TEAM, MOVE_REFLECT, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ZAPDOS_3] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDERBOLT, MOVE_REST, MOVE_TOXIC, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MOLTRES_3] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FLAMETHROWER, MOVE_TOXIC, MOVE_PROTECT, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAIKOU_3] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_THUNDER_SHOCK, MOVE_THUNDER},
        .itemTableId = BATTLE_FRONTIER_ITEM_MAGNET,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ENTEI_3] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_FIRE_SPIN, MOVE_DOUBLE_TEAM, MOVE_PROTECT, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SUICUNE_3] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_CALM_MIND, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REGIROCK_3] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_ANCIENT_POWER, MOVE_SUPERPOWER, MOVE_HIDDEN_POWER, MOVE_SECRET_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGICE_3] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_SNORE, MOVE_CURSE, MOVE_AMNESIA, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_REGISTEEL_3] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_METAL_CLAW, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LATIAS_3] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_MIST_BALL, MOVE_RAIN_DANCE, MOVE_THUNDER},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LATIOS_3] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_LUSTER_PURGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ARTICUNO_4] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_BLIZZARD, MOVE_HAIL, MOVE_SHEER_COLD, MOVE_SKY_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_ZAPDOS_4] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDER, MOVE_DRILL_PECK, MOVE_EXTRASENSORY, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_MOLTRES_4] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_WILL_O_WISP, MOVE_PROTECT, MOVE_MORNING_SUN, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_RAIKOU_4] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_CRUNCH, MOVE_CALM_MIND, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ENTEI_4] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_FRUSTRATION, MOVE_IRON_TAIL, MOVE_DIG, MOVE_FIRE_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SUICUNE_4] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SURF, MOVE_CALM_MIND, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_REGIROCK_4] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_REST, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGICE_4] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_REST, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REGISTEEL_4] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_TOXIC, MOVE_THUNDER_WAVE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_LATIAS_4] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_GANLON_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_LATIOS_4] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_GENGAR_5] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GENGAR_6] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GENGAR_7] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GENGAR_8] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_URSARING_5] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_MEGA_KICK, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSARING_6] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_HYPER_BEAM, MOVE_YAWN, MOVE_SWORDS_DANCE, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSARING_7] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_BULK_UP},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_URSARING_8] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MACHAMP_5] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MACHAMP_6] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_ROCK_TOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MACHAMP_7] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MACHAMP_8] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_REVENGE, MOVE_ROCK_SLIDE, MOVE_FACADE, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GARDEVOIR_5] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ENDURE, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GARDEVOIR_6] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_WILL_O_WISP, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GARDEVOIR_7] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_WILL_O_WISP, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GARDEVOIR_8] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_MAGICAL_LEAF, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STARMIE_5] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_RECOVER, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STARMIE_6] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_STARMIE_7] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_COSMIC_POWER, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STARMIE_8] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SURF, MOVE_THUNDERBOLT, MOVE_COSMIC_POWER, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LAPRAS_5] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_IRON_TAIL, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_LAPRAS_6] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_BLIZZARD},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LAPRAS_7] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SHEER_COLD, MOVE_HORN_DRILL, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEPPA_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_LAPRAS_8] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SHEER_COLD, MOVE_HORN_DRILL, MOVE_SING, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SNORLAX_5] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_MEGA_KICK, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_6] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_7] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_HYPER_BEAM, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE, MOVE_CURSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_8] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_RETURN, MOVE_SHADOW_BALL, MOVE_BELLY_DRUM, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SALAMENCE_5] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SALAMENCE_6] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_HEADBUTT, MOVE_AERIAL_ACE, MOVE_CRUNCH, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_SALAMENCE_7] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SALAMENCE_8] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_METAGROSS_5] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_METAGROSS_6] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_METAGROSS_7] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_METAGROSS_8] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGIROCK_5] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_HYPER_BEAM, MOVE_FOCUS_PUNCH, MOVE_ROCK_SLIDE, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGIROCK_6] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_ROCK_SLIDE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGICE_5] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_CURSE, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_REGICE_6] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_SLEEP_TALK, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REGISTEEL_5] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGISTEEL_6] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_SUPERPOWER, MOVE_AERIAL_ACE, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LATIAS_5] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LATIAS_6] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_MIST_BALL, MOVE_DRAGON_CLAW, MOVE_ATTRACT, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LATIAS_7] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LATIAS_8] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_LATIOS_5] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LATIOS_6] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_LUSTER_PURGE, MOVE_SHADOW_BALL, MOVE_DRAGON_CLAW, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_LATIOS_7] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_DRAGON_DANCE, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LATIOS_8] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DRAGONITE_1] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGONITE_2] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_AERIAL_ACE, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGONITE_3] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_HYPER_BEAM, MOVE_ATTRACT, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGONITE_4] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_HYPER_BEAM, MOVE_THUNDER_WAVE, MOVE_DRAGON_DANCE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGONITE_5] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_OUTRAGE, MOVE_DOUBLE_EDGE, MOVE_THUNDER_WAVE, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DRAGONITE_6] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDERBOLT, MOVE_SURF, MOVE_FLAMETHROWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRAGONITE_7] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDERBOLT, MOVE_SURF, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRAGONITE_8] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRAGONITE_9] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_THUNDER, MOVE_SURF, MOVE_RAIN_DANCE, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DRAGONITE_10] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_FIRE_BLAST, MOVE_BLIZZARD, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_TYRANITAR_1] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_THUNDERBOLT, MOVE_SURF},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_TYRANITAR_2] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_TYRANITAR_3] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYRANITAR_4] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_CRUNCH, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TYRANITAR_5] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYRANITAR_6] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CURSE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYRANITAR_7] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK, MOVE_CURSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYRANITAR_8] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_THUNDER_WAVE, MOVE_DRAGON_DANCE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYRANITAR_9] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_TYRANITAR_10] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARTICUNO_5] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_BLIZZARD, MOVE_DOUBLE_EDGE, MOVE_AGILITY, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ARTICUNO_6] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_ICE_BEAM, MOVE_AERIAL_ACE, MOVE_REFLECT, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ZAPDOS_5] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRILL_PECK, MOVE_DOUBLE_EDGE, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ZAPDOS_6] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDER, MOVE_DRILL_PECK, MOVE_RAIN_DANCE, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MOLTRES_5] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_SWAGGER, MOVE_FACADE},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MOLTRES_6] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_OVERHEAT, MOVE_DOUBLE_EDGE, MOVE_AERIAL_ACE, MOVE_STEEL_WING},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_RAIKOU_5] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_DOUBLE_EDGE, MOVE_ROAR, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_RAIKOU_6] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_CALM_MIND, MOVE_SUBSTITUTE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ENTEI_5] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_FIRE_BLAST, MOVE_DOUBLE_EDGE, MOVE_ENDURE, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ENTEI_6] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_FLAMETHROWER, MOVE_CALM_MIND, MOVE_ROAR, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SUICUNE_5] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_ICY_WIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SUICUNE_6] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    }
};
