/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:14 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned result : 1;
	unsigned timestamp : 1;
} SCD_Struct_WB1;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct {
	unsigned timestamp : 1;
} SCD_Struct_WB4;

typedef struct _LXLexicon* LXLexiconRef;

typedef struct {
	unsigned configurationID : 1;
	unsigned errorCode : 1;
	unsigned pageID : 1;
	unsigned pageLoadTime : 1;
	unsigned timestamp : 1;
} SCD_Struct_WB6;

typedef struct {
	unsigned configurationID : 1;
	unsigned pageID : 1;
	unsigned timestamp : 1;
} SCD_Struct_WB7;

typedef struct malloc_statistics_t {
	unsigned blocks_in_use;
	unsigned long long size_in_use;
	unsigned long long max_size_in_use;
	unsigned long long size_allocated;
} malloc_statistics_t;

typedef struct task_vm_info {
	unsigned long long virtual_size;
	int region_count;
	int page_size;
	unsigned long long resident_size;
	unsigned long long resident_size_peak;
	unsigned long long device;
	unsigned long long device_peak;
	unsigned long long internal;
	unsigned long long internal_peak;
	unsigned long long external;
	unsigned long long external_peak;
	unsigned long long reusable;
	unsigned long long reusable_peak;
	unsigned long long purgeable_volatile_pmap;
	unsigned long long purgeable_volatile_resident;
	unsigned long long purgeable_volatile_virtual;
	unsigned long long compressed;
	unsigned long long compressed_peak;
	unsigned long long compressed_lifetime;
	unsigned long long phys_footprint;
	unsigned long long min_address;
	unsigned long long max_address;
	long long ledger_phys_footprint_peak;
	long long ledger_purgeable_nonvolatile;
	long long ledger_purgeable_novolatile_compressed;
	long long ledger_purgeable_volatile;
	long long ledger_purgeable_volatile_compressed;
	long long ledger_tag_network_nonvolatile;
	long long ledger_tag_network_nonvolatile_compressed;
	long long ledger_tag_network_volatile;
	long long ledger_tag_network_volatile_compressed;
	long long ledger_tag_media_footprint;
	long long ledger_tag_media_footprint_compressed;
	long long ledger_tag_media_nofootprint;
	long long ledger_tag_media_nofootprint_compressed;
	long long ledger_tag_graphics_footprint;
	long long ledger_tag_graphics_footprint_compressed;
	long long ledger_tag_graphics_nofootprint;
	long long ledger_tag_graphics_nofootprint_compressed;
	long long ledger_tag_neural_footprint;
	long long ledger_tag_neural_footprint_compressed;
	long long ledger_tag_neural_nofootprint;
	long long ledger_tag_neural_nofootprint_compressed;
	unsigned long long limit_bytes_remaining;
	int decompressions;
} task_vm_info;

typedef struct {
	unsigned itemsPerRow : 1;
	unsigned row : 1;
	unsigned sectionIndex : 1;
	unsigned timestamp : 1;
	unsigned displayContext : 1;
	unsigned section : 1;
	unsigned type : 1;
} SCD_Struct_WB10;

typedef struct {
	unsigned duration : 1;
	unsigned timestamp : 1;
	unsigned migratorType : 1;
	unsigned result : 1;
} SCD_Struct_WB11;

typedef struct {
	int list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_WB12;

typedef struct __CFStringTokenizer* CFStringTokenizerRef;

