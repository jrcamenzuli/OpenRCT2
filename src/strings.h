/*****************************************************************************
 * Copyright (c) 2014 Ted John
 * OpenRCT2, an open source clone of Roller Coaster Tycoon 2.
 *
 * This file is part of OpenRCT2.
 *
 * OpenRCT2 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *****************************************************************************/

#ifndef _STRINGS_H_
#define _STRINGS_H_

typedef unsigned short rct_string_id;

void format_string(char *dest, rct_string_id format, void *args);
void generate_string_file();
void reset_saved_strings();

enum {
	FORMAT_TINYFONT = 7,
	FORMAT_BIGFONT,
	FORMAT_MEDIUMFONT,
	FORMAT_SMALLFONT,

	FORMAT_OUTLINE,

	FORMAT_ENDQUOTES = 34,

	FORMAT_COMMA32 = 123,
	FORMAT_COMMA2DP32 = 125,
	FORMAT_COMMA16,
	FORMAT_CURRENCY2DP = 128,
	FORMAT_CURRENCY,
	FORMAT_STRING,
	FORMAT_MONTHYEAR = 133,
	FORMAT_VELOCITY = 135,
	FORMAT_LENGTH = 140,
	FORMAT_SPRITE = 141,

	FORMAT_BLACK = 142,
	FORMAT_GREY,
	FORMAT_WHITE,
	FORMAT_RED,
	FORMAT_GREEN,
	FORMAT_YELLOW,
	FORMAT_TOPAZ,
	FORMAT_CELADON,
	FORMAT_BABYBLUE,
	FORMAT_PALELAVENDER,
	FORMAT_PALEGOLD,
	FORMAT_LIGHTPINK,
	FORMAT_PEARLAQUA,
	FORMAT_PALESILVER,

	FORMAT_AMINUSCULE = 159,
	FORMAT_UP,
	FORMAT_POUND = 163,
	FORMAT_YEN = 165,
	FORMAT_COPYRIGHT = 169,
	FORMAT_DOWN,
	FORMAT_LEFTGUILLEMET,
	FORMAT_TICK,
	FORMAT_CROSS,
	FORMAT_RIGHT = 175,
	FORMAT_DEGREE,
	FORMAT_SQUARED = 178,
	FORMAT_OPENQUOTES = 180,
	FORMAT_EURO = 181,
	FORMAT_APPROX = 184,
	FORMAT_POWERNEGATIVEONE,
	FORMAT_BULLET,
	FORMAT_RIGHTGUILLEMET,
	FORMAT_SMALLUP,
	FORMAT_SMALLDOWN,
	FORMAT_LEFT,
	FORMAT_INVERTEDQUESTION
};

enum {
	STR_NONE = -1,

	STR_DATE_DAY_1 = 779,
	STR_DATE_DAY_2 = STR_DATE_DAY_1 + 1,
	STR_DATE_DAY_3 = STR_DATE_DAY_1 + 2,
	STR_DATE_DAY_4 = STR_DATE_DAY_1 + 3,
	STR_DATE_DAY_5 = STR_DATE_DAY_1 + 4,
	STR_DATE_DAY_6 = STR_DATE_DAY_1 + 5,
	STR_DATE_DAY_7 = STR_DATE_DAY_1 + 6,
	STR_DATE_DAY_8 = STR_DATE_DAY_1 + 7,
	STR_DATE_DAY_9 = STR_DATE_DAY_1 + 8,
	STR_DATE_DAY_10 = STR_DATE_DAY_1 + 9,
	STR_DATE_DAY_11 = STR_DATE_DAY_1 + 10,
	STR_DATE_DAY_12 = STR_DATE_DAY_1 + 11,
	STR_DATE_DAY_13 = STR_DATE_DAY_1 + 12,
	STR_DATE_DAY_14 = STR_DATE_DAY_1 + 13,
	STR_DATE_DAY_15 = STR_DATE_DAY_1 + 14,
	STR_DATE_DAY_16 = STR_DATE_DAY_1 + 15,
	STR_DATE_DAY_17 = STR_DATE_DAY_1 + 16,
	STR_DATE_DAY_18 = STR_DATE_DAY_1 + 17,
	STR_DATE_DAY_19 = STR_DATE_DAY_1 + 18,
	STR_DATE_DAY_20 = STR_DATE_DAY_1 + 19,
	STR_DATE_DAY_21 = STR_DATE_DAY_1 + 20,
	STR_DATE_DAY_22 = STR_DATE_DAY_1 + 21,
	STR_DATE_DAY_23 = STR_DATE_DAY_1 + 22,
	STR_DATE_DAY_24 = STR_DATE_DAY_1 + 23,
	STR_DATE_DAY_25 = STR_DATE_DAY_1 + 24,
	STR_DATE_DAY_26 = STR_DATE_DAY_1 + 25,
	STR_DATE_DAY_27 = STR_DATE_DAY_1 + 26,
	STR_DATE_DAY_28 = STR_DATE_DAY_1 + 27,
	STR_DATE_DAY_29 = STR_DATE_DAY_1 + 28,
	STR_DATE_DAY_30 = STR_DATE_DAY_1 + 29,
	STR_DATE_DAY_31 = STR_DATE_DAY_1 + 30,
	STR_MONTH_SHORT_JAN = 810,
	STR_MONTH_SHORT_FEB = STR_MONTH_SHORT_JAN + 1,
	STR_MONTH_SHORT_MAR = STR_MONTH_SHORT_JAN + 2,
	STR_MONTH_SHORT_APR = STR_MONTH_SHORT_JAN + 3,
	STR_MONTH_SHORT_MAY = STR_MONTH_SHORT_JAN + 4,
	STR_MONTH_SHORT_JUN = STR_MONTH_SHORT_JAN + 5,
	STR_MONTH_SHORT_JUL = STR_MONTH_SHORT_JAN + 6,
	STR_MONTH_SHORT_AUG = STR_MONTH_SHORT_JAN + 7,
	STR_MONTH_SHORT_SEP = STR_MONTH_SHORT_JAN + 8,
	STR_MONTH_SHORT_OCT = STR_MONTH_SHORT_JAN + 9,
	STR_MONTH_SHORT_NOV = STR_MONTH_SHORT_JAN + 10,
	STR_MONTH_SHORT_DEC = STR_MONTH_SHORT_JAN + 11,

	STR_CLOSE_X = 824,

	STR_CLOSE_WINDOW_TIP = 828,
	STR_WINDOW_TITLE_TIP = 829,

	STR_ZOOM_IN_TIP = 830,
	STR_ZOOM_OUT_TIP = 831,
	STR_ROTATE_TIP = 832,
	STR_PAUSE_GAME_TIP = 833,
	STR_DISC_AND_GAME_OPTIONS_TIP = 834,

	STR_ROLLERCOASTER_TYCOON_2 = 848,
	STR_VERSION_X = 849,
	STR_COPYRIGHT_CS = 850,
	STR_DESIGNED_AND_PROGRAMMED_BY_CS = 851,
	STR_GRAPHICS_BY_SF = 852,
	STR_SOUND_AND_MUSIC_BY_AB = 853,
	STR_ADDITIONAL_SOUNDS_RECORDED_BY_DE = 854,
	STR_REPRESENTATION_BY_JL = 855,
	STR_THANKS_TO = 856,
	STR_THANKS_TO_PEOPLE = 857,
	STR_CREDIT_SPARE_1 = 858,
	STR_CREDIT_SPARE_2 = 859,
	STR_CREDIT_SPARE_3 = 860,
	STR_CREDIT_SPARE_4 = 861,
	STR_CREDIT_SPARE_5 = 862,
	STR_CREDIT_SPARE_6 = 863,
	STR_CREDIT_SPARE_7 = 864,

	STR_QUIT_SCENARIO_EDITOR = 887,

	STR_SCR_BMP = 890,
	STR_SCREENSHOT = 891,
	STR_SCREENSHOT_SAVED_AS = 892,
	STR_SCREENSHOT_FAILED = 893,

	STR_VIEW_OPTIONS_TIP = 937,
	STR_ADJUST_LAND_TIP = 938,

	STR_SAVE_PROMPT_SAVE = 944,
	STR_SAVE_PROMPT_DONT_SAVE = 945,
	STR_SAVE_PROMPT_CANCEL = 946,

	STR_SAVE_BEFORE_LOADING = 947,
	STR_SAVE_BEFORE_QUITTING = 948,
	STR_SAVE_BEFORE_QUITTING_2 = 949,

	STR_LOAD_GAME = 950,
	STR_QUIT_GAME = 951,
	STR_QUIT_GAME_2 = 952,
	STR_LOAD_LANDSCAPE = 953,

	STR_CANCEL = 972,
	STR_OK = 973,

	STR_RIDES = 974,
	STR_SHOPS_AND_STALLS = 975,
	STR_RESTROOMS_AND_INFORMATION_KIOSKS = 976,

	STR_RAISE_COST_AMOUNT = 984,
	STR_LOWER_COST_AMOUNT = 985,
	STR_COST_AMOUNT = 986,

	STR_OPEN_OR_CLOSE_ALL_RIDES = 1009,
	STR_OPEN_OR_CLOSE_PARK_TIP = 1010,
	STR_CLOSE_ALL = 1011,
	STR_OPEN_ALL = 1012,
	STR_CLOSE_PARK = 1013,
	STR_OPEN_PARK = 1014,

	STR_LOCATE_SUBJECT_TIP = 1027,

	STR_LOAD_GAME_DIALOG_TITLE = 1036,
	STR_LOAD_LANDSCAPE_DIALOG_TITLE = 1037,

	STR_RCT2_SAVED_GAME = 1043,
	STR_RCT2_LANDSCAPE_FILE = 1045,

	STR_RIDES_IN_PARK_TIP = 1053,

	STR_PLACE_SCENERY_TIP = 1159,
	STR_ADJUST_WATER_TIP = 1160,

	STR_BUILD_FOOTPATH_TIP = 1173,
	STR_CANT_BUILD_FOOTPATH_HERE = 1176,
	STR_CANT_REMOVE_FOOTPATH_FROM_HERE = 1177,

	STR_FOOTPATHS = 1181,
	STR_TYPE = 1182,
	STR_DIRECTION = 1183,
	STR_SLOPE = 1184,
	STR_DIRECTION_TIP = 1185,
	STR_SLOPE_DOWN_TIP = 1186,
	STR_LEVEL_TIP = 1187,
	STR_SLOPE_UP_TIP = 1188,
	STR_CONSTRUCT_THE_SELECTED_FOOTPATH_SECTION_TIP = 1189,
	STR_REMOVE_PREVIOUS_FOOTPATH_SECTION_TIP = 1190,

	STR_CLOSED = 1194,
	STR_TEST_RUN = 1195,
	STR_OPEN = 1196,
	STR_BROKEN_DOWN = 1197,
	STR_CRASHED = 1198,

	STR_QUEUE_EMPTY = 1201,
	STR_QUEUE_ONE_PERSON = 1202,
	STR_QUEUE_PEOPLE = 1203,
	STR_QUEUE_TIME_LABEL = 1204,
	STR_QUEUE_TIME_PLURAL_LABEL = 1205,

	STR_NUMERIC_UP = 1218,
	STR_NUMERIC_DOWN = 1219,

	STR_BUILD_THIS = 1407,
	STR_COST_LABEL = 1408,

	STR_QUEUE_LINE_PATH_TIP = 1423,
	STR_FOOTPATH_TIP = 1424,

	STR_FREE = 1430,

	STR_GUESTS = 1463,

	STR_CONSTRUCT_FOOTPATH_ON_LAND_TIP = 1655,
	STR_CONSTRUCT_BRIDGE_OR_TUNNEL_FOOTPATH_TIP = 1656,

	STR_GUESTS_TIP = 1693,
	STR_STAFF_TIP = 1694,

	STR_CANT_RENAME_PARK = 1717,
	STR_PARK_NAME = 1718,
	STR_ENTER_PARK_NAME = 1719,

	STR_NAME_PARK_TIP = 1720,
	STR_PARK_CLOSED = 1721,
	STR_PARK_OPEN = 1722,

	STR_CANT_OPEN_PARK = 1723,
	STR_CANT_CLOSE_PARK = 1724,

	STR_INDIVIDUAL_GUESTS_TIP = 1752,
	STR_SUMMARISED_GUESTS_TIP = 1753,
	STR_ADMISSION_PRICE = 1756,

	STR_MUSIC = 1777,

	STR_ACTIONS = 1814,
	STR_THOUGHTS = STR_ACTIONS + 1,
	STR_INFORMATION_TYPE_TIP = 1816,
	STR_GUESTS_COUNT_COMMA_SEP = 1817,
	STR_ALL_GUESTS = 1818,
	STR_ALL_GUESTS_SUMMARISED = 1819,
	STR_GUESTS_FILTER = 1820,
	STR_GUESTS_FILTER_THINKING = STR_GUESTS_FILTER + 1,
	STR_GUESTS_FILTER_THINKING_ABOUT = STR_GUESTS_FILTER + 2,

	STR_STATUS = 1826,
	STR_POPULARITY = 1827,
	STR_SATISFACTION = 1828,
	STR_PROFIT = 1829,
	STR_QUEUE_LENGTH = 1830,
	STR_QUEUE_TIME = 1831,
	STR_RELIABILITY = 1832,
	STR_DOWN_TIME = 1833,
	STR_GUESTS_FAVOURITE = 1834,
	STR_POPULARITY_UNKNOWN_LABEL = 1835,
	STR_POPULARITY_LABEL = 1836,
	STR_SATISFACTION_UNKNOWN_LABEL = 1837,
	STR_SATISFACTION_LABEL = 1838,
	STR_RELIABILITY_LABEL = 1839,
	STR_DOWN_TIME_LABEL = 1840,
	STR_PROFIT_LABEL = 1841,
	STR_GUESTS_FAVOURITE_LABEL = 1842,
	STR_GUESTS_FAVOURITE_PLURAL_LABEL = 1843,
	STR_RIDE_LIST_INFORMATION_TYPE_TIP = 1844,
	STR_NUM_GUESTS = 1846,

	STR_BUILD_RIDE_TIP = 1895,

	STR_START_NEW_GAME_TIP = 1921,
	STR_CONTINUE_SAVED_GAME_TIP = 1922,
	STR_SHOW_TUTORIAL_TIP = 1923,
	STR_EXIT = 1924,

	STR_SHOW_SUBJECT_TIP = 1937,

	STR_CELCIUS_VALUE = 2216,
	STR_FAHRENHEIT_VALUE = 2217,

	STR_PARK_RATING_LABEL = 2220,
	STR_PARK_RATING_TIP = 2221,

	STR_GUESTS_IN_PARK_LABEL = 2223,

	STR_NUMBER_OF_RIDES_LABEL = 2321,
	STR_STAFF_LABEL = 2322,
	STR_PARK_SIZE_METRIC_LABEL = 2323,
	STR_PARK_SIZE_IMPERIAL_LABEL = 2324,

	SPR_BUY_LAND_RIGHTS_TIP = 2325,
	SPR_BUY_CONSTRUCTION_RIGHTS_TIP = 2326,

	STR_PARK_INFORMATION_TIP = 2233,
	STR_RECENT_MESSAGES = 2234,

	STR_MONTH_JANUARY = 2236,
	STR_MONTH_FEBRUARY = STR_MONTH_JANUARY + 1,
	STR_MONTH_MARCH = STR_MONTH_JANUARY + 2,
	STR_MONTH_APRIL = STR_MONTH_JANUARY + 3,
	STR_MONTH_MAY = STR_MONTH_JANUARY + 4,
	STR_MONTH_JUNE = STR_MONTH_JANUARY + 5,
	STR_MONTH_JULY = STR_MONTH_JANUARY + 6,
	STR_MONTH_AUGUST = STR_MONTH_JANUARY + 7,
	STR_MONTH_SEPTEMBER = STR_MONTH_JANUARY + 8,
	STR_MONTH_OCTOBER = STR_MONTH_JANUARY + 9,
	STR_MONTH_NOVEMBER = STR_MONTH_JANUARY + 10,
	STR_MONTH_DECEMBER = STR_MONTH_JANUARY + 11,

	STR_SELECT_SCENARIO = 2291,

	STR_CHANGE_BASE_LAND_TIP = 2294,
	STR_CHANGE_VERTICAL_LAND_TIP = 2295,

	STR_SOUND_QUALITY = 2317,
	STR_CURRENCY = 2328,
	STR_DISTANCE_AND_SPEED = 2329,
	STR_TEMPERATURE = 2330,
	STR_HEIGHT_LABELS = 2331,
	STR_DISPLAY_RESOLUTION = 2360,
	STR_TILE_EDGE_SMOOTHING_TIP = 2362,
	STR_TURN_GRIDLINES_ON_TIP = 2364,

	//STR_NONE = 2368,
	STR_LOW = 2369,
	STR_AVERAGE = 2370,
	STR_HIGH = 2371,
	//STR_LOW = 2372,
	STR_MEDIUM = 2373,
	//STR_HIGH = 2374,
	STR_VERY_HIGH = 2375,
	STR_EXTREME = 2376,
	STR_ULTRA_EXTREME = 2377,

	STR_ADJUST_SMALLER_LAND_TIP = 2378,
	STR_ADJUST_LARGER_LAND_TIP = 2379,
	STR_ADJUST_SMALLER_WATER_TIP = 2380,
	STR_ADJUST_LARGER_WATER_TIP = 2381,
	STR_LAND = 2382,
	STR_WATER = 2383,

	STR_OBJECTIVE_NONE = 2385,
	STR_OBJECTIVE_GUESTS_BY = STR_OBJECTIVE_NONE + 1,
	STR_OBJECTIVE_PARK_VALUE_BY = STR_OBJECTIVE_NONE + 2,
	STR_OBJECTIVE_HAVE_FUN = STR_OBJECTIVE_NONE + 3,
	STR_OBJECTIVE_BUILD_THE_BEST = STR_OBJECTIVE_NONE + 4,
	STR_OBJECTIVE_10_ROLLERCOASTERS = STR_OBJECTIVE_NONE + 5,
	STR_OBJECTIVE_GUESTS_AND_rating = STR_OBJECTIVE_NONE + 6,
	STR_OBJECTIVE_MONTHLY_RIDE_INCOME = STR_OBJECTIVE_NONE + 7,
	STR_OBJECTIVE_10_ROLLERCOASTERS_LENGTH = STR_OBJECTIVE_NONE + 8,
	STR_OBJECTIVE_FINISH_5_ROLLERCOASTERS = STR_OBJECTIVE_NONE + 9,
	STR_OBJECTIVE_REPLAY_LOAN_AND_PARK_VALUE = STR_OBJECTIVE_NONE + 10,
	STR_OBJECTIVE_MONTHLY_FOOD_INCOME = STR_OBJECTIVE_NONE + 11,

	STR_MARKETING_FINISHED_BASE = 2446,
	STR_MARKETING_FINISHED_FREE_ENTRY = 2446,
	STR_MARKETING_FINISHED_FREE_RIDES = 2447,
	STR_MARKETING_FINISHED_HALF_PRICE_ENTRY = 2448,
	STR_MARKETING_FINISHED_FREE_RIDE = 2449,
	STR_MARKETING_FINISHED_PARK_ADS = 2450,
	STR_MARKETING_FINISHED_RIDE_ADS = 2451,

	STR_PARK_ENTRANCE_TAB_TIP = 2462,
	STR_PARK_RATING_TAB_TIP = 2463,
	STR_PARK_GUESTS_TAB_TIP = 2464,
	STR_PARK_PRICE_TAB_TIP = 2465,
	STR_PARK_STATS_TAB_TIP = 2466,
	STR_PARK_OBJECTIVE_TAB_TIP = 2467,
	STR_PARK_AWARDS_TAB_TIP = 2468,

	STR_PROFIT_PER_WEEK_AND_PARK_VALUE_TIP = 2482,

	STR_REAL_NAME_TOGGLE_TIP = 2488,

	STR_ENTER_NAME_INTO_SCENARIO_CHART = 2790,

	STR_COMPLETED_BY_WITH_COMPANY_VALUE = 2794,
	STR_SORT = 2795,
	STR_RIDE_LIST_SORT_TIP = 2796,

	STR_SCREEN_EDGE_SCROLL_TIP = 2798,
	STR_CHANGE_HOTKEY_TIP = 2799,

	STR_TOTAL_ADMISSIONS = 2800,
	STR_INCOME_FROM_ADMISSIONS = 2801,

	STR_SHOW_GUESTS_ON_MAP_TIP = 2803,
	STR_SHOW_MAP_TIP = 2805,

	STR_PEEPS_DISGUSTED_BY_PATHS = 2806,
	STR_PEEPS_DISLIKE_LITTER = 2807,
	STR_PEEPS_DISLIKE_VANDALISM = 2808,
	STR_PEEPS_ARE_HUNGRY = 2809,
	STR_PEEPS_ARE_THIRSTY = 2810,
	STR_PEEPS_CANT_FIND_BATHROOM  = 2811,
	STR_PEEPS_GETTING_LOST_OR_STUCK = 2812,

	STR_ENTRANCE_FEE_TOO_HI = 2813,

	STR_AWARD_MOST_UNTIDY = 2814,
	STR_MOST_TIDY = STR_AWARD_MOST_UNTIDY + 1,
	STR_BEST_ROLLERCOASTERS = STR_AWARD_MOST_UNTIDY + 2,
	STR_BEST_VALUE = STR_AWARD_MOST_UNTIDY + 3,
	STR_MOST_BEAUTIFUL = STR_AWARD_MOST_UNTIDY + 4,
	STR_WORST_VALUE = STR_AWARD_MOST_UNTIDY + 5,
	STR_SAFEST = STR_AWARD_MOST_UNTIDY + 6,
	STR_BEST_STAFF = STR_AWARD_MOST_UNTIDY + 7,
	STR_BEST_FOOD = STR_AWARD_MOST_UNTIDY + 8,
	STR_WORST_FOOD = STR_AWARD_MOST_UNTIDY + 9,
	STR_BEST_RESTROOMS = STR_AWARD_MOST_UNTIDY + 10,
	STR_MOST_DISAPPOINTING = STR_AWARD_MOST_UNTIDY + 11,
	STR_BEST_WATER_RIDES = STR_AWARD_MOST_UNTIDY + 12,
	STR_BEST_CUSTOM_DESIGNED_RIDES = STR_AWARD_MOST_UNTIDY + 13,
	STR_MOST_DAZZLING_RIDE_COLOURS = STR_AWARD_MOST_UNTIDY + 14,
	STR_MOST_CONFUSING_LAYOUT = STR_AWARD_MOST_UNTIDY + 15,
	STR_BEST_GENTLE_RIDES = STR_AWARD_MOST_UNTIDY + 16,

	STR_NO_RECENT_AWARDS = 2848,

	STR_TUTORIAL = 2856,
	STR_PRESS_KEY_OR_MOUSE_BUTTON_FOR_CONTROL = 2857,

	STR_INFOGRAMES_INTERACTIVE_CREDITS = 2860,
	STR_LICENSED_TO_INFOGRAMES_INTERACTIVE_INC = 2861,
	STR_MUSIC_ACKNOWLEDGEMENTS_ELLIPSIS = 2862,
	STR_MUSIC_ACKNOWLEDGEMENTS = 2863,

	STR_CHANGE_BANNER_TEXT_TIP = 2986,
	STR_SET_AS_NO_ENTRY_BANNER_TIP = 2987,
	STR_DEMOLISH_BANNER_TIP = 2988,
	STR_SELECT_MAIN_COLOR_TIP = 2989,
	STR_SELECT_TEXT_COLOR_TIP = 2990,

	STR_LICENCE_AGREEMENT_NOTICE_1 = 2969,
	STR_LICENCE_AGREEMENT_NOTICE_2 = 2970,

	STR_UNABLE_TO_LOAD_FILE = 3010,
	STR_FILE_CONTAINS_INVALID_DATA = 3011,

	STR_CONSTRUCTION_MARKER = 3057,

	STR_BEGINNER_PARKS = 3064,
	STR_CHALLENGING_PARKS = STR_BEGINNER_PARKS + 1,
	STR_EXPERT_PARKS = STR_BEGINNER_PARKS + 2,
	STR_REAL_PARKS = STR_BEGINNER_PARKS + 3,
	STR_OTHER_PARKS = STR_BEGINNER_PARKS + 4,

	STR_LIST_RIDES_TIP = 3104,
	STR_LIST_SHOPS_AND_STALLS_TIP = 3105,
	STR_LIST_KIOSKS_AND_FACILITIES_TIP = 3106,

	STR_SCROLL_LEFT_TIP = 3145,
	STR_SCROLL_RIGHT_TIP = STR_SCROLL_LEFT_TIP + 1,
	STR_SCROLL_LEFT_FAST_TIP = STR_SCROLL_LEFT_TIP + 2,
	STR_SCROLL_RIGHT_FAST_TIP = STR_SCROLL_LEFT_TIP + 3,
	STR_SCROLL_LEFT_RIGHT_TIP = STR_SCROLL_LEFT_TIP + 4,
	STR_SCROLL_UP_TIP = STR_SCROLL_LEFT_TIP + 5,
	STR_SCROLL_DOWN_TIP = STR_SCROLL_LEFT_TIP + 6,
	STR_SCROLL_UP_FAST_TIP = STR_SCROLL_LEFT_TIP + 7,
	STR_SCROLL_DOWN_FAST_TIP = STR_SCROLL_LEFT_TIP + 8,
	STR_SCROLL_UP_DOWN_TIP = STR_SCROLL_LEFT_TIP + 9,


	STR_LIST = 3159,

	STR_OBJECTIVE = 3322,

	STR_SAVE_PLUGIN_DATA_TIP = 3334,

	STR_GAME_TOOLS = 3341,
	STR_SCENARIO_EDITOR = 3342,
	STR_CONVERT_SAVED_GAME_TO_SCENARIO = 3343,
	STR_ROLLER_COASTER_DESIGNER = 3344,
	STR_TRACK_DESIGNS_MANAGER = 3345,

	STR_SOUND_FORCED_SOFTWARE_BUFFER_MIXING_TIP = 3363,

	STR_TUTORIAL_BEGINNERS = 3385,
	STR_TUTORIAL_CUSTOM_RIDES = 3386,
	STR_TUTORIAL_ROLLER_COASTER = 3387,

	STR_CLEAR_SCENERY_TIP = 3437,
	STR_CLEAR_SCENERY = 3439,

	STR_PAGE_1 = 3440,
	STR_PAGE_2 = STR_PAGE_1 + 1,
	STR_PAGE_3 = STR_PAGE_1 + 2,
	STR_PAGE_4 = STR_PAGE_1 + 3,
	STR_PAGE_5 = STR_PAGE_1 + 4,
};

#endif
