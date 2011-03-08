/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ABORT_SYM = 258,
     ACCESSIBLE_SYM = 259,
     ACTION = 260,
     ADD = 261,
     ADDDATE_SYM = 262,
     AFTER_SYM = 263,
     AGAINST = 264,
     AGGREGATE_SYM = 265,
     ALGORITHM_SYM = 266,
     ALL = 267,
     ALTER = 268,
     ANALYZE_SYM = 269,
     AND_AND_SYM = 270,
     AND_SYM = 271,
     ANY_SYM = 272,
     AS = 273,
     ASC = 274,
     ASCII_SYM = 275,
     ASENSITIVE_SYM = 276,
     AT_SYM = 277,
     AUTHORS_SYM = 278,
     AUTOEXTEND_SIZE_SYM = 279,
     AUTO_INC = 280,
     AVG_ROW_LENGTH = 281,
     AVG_SYM = 282,
     BACKUP_SYM = 283,
     BEFORE_SYM = 284,
     BEGIN_SYM = 285,
     BETWEEN_SYM = 286,
     BIGINT = 287,
     BINARY = 288,
     BINLOG_SYM = 289,
     BIN_NUM = 290,
     BIT_AND = 291,
     BIT_OR = 292,
     BIT_SYM = 293,
     BIT_XOR = 294,
     BLOB_SYM = 295,
     BLOCK_SYM = 296,
     BOOLEAN_SYM = 297,
     BOOL_SYM = 298,
     BOTH = 299,
     BTREE_SYM = 300,
     BY = 301,
     BYTE_SYM = 302,
     CACHE_SYM = 303,
     CALL_SYM = 304,
     CASCADE = 305,
     CASCADED = 306,
     CASE_SYM = 307,
     CAST_SYM = 308,
     CATALOG_NAME_SYM = 309,
     CHAIN_SYM = 310,
     CHANGE = 311,
     CHANGED = 312,
     CHARSET = 313,
     CHAR_SYM = 314,
     CHECKSUM_SYM = 315,
     CHECK_SYM = 316,
     CIPHER_SYM = 317,
     CLASS_ORIGIN_SYM = 318,
     CLIENT_SYM = 319,
     CLOSE_SYM = 320,
     COALESCE = 321,
     CODE_SYM = 322,
     COLLATE_SYM = 323,
     COLLATION_SYM = 324,
     COLUMNS = 325,
     COLUMN_SYM = 326,
     COLUMN_NAME_SYM = 327,
     COMMENT_SYM = 328,
     COMMITTED_SYM = 329,
     COMMIT_SYM = 330,
     COMPACT_SYM = 331,
     COMPLETION_SYM = 332,
     COMPRESSED_SYM = 333,
     CONCURRENT = 334,
     CONDITION_SYM = 335,
     CONNECTION_SYM = 336,
     CONSISTENT_SYM = 337,
     CONSTRAINT = 338,
     CONSTRAINT_CATALOG_SYM = 339,
     CONSTRAINT_NAME_SYM = 340,
     CONSTRAINT_SCHEMA_SYM = 341,
     CONTAINS_SYM = 342,
     CONTEXT_SYM = 343,
     CONTINUE_SYM = 344,
     CONTRIBUTORS_SYM = 345,
     CONVERT_SYM = 346,
     COUNT_SYM = 347,
     CPU_SYM = 348,
     CREATE = 349,
     CROSS = 350,
     CUBE_SYM = 351,
     CURDATE = 352,
     CURRENT_USER = 353,
     CURSOR_SYM = 354,
     CURSOR_NAME_SYM = 355,
     CURTIME = 356,
     DATABASE = 357,
     DATABASES = 358,
     DATAFILE_SYM = 359,
     DATA_SYM = 360,
     DATETIME = 361,
     DATE_ADD_INTERVAL = 362,
     DATE_SUB_INTERVAL = 363,
     DATE_SYM = 364,
     DAY_HOUR_SYM = 365,
     DAY_MICROSECOND_SYM = 366,
     DAY_MINUTE_SYM = 367,
     DAY_SECOND_SYM = 368,
     DAY_SYM = 369,
     DEALLOCATE_SYM = 370,
     DECIMAL_NUM = 371,
     DECIMAL_SYM = 372,
     DECLARE_SYM = 373,
     DEFAULT = 374,
     DEFINER_SYM = 375,
     DELAYED_SYM = 376,
     DELAY_KEY_WRITE_SYM = 377,
     DELETE_SYM = 378,
     DESC = 379,
     DESCRIBE = 380,
     DES_KEY_FILE = 381,
     DETERMINISTIC_SYM = 382,
     DIRECTORY_SYM = 383,
     DISABLE_SYM = 384,
     DISCARD = 385,
     DISK_SYM = 386,
     DISTINCT = 387,
     DIV_SYM = 388,
     DOUBLE_SYM = 389,
     DO_SYM = 390,
     DROP = 391,
     DUAL_SYM = 392,
     DUMPFILE = 393,
     DUPLICATE_SYM = 394,
     DYNAMIC_SYM = 395,
     EACH_SYM = 396,
     ELSE = 397,
     ELSEIF_SYM = 398,
     ENABLE_SYM = 399,
     ENCLOSED = 400,
     END = 401,
     ENDS_SYM = 402,
     END_OF_INPUT = 403,
     ENGINES_SYM = 404,
     ENGINE_SYM = 405,
     ENUM = 406,
     EQ = 407,
     EQUAL_SYM = 408,
     ERROR_SYM = 409,
     ERRORS = 410,
     ESCAPED = 411,
     ESCAPE_SYM = 412,
     EVENTS_SYM = 413,
     EVENT_SYM = 414,
     EVERY_SYM = 415,
     EXECUTE_SYM = 416,
     EXISTS = 417,
     EXIT_SYM = 418,
     EXPANSION_SYM = 419,
     EXTENDED_SYM = 420,
     EXTENT_SIZE_SYM = 421,
     EXTRACT_SYM = 422,
     FALSE_SYM = 423,
     FAST_SYM = 424,
     FAULTS_SYM = 425,
     FETCH_SYM = 426,
     FILE_SYM = 427,
     FIRST_SYM = 428,
     FIXED_SYM = 429,
     FLOAT_NUM = 430,
     FLOAT_SYM = 431,
     FLUSH_SYM = 432,
     FORCE_SYM = 433,
     FOREIGN = 434,
     FOR_SYM = 435,
     FOUND_SYM = 436,
     FROM = 437,
     FULL = 438,
     FULLTEXT_SYM = 439,
     FUNCTION_SYM = 440,
     GE = 441,
     GENERAL = 442,
     GEOMETRYCOLLECTION = 443,
     GEOMETRY_SYM = 444,
     GET_FORMAT = 445,
     GLOBAL_SYM = 446,
     GRANT = 447,
     GRANTS = 448,
     GROUP_SYM = 449,
     GROUP_CONCAT_SYM = 450,
     GT_SYM = 451,
     HANDLER_SYM = 452,
     HASH_SYM = 453,
     HAVING = 454,
     HELP_SYM = 455,
     HEX_NUM = 456,
     HIGH_PRIORITY = 457,
     HOST_SYM = 458,
     HOSTS_SYM = 459,
     HOUR_MICROSECOND_SYM = 460,
     HOUR_MINUTE_SYM = 461,
     HOUR_SECOND_SYM = 462,
     HOUR_SYM = 463,
     IDENT = 464,
     IDENTIFIED_SYM = 465,
     IDENT_QUOTED = 466,
     IF = 467,
     IGNORE_SYM = 468,
     IGNORE_SERVER_IDS_SYM = 469,
     IMPORT = 470,
     INDEXES = 471,
     INDEX_SYM = 472,
     INFILE = 473,
     INITIAL_SIZE_SYM = 474,
     INNER_SYM = 475,
     INOUT_SYM = 476,
     INSENSITIVE_SYM = 477,
     INSERT = 478,
     INSERT_METHOD = 479,
     INSTALL_SYM = 480,
     INTERVAL_SYM = 481,
     INTO = 482,
     INT_SYM = 483,
     INVOKER_SYM = 484,
     IN_SYM = 485,
     IO_SYM = 486,
     IPC_SYM = 487,
     IS = 488,
     ISOLATION = 489,
     ISSUER_SYM = 490,
     ITERATE_SYM = 491,
     JOIN_SYM = 492,
     KEYS = 493,
     KEY_BLOCK_SIZE = 494,
     KEY_SYM = 495,
     KILL_SYM = 496,
     LANGUAGE_SYM = 497,
     LAST_SYM = 498,
     LE = 499,
     LEADING = 500,
     LEAVES = 501,
     LEAVE_SYM = 502,
     LEFT = 503,
     LESS_SYM = 504,
     LEVEL_SYM = 505,
     LEX_HOSTNAME = 506,
     LIKE = 507,
     LIMIT = 508,
     LINEAR_SYM = 509,
     LINES = 510,
     LINESTRING = 511,
     LIST_SYM = 512,
     LOAD = 513,
     LOCAL_SYM = 514,
     LOCATOR_SYM = 515,
     LOCKS_SYM = 516,
     LOCK_SYM = 517,
     LOGFILE_SYM = 518,
     LOGS_SYM = 519,
     LONGBLOB = 520,
     LONGTEXT = 521,
     LONG_NUM = 522,
     LONG_SYM = 523,
     LOOP_SYM = 524,
     LOW_PRIORITY = 525,
     LT = 526,
     MASTER_CONNECT_RETRY_SYM = 527,
     MASTER_HOST_SYM = 528,
     MASTER_LOG_FILE_SYM = 529,
     MASTER_LOG_POS_SYM = 530,
     MASTER_PASSWORD_SYM = 531,
     MASTER_PORT_SYM = 532,
     MASTER_SERVER_ID_SYM = 533,
     MASTER_SSL_CAPATH_SYM = 534,
     MASTER_SSL_CA_SYM = 535,
     MASTER_SSL_CERT_SYM = 536,
     MASTER_SSL_CIPHER_SYM = 537,
     MASTER_SSL_KEY_SYM = 538,
     MASTER_SSL_SYM = 539,
     MASTER_SSL_VERIFY_SERVER_CERT_SYM = 540,
     MASTER_SYM = 541,
     MASTER_USER_SYM = 542,
     MASTER_HEARTBEAT_PERIOD_SYM = 543,
     MATCH = 544,
     MAX_CONNECTIONS_PER_HOUR = 545,
     MAX_QUERIES_PER_HOUR = 546,
     MAX_ROWS = 547,
     MAX_SIZE_SYM = 548,
     MAX_SYM = 549,
     MAX_UPDATES_PER_HOUR = 550,
     MAX_USER_CONNECTIONS_SYM = 551,
     MAX_VALUE_SYM = 552,
     MEDIUMBLOB = 553,
     MEDIUMINT = 554,
     MEDIUMTEXT = 555,
     MEDIUM_SYM = 556,
     MEMORY_SYM = 557,
     MERGE_SYM = 558,
     MESSAGE_TEXT_SYM = 559,
     MICROSECOND_SYM = 560,
     MIGRATE_SYM = 561,
     MINUTE_MICROSECOND_SYM = 562,
     MINUTE_SECOND_SYM = 563,
     MINUTE_SYM = 564,
     MIN_ROWS = 565,
     MIN_SYM = 566,
     MODE_SYM = 567,
     MODIFIES_SYM = 568,
     MODIFY_SYM = 569,
     MOD_SYM = 570,
     MONTH_SYM = 571,
     MULTILINESTRING = 572,
     MULTIPOINT = 573,
     MULTIPOLYGON = 574,
     MUTEX_SYM = 575,
     MYSQL_ERRNO_SYM = 576,
     NAMES_SYM = 577,
     NAME_SYM = 578,
     NATIONAL_SYM = 579,
     NATURAL = 580,
     NCHAR_STRING = 581,
     NCHAR_SYM = 582,
     NDBCLUSTER_SYM = 583,
     NE = 584,
     NEG = 585,
     NEW_SYM = 586,
     NEXT_SYM = 587,
     NODEGROUP_SYM = 588,
     NONE_SYM = 589,
     NOT2_SYM = 590,
     NOT_SYM = 591,
     NOW_SYM = 592,
     NO_SYM = 593,
     NO_WAIT_SYM = 594,
     NO_WRITE_TO_BINLOG = 595,
     NULL_SYM = 596,
     NUM = 597,
     NUMERIC_SYM = 598,
     NVARCHAR_SYM = 599,
     OFFSET_SYM = 600,
     OLD_PASSWORD = 601,
     ON = 602,
     ONE_SHOT_SYM = 603,
     ONE_SYM = 604,
     OPEN_SYM = 605,
     OPTIMIZE = 606,
     OPTIONS_SYM = 607,
     OPTION = 608,
     OPTIONALLY = 609,
     OR2_SYM = 610,
     ORDER_SYM = 611,
     OR_OR_SYM = 612,
     OR_SYM = 613,
     OUTER = 614,
     OUTFILE = 615,
     OUT_SYM = 616,
     OWNER_SYM = 617,
     PACK_KEYS_SYM = 618,
     PAGE_SYM = 619,
     PARAM_MARKER = 620,
     PARSER_SYM = 621,
     PARTIAL = 622,
     PARTITIONING_SYM = 623,
     PARTITIONS_SYM = 624,
     PARTITION_SYM = 625,
     PASSWORD = 626,
     PHASE_SYM = 627,
     PLUGINS_SYM = 628,
     PLUGIN_SYM = 629,
     POINT_SYM = 630,
     POLYGON = 631,
     PORT_SYM = 632,
     POSITION_SYM = 633,
     PRECISION = 634,
     PREPARE_SYM = 635,
     PRESERVE_SYM = 636,
     PREV_SYM = 637,
     PRIMARY_SYM = 638,
     PRIVILEGES = 639,
     PROCEDURE_SYM = 640,
     PROCESS = 641,
     PROCESSLIST_SYM = 642,
     PROFILE_SYM = 643,
     PROFILES_SYM = 644,
     PROXY_SYM = 645,
     PURGE = 646,
     QUARTER_SYM = 647,
     QUERY_SYM = 648,
     QUICK = 649,
     RANGE_SYM = 650,
     READS_SYM = 651,
     READ_ONLY_SYM = 652,
     READ_SYM = 653,
     READ_WRITE_SYM = 654,
     REAL = 655,
     REBUILD_SYM = 656,
     RECOVER_SYM = 657,
     REDOFILE_SYM = 658,
     REDO_BUFFER_SIZE_SYM = 659,
     REDUNDANT_SYM = 660,
     REFERENCES = 661,
     REGEXP = 662,
     RELAY = 663,
     RELAYLOG_SYM = 664,
     RELAY_LOG_FILE_SYM = 665,
     RELAY_LOG_POS_SYM = 666,
     RELAY_THREAD = 667,
     RELEASE_SYM = 668,
     RELOAD = 669,
     REMOVE_SYM = 670,
     RENAME = 671,
     REORGANIZE_SYM = 672,
     REPAIR = 673,
     REPEATABLE_SYM = 674,
     REPEAT_SYM = 675,
     REPLACE = 676,
     REPLICATION = 677,
     REQUIRE_SYM = 678,
     RESET_SYM = 679,
     RESIGNAL_SYM = 680,
     RESOURCES = 681,
     RESTORE_SYM = 682,
     RESTRICT = 683,
     RESUME_SYM = 684,
     RETURNS_SYM = 685,
     RETURN_SYM = 686,
     REVOKE = 687,
     RIGHT = 688,
     ROLLBACK_SYM = 689,
     ROLLUP_SYM = 690,
     ROUTINE_SYM = 691,
     ROWS_SYM = 692,
     ROW_FORMAT_SYM = 693,
     ROW_SYM = 694,
     RTREE_SYM = 695,
     SAVEPOINT_SYM = 696,
     SCHEDULE_SYM = 697,
     SCHEMA_NAME_SYM = 698,
     SECOND_MICROSECOND_SYM = 699,
     SECOND_SYM = 700,
     SECURITY_SYM = 701,
     SELECT_SYM = 702,
     SENSITIVE_SYM = 703,
     SEPARATOR_SYM = 704,
     SERIALIZABLE_SYM = 705,
     SERIAL_SYM = 706,
     SESSION_SYM = 707,
     SERVER_SYM = 708,
     SERVER_OPTIONS = 709,
     SET = 710,
     SET_VAR = 711,
     SHARE_SYM = 712,
     SHIFT_LEFT = 713,
     SHIFT_RIGHT = 714,
     SHOW = 715,
     SHUTDOWN = 716,
     SIGNAL_SYM = 717,
     SIGNED_SYM = 718,
     SIMPLE_SYM = 719,
     SLAVE = 720,
     SLOW = 721,
     SMALLINT = 722,
     SNAPSHOT_SYM = 723,
     SOCKET_SYM = 724,
     SONAME_SYM = 725,
     SOUNDS_SYM = 726,
     SOURCE_SYM = 727,
     SPATIAL_SYM = 728,
     SPECIFIC_SYM = 729,
     SQLEXCEPTION_SYM = 730,
     SQLSTATE_SYM = 731,
     SQLWARNING_SYM = 732,
     SQL_BIG_RESULT = 733,
     SQL_BUFFER_RESULT = 734,
     SQL_CACHE_SYM = 735,
     SQL_CALC_FOUND_ROWS = 736,
     SQL_NO_CACHE_SYM = 737,
     SQL_SMALL_RESULT = 738,
     SQL_SYM = 739,
     SQL_THREAD = 740,
     SSL_SYM = 741,
     STARTING = 742,
     STARTS_SYM = 743,
     START_SYM = 744,
     STATUS_SYM = 745,
     STDDEV_SAMP_SYM = 746,
     STD_SYM = 747,
     STOP_SYM = 748,
     STORAGE_SYM = 749,
     STRAIGHT_JOIN = 750,
     STRING_SYM = 751,
     SUBCLASS_ORIGIN_SYM = 752,
     SUBDATE_SYM = 753,
     SUBJECT_SYM = 754,
     SUBPARTITIONS_SYM = 755,
     SUBPARTITION_SYM = 756,
     SUBSTRING = 757,
     SUM_SYM = 758,
     SUPER_SYM = 759,
     SUSPEND_SYM = 760,
     SWAPS_SYM = 761,
     SWITCHES_SYM = 762,
     SYSDATE = 763,
     TABLES = 764,
     TABLESPACE = 765,
     TABLE_REF_PRIORITY = 766,
     TABLE_SYM = 767,
     TABLE_CHECKSUM_SYM = 768,
     TABLE_NAME_SYM = 769,
     TEMPORARY = 770,
     TEMPTABLE_SYM = 771,
     TERMINATED = 772,
     TEXT_STRING = 773,
     TEXT_SYM = 774,
     THAN_SYM = 775,
     THEN_SYM = 776,
     TIMESTAMP = 777,
     TIMESTAMP_ADD = 778,
     TIMESTAMP_DIFF = 779,
     TIME_SYM = 780,
     TINYBLOB = 781,
     TINYINT = 782,
     TINYTEXT = 783,
     TO_SYM = 784,
     TRAILING = 785,
     TRANSACTION_SYM = 786,
     TRIGGERS_SYM = 787,
     TRIGGER_SYM = 788,
     TRIM = 789,
     TRUE_SYM = 790,
     TRUNCATE_SYM = 791,
     TYPES_SYM = 792,
     TYPE_SYM = 793,
     UDF_RETURNS_SYM = 794,
     ULONGLONG_NUM = 795,
     UNCOMMITTED_SYM = 796,
     UNDEFINED_SYM = 797,
     UNDERSCORE_CHARSET = 798,
     UNDOFILE_SYM = 799,
     UNDO_BUFFER_SIZE_SYM = 800,
     UNDO_SYM = 801,
     UNICODE_SYM = 802,
     UNINSTALL_SYM = 803,
     UNION_SYM = 804,
     UNIQUE_SYM = 805,
     UNKNOWN_SYM = 806,
     UNLOCK_SYM = 807,
     UNSIGNED = 808,
     UNTIL_SYM = 809,
     UPDATE_SYM = 810,
     UPGRADE_SYM = 811,
     USAGE = 812,
     USER = 813,
     USE_FRM = 814,
     USE_SYM = 815,
     USING = 816,
     UTC_DATE_SYM = 817,
     UTC_TIMESTAMP_SYM = 818,
     UTC_TIME_SYM = 819,
     VALUES = 820,
     VALUE_SYM = 821,
     VARBINARY = 822,
     VARCHAR = 823,
     VARIABLES = 824,
     VARIANCE_SYM = 825,
     VARYING = 826,
     VAR_SAMP_SYM = 827,
     VIEW_SYM = 828,
     WAIT_SYM = 829,
     WARNINGS = 830,
     WEEK_SYM = 831,
     WHEN_SYM = 832,
     WHERE = 833,
     WHILE_SYM = 834,
     WITH = 835,
     WITH_CUBE_SYM = 836,
     WITH_ROLLUP_SYM = 837,
     WORK_SYM = 838,
     WRAPPER_SYM = 839,
     WRITE_SYM = 840,
     X509_SYM = 841,
     XA_SYM = 842,
     XML_SYM = 843,
     XOR = 844,
     YEAR_MONTH_SYM = 845,
     YEAR_SYM = 846,
     ZEROFILL = 847
   };
#endif
/* Tokens.  */
#define ABORT_SYM 258
#define ACCESSIBLE_SYM 259
#define ACTION 260
#define ADD 261
#define ADDDATE_SYM 262
#define AFTER_SYM 263
#define AGAINST 264
#define AGGREGATE_SYM 265
#define ALGORITHM_SYM 266
#define ALL 267
#define ALTER 268
#define ANALYZE_SYM 269
#define AND_AND_SYM 270
#define AND_SYM 271
#define ANY_SYM 272
#define AS 273
#define ASC 274
#define ASCII_SYM 275
#define ASENSITIVE_SYM 276
#define AT_SYM 277
#define AUTHORS_SYM 278
#define AUTOEXTEND_SIZE_SYM 279
#define AUTO_INC 280
#define AVG_ROW_LENGTH 281
#define AVG_SYM 282
#define BACKUP_SYM 283
#define BEFORE_SYM 284
#define BEGIN_SYM 285
#define BETWEEN_SYM 286
#define BIGINT 287
#define BINARY 288
#define BINLOG_SYM 289
#define BIN_NUM 290
#define BIT_AND 291
#define BIT_OR 292
#define BIT_SYM 293
#define BIT_XOR 294
#define BLOB_SYM 295
#define BLOCK_SYM 296
#define BOOLEAN_SYM 297
#define BOOL_SYM 298
#define BOTH 299
#define BTREE_SYM 300
#define BY 301
#define BYTE_SYM 302
#define CACHE_SYM 303
#define CALL_SYM 304
#define CASCADE 305
#define CASCADED 306
#define CASE_SYM 307
#define CAST_SYM 308
#define CATALOG_NAME_SYM 309
#define CHAIN_SYM 310
#define CHANGE 311
#define CHANGED 312
#define CHARSET 313
#define CHAR_SYM 314
#define CHECKSUM_SYM 315
#define CHECK_SYM 316
#define CIPHER_SYM 317
#define CLASS_ORIGIN_SYM 318
#define CLIENT_SYM 319
#define CLOSE_SYM 320
#define COALESCE 321
#define CODE_SYM 322
#define COLLATE_SYM 323
#define COLLATION_SYM 324
#define COLUMNS 325
#define COLUMN_SYM 326
#define COLUMN_NAME_SYM 327
#define COMMENT_SYM 328
#define COMMITTED_SYM 329
#define COMMIT_SYM 330
#define COMPACT_SYM 331
#define COMPLETION_SYM 332
#define COMPRESSED_SYM 333
#define CONCURRENT 334
#define CONDITION_SYM 335
#define CONNECTION_SYM 336
#define CONSISTENT_SYM 337
#define CONSTRAINT 338
#define CONSTRAINT_CATALOG_SYM 339
#define CONSTRAINT_NAME_SYM 340
#define CONSTRAINT_SCHEMA_SYM 341
#define CONTAINS_SYM 342
#define CONTEXT_SYM 343
#define CONTINUE_SYM 344
#define CONTRIBUTORS_SYM 345
#define CONVERT_SYM 346
#define COUNT_SYM 347
#define CPU_SYM 348
#define CREATE 349
#define CROSS 350
#define CUBE_SYM 351
#define CURDATE 352
#define CURRENT_USER 353
#define CURSOR_SYM 354
#define CURSOR_NAME_SYM 355
#define CURTIME 356
#define DATABASE 357
#define DATABASES 358
#define DATAFILE_SYM 359
#define DATA_SYM 360
#define DATETIME 361
#define DATE_ADD_INTERVAL 362
#define DATE_SUB_INTERVAL 363
#define DATE_SYM 364
#define DAY_HOUR_SYM 365
#define DAY_MICROSECOND_SYM 366
#define DAY_MINUTE_SYM 367
#define DAY_SECOND_SYM 368
#define DAY_SYM 369
#define DEALLOCATE_SYM 370
#define DECIMAL_NUM 371
#define DECIMAL_SYM 372
#define DECLARE_SYM 373
#define DEFAULT 374
#define DEFINER_SYM 375
#define DELAYED_SYM 376
#define DELAY_KEY_WRITE_SYM 377
#define DELETE_SYM 378
#define DESC 379
#define DESCRIBE 380
#define DES_KEY_FILE 381
#define DETERMINISTIC_SYM 382
#define DIRECTORY_SYM 383
#define DISABLE_SYM 384
#define DISCARD 385
#define DISK_SYM 386
#define DISTINCT 387
#define DIV_SYM 388
#define DOUBLE_SYM 389
#define DO_SYM 390
#define DROP 391
#define DUAL_SYM 392
#define DUMPFILE 393
#define DUPLICATE_SYM 394
#define DYNAMIC_SYM 395
#define EACH_SYM 396
#define ELSE 397
#define ELSEIF_SYM 398
#define ENABLE_SYM 399
#define ENCLOSED 400
#define END 401
#define ENDS_SYM 402
#define END_OF_INPUT 403
#define ENGINES_SYM 404
#define ENGINE_SYM 405
#define ENUM 406
#define EQ 407
#define EQUAL_SYM 408
#define ERROR_SYM 409
#define ERRORS 410
#define ESCAPED 411
#define ESCAPE_SYM 412
#define EVENTS_SYM 413
#define EVENT_SYM 414
#define EVERY_SYM 415
#define EXECUTE_SYM 416
#define EXISTS 417
#define EXIT_SYM 418
#define EXPANSION_SYM 419
#define EXTENDED_SYM 420
#define EXTENT_SIZE_SYM 421
#define EXTRACT_SYM 422
#define FALSE_SYM 423
#define FAST_SYM 424
#define FAULTS_SYM 425
#define FETCH_SYM 426
#define FILE_SYM 427
#define FIRST_SYM 428
#define FIXED_SYM 429
#define FLOAT_NUM 430
#define FLOAT_SYM 431
#define FLUSH_SYM 432
#define FORCE_SYM 433
#define FOREIGN 434
#define FOR_SYM 435
#define FOUND_SYM 436
#define FROM 437
#define FULL 438
#define FULLTEXT_SYM 439
#define FUNCTION_SYM 440
#define GE 441
#define GENERAL 442
#define GEOMETRYCOLLECTION 443
#define GEOMETRY_SYM 444
#define GET_FORMAT 445
#define GLOBAL_SYM 446
#define GRANT 447
#define GRANTS 448
#define GROUP_SYM 449
#define GROUP_CONCAT_SYM 450
#define GT_SYM 451
#define HANDLER_SYM 452
#define HASH_SYM 453
#define HAVING 454
#define HELP_SYM 455
#define HEX_NUM 456
#define HIGH_PRIORITY 457
#define HOST_SYM 458
#define HOSTS_SYM 459
#define HOUR_MICROSECOND_SYM 460
#define HOUR_MINUTE_SYM 461
#define HOUR_SECOND_SYM 462
#define HOUR_SYM 463
#define IDENT 464
#define IDENTIFIED_SYM 465
#define IDENT_QUOTED 466
#define IF 467
#define IGNORE_SYM 468
#define IGNORE_SERVER_IDS_SYM 469
#define IMPORT 470
#define INDEXES 471
#define INDEX_SYM 472
#define INFILE 473
#define INITIAL_SIZE_SYM 474
#define INNER_SYM 475
#define INOUT_SYM 476
#define INSENSITIVE_SYM 477
#define INSERT 478
#define INSERT_METHOD 479
#define INSTALL_SYM 480
#define INTERVAL_SYM 481
#define INTO 482
#define INT_SYM 483
#define INVOKER_SYM 484
#define IN_SYM 485
#define IO_SYM 486
#define IPC_SYM 487
#define IS 488
#define ISOLATION 489
#define ISSUER_SYM 490
#define ITERATE_SYM 491
#define JOIN_SYM 492
#define KEYS 493
#define KEY_BLOCK_SIZE 494
#define KEY_SYM 495
#define KILL_SYM 496
#define LANGUAGE_SYM 497
#define LAST_SYM 498
#define LE 499
#define LEADING 500
#define LEAVES 501
#define LEAVE_SYM 502
#define LEFT 503
#define LESS_SYM 504
#define LEVEL_SYM 505
#define LEX_HOSTNAME 506
#define LIKE 507
#define LIMIT 508
#define LINEAR_SYM 509
#define LINES 510
#define LINESTRING 511
#define LIST_SYM 512
#define LOAD 513
#define LOCAL_SYM 514
#define LOCATOR_SYM 515
#define LOCKS_SYM 516
#define LOCK_SYM 517
#define LOGFILE_SYM 518
#define LOGS_SYM 519
#define LONGBLOB 520
#define LONGTEXT 521
#define LONG_NUM 522
#define LONG_SYM 523
#define LOOP_SYM 524
#define LOW_PRIORITY 525
#define LT 526
#define MASTER_CONNECT_RETRY_SYM 527
#define MASTER_HOST_SYM 528
#define MASTER_LOG_FILE_SYM 529
#define MASTER_LOG_POS_SYM 530
#define MASTER_PASSWORD_SYM 531
#define MASTER_PORT_SYM 532
#define MASTER_SERVER_ID_SYM 533
#define MASTER_SSL_CAPATH_SYM 534
#define MASTER_SSL_CA_SYM 535
#define MASTER_SSL_CERT_SYM 536
#define MASTER_SSL_CIPHER_SYM 537
#define MASTER_SSL_KEY_SYM 538
#define MASTER_SSL_SYM 539
#define MASTER_SSL_VERIFY_SERVER_CERT_SYM 540
#define MASTER_SYM 541
#define MASTER_USER_SYM 542
#define MASTER_HEARTBEAT_PERIOD_SYM 543
#define MATCH 544
#define MAX_CONNECTIONS_PER_HOUR 545
#define MAX_QUERIES_PER_HOUR 546
#define MAX_ROWS 547
#define MAX_SIZE_SYM 548
#define MAX_SYM 549
#define MAX_UPDATES_PER_HOUR 550
#define MAX_USER_CONNECTIONS_SYM 551
#define MAX_VALUE_SYM 552
#define MEDIUMBLOB 553
#define MEDIUMINT 554
#define MEDIUMTEXT 555
#define MEDIUM_SYM 556
#define MEMORY_SYM 557
#define MERGE_SYM 558
#define MESSAGE_TEXT_SYM 559
#define MICROSECOND_SYM 560
#define MIGRATE_SYM 561
#define MINUTE_MICROSECOND_SYM 562
#define MINUTE_SECOND_SYM 563
#define MINUTE_SYM 564
#define MIN_ROWS 565
#define MIN_SYM 566
#define MODE_SYM 567
#define MODIFIES_SYM 568
#define MODIFY_SYM 569
#define MOD_SYM 570
#define MONTH_SYM 571
#define MULTILINESTRING 572
#define MULTIPOINT 573
#define MULTIPOLYGON 574
#define MUTEX_SYM 575
#define MYSQL_ERRNO_SYM 576
#define NAMES_SYM 577
#define NAME_SYM 578
#define NATIONAL_SYM 579
#define NATURAL 580
#define NCHAR_STRING 581
#define NCHAR_SYM 582
#define NDBCLUSTER_SYM 583
#define NE 584
#define NEG 585
#define NEW_SYM 586
#define NEXT_SYM 587
#define NODEGROUP_SYM 588
#define NONE_SYM 589
#define NOT2_SYM 590
#define NOT_SYM 591
#define NOW_SYM 592
#define NO_SYM 593
#define NO_WAIT_SYM 594
#define NO_WRITE_TO_BINLOG 595
#define NULL_SYM 596
#define NUM 597
#define NUMERIC_SYM 598
#define NVARCHAR_SYM 599
#define OFFSET_SYM 600
#define OLD_PASSWORD 601
#define ON 602
#define ONE_SHOT_SYM 603
#define ONE_SYM 604
#define OPEN_SYM 605
#define OPTIMIZE 606
#define OPTIONS_SYM 607
#define OPTION 608
#define OPTIONALLY 609
#define OR2_SYM 610
#define ORDER_SYM 611
#define OR_OR_SYM 612
#define OR_SYM 613
#define OUTER 614
#define OUTFILE 615
#define OUT_SYM 616
#define OWNER_SYM 617
#define PACK_KEYS_SYM 618
#define PAGE_SYM 619
#define PARAM_MARKER 620
#define PARSER_SYM 621
#define PARTIAL 622
#define PARTITIONING_SYM 623
#define PARTITIONS_SYM 624
#define PARTITION_SYM 625
#define PASSWORD 626
#define PHASE_SYM 627
#define PLUGINS_SYM 628
#define PLUGIN_SYM 629
#define POINT_SYM 630
#define POLYGON 631
#define PORT_SYM 632
#define POSITION_SYM 633
#define PRECISION 634
#define PREPARE_SYM 635
#define PRESERVE_SYM 636
#define PREV_SYM 637
#define PRIMARY_SYM 638
#define PRIVILEGES 639
#define PROCEDURE_SYM 640
#define PROCESS 641
#define PROCESSLIST_SYM 642
#define PROFILE_SYM 643
#define PROFILES_SYM 644
#define PROXY_SYM 645
#define PURGE 646
#define QUARTER_SYM 647
#define QUERY_SYM 648
#define QUICK 649
#define RANGE_SYM 650
#define READS_SYM 651
#define READ_ONLY_SYM 652
#define READ_SYM 653
#define READ_WRITE_SYM 654
#define REAL 655
#define REBUILD_SYM 656
#define RECOVER_SYM 657
#define REDOFILE_SYM 658
#define REDO_BUFFER_SIZE_SYM 659
#define REDUNDANT_SYM 660
#define REFERENCES 661
#define REGEXP 662
#define RELAY 663
#define RELAYLOG_SYM 664
#define RELAY_LOG_FILE_SYM 665
#define RELAY_LOG_POS_SYM 666
#define RELAY_THREAD 667
#define RELEASE_SYM 668
#define RELOAD 669
#define REMOVE_SYM 670
#define RENAME 671
#define REORGANIZE_SYM 672
#define REPAIR 673
#define REPEATABLE_SYM 674
#define REPEAT_SYM 675
#define REPLACE 676
#define REPLICATION 677
#define REQUIRE_SYM 678
#define RESET_SYM 679
#define RESIGNAL_SYM 680
#define RESOURCES 681
#define RESTORE_SYM 682
#define RESTRICT 683
#define RESUME_SYM 684
#define RETURNS_SYM 685
#define RETURN_SYM 686
#define REVOKE 687
#define RIGHT 688
#define ROLLBACK_SYM 689
#define ROLLUP_SYM 690
#define ROUTINE_SYM 691
#define ROWS_SYM 692
#define ROW_FORMAT_SYM 693
#define ROW_SYM 694
#define RTREE_SYM 695
#define SAVEPOINT_SYM 696
#define SCHEDULE_SYM 697
#define SCHEMA_NAME_SYM 698
#define SECOND_MICROSECOND_SYM 699
#define SECOND_SYM 700
#define SECURITY_SYM 701
#define SELECT_SYM 702
#define SENSITIVE_SYM 703
#define SEPARATOR_SYM 704
#define SERIALIZABLE_SYM 705
#define SERIAL_SYM 706
#define SESSION_SYM 707
#define SERVER_SYM 708
#define SERVER_OPTIONS 709
#define SET 710
#define SET_VAR 711
#define SHARE_SYM 712
#define SHIFT_LEFT 713
#define SHIFT_RIGHT 714
#define SHOW 715
#define SHUTDOWN 716
#define SIGNAL_SYM 717
#define SIGNED_SYM 718
#define SIMPLE_SYM 719
#define SLAVE 720
#define SLOW 721
#define SMALLINT 722
#define SNAPSHOT_SYM 723
#define SOCKET_SYM 724
#define SONAME_SYM 725
#define SOUNDS_SYM 726
#define SOURCE_SYM 727
#define SPATIAL_SYM 728
#define SPECIFIC_SYM 729
#define SQLEXCEPTION_SYM 730
#define SQLSTATE_SYM 731
#define SQLWARNING_SYM 732
#define SQL_BIG_RESULT 733
#define SQL_BUFFER_RESULT 734
#define SQL_CACHE_SYM 735
#define SQL_CALC_FOUND_ROWS 736
#define SQL_NO_CACHE_SYM 737
#define SQL_SMALL_RESULT 738
#define SQL_SYM 739
#define SQL_THREAD 740
#define SSL_SYM 741
#define STARTING 742
#define STARTS_SYM 743
#define START_SYM 744
#define STATUS_SYM 745
#define STDDEV_SAMP_SYM 746
#define STD_SYM 747
#define STOP_SYM 748
#define STORAGE_SYM 749
#define STRAIGHT_JOIN 750
#define STRING_SYM 751
#define SUBCLASS_ORIGIN_SYM 752
#define SUBDATE_SYM 753
#define SUBJECT_SYM 754
#define SUBPARTITIONS_SYM 755
#define SUBPARTITION_SYM 756
#define SUBSTRING 757
#define SUM_SYM 758
#define SUPER_SYM 759
#define SUSPEND_SYM 760
#define SWAPS_SYM 761
#define SWITCHES_SYM 762
#define SYSDATE 763
#define TABLES 764
#define TABLESPACE 765
#define TABLE_REF_PRIORITY 766
#define TABLE_SYM 767
#define TABLE_CHECKSUM_SYM 768
#define TABLE_NAME_SYM 769
#define TEMPORARY 770
#define TEMPTABLE_SYM 771
#define TERMINATED 772
#define TEXT_STRING 773
#define TEXT_SYM 774
#define THAN_SYM 775
#define THEN_SYM 776
#define TIMESTAMP 777
#define TIMESTAMP_ADD 778
#define TIMESTAMP_DIFF 779
#define TIME_SYM 780
#define TINYBLOB 781
#define TINYINT 782
#define TINYTEXT 783
#define TO_SYM 784
#define TRAILING 785
#define TRANSACTION_SYM 786
#define TRIGGERS_SYM 787
#define TRIGGER_SYM 788
#define TRIM 789
#define TRUE_SYM 790
#define TRUNCATE_SYM 791
#define TYPES_SYM 792
#define TYPE_SYM 793
#define UDF_RETURNS_SYM 794
#define ULONGLONG_NUM 795
#define UNCOMMITTED_SYM 796
#define UNDEFINED_SYM 797
#define UNDERSCORE_CHARSET 798
#define UNDOFILE_SYM 799
#define UNDO_BUFFER_SIZE_SYM 800
#define UNDO_SYM 801
#define UNICODE_SYM 802
#define UNINSTALL_SYM 803
#define UNION_SYM 804
#define UNIQUE_SYM 805
#define UNKNOWN_SYM 806
#define UNLOCK_SYM 807
#define UNSIGNED 808
#define UNTIL_SYM 809
#define UPDATE_SYM 810
#define UPGRADE_SYM 811
#define USAGE 812
#define USER 813
#define USE_FRM 814
#define USE_SYM 815
#define USING 816
#define UTC_DATE_SYM 817
#define UTC_TIMESTAMP_SYM 818
#define UTC_TIME_SYM 819
#define VALUES 820
#define VALUE_SYM 821
#define VARBINARY 822
#define VARCHAR 823
#define VARIABLES 824
#define VARIANCE_SYM 825
#define VARYING 826
#define VAR_SAMP_SYM 827
#define VIEW_SYM 828
#define WAIT_SYM 829
#define WARNINGS 830
#define WEEK_SYM 831
#define WHEN_SYM 832
#define WHERE 833
#define WHILE_SYM 834
#define WITH 835
#define WITH_CUBE_SYM 836
#define WITH_ROLLUP_SYM 837
#define WORK_SYM 838
#define WRAPPER_SYM 839
#define WRITE_SYM 840
#define X509_SYM 841
#define XA_SYM 842
#define XML_SYM 843
#define XOR 844
#define YEAR_MONTH_SYM 845
#define YEAR_SYM 846
#define ZEROFILL 847




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 729 "/export/home2/pb2/build/sb_0-2859867-1295476541.0/mysql-5.5.9-release-export-1942668/sql/sql_yacc.yy"
{
  int  num;
  ulong ulong_num;
  ulonglong ulonglong_number;
  longlong longlong_number;
  LEX_STRING lex_str;
  LEX_STRING *lex_str_ptr;
  LEX_SYMBOL symbol;
  Table_ident *table;
  char *simple_string;
  Item *item;
  Item_num *item_num;
  List<Item> *item_list;
  List<String> *string_list;
  String *string;
  Key_part_spec *key_part;
  TABLE_LIST *table_list;
  udf_func *udf;
  LEX_USER *lex_user;
  struct sys_var_with_base variable;
  enum enum_var_type var_type;
  Key::Keytype key_type;
  enum ha_key_alg key_alg;
  handlerton *db_type;
  enum row_type row_type;
  enum ha_rkey_function ha_rkey_mode;
  enum enum_tx_isolation tx_isolation;
  enum Cast_target cast_type;
  enum Item_udftype udf_type;
  CHARSET_INFO *charset;
  thr_lock_type lock_type;
  interval_type interval, interval_time_st;
  timestamp_type date_time_type;
  st_select_lex *select_lex;
  chooser_compare_func_creator boolfunc2creator;
  struct sp_cond_type *spcondtype;
  struct { int vars, conds, hndlrs, curs; } spblock;
  sp_name *spname;
  LEX *lex;
  sp_head *sphead;
  struct p_elem_val *p_elem_value;
  enum index_hint_type index_hint;
  enum enum_filetype filetype;
  enum Foreign_key::fk_option m_fk_option;
  enum enum_yes_no_unknown m_yes_no_unk;
  Diag_condition_item_name diag_condition_item_name;
}
/* Line 1529 of yacc.c.  */
#line 1281 "/export/home2/pb2/build/sb_0-2859867-1295476541.0/dist/sql/sql_yacc.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



