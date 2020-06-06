/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned alternativesCorrectionsCount : 1;
	unsigned spellingCorrectionsCount : 1;
	unsigned tap2editCorrectionsCount : 1;
} SCD_Struct_Si1;

typedef struct __WiFiManagerClient* WiFiManagerClientRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct {
	unsigned tokenOffset : 1;
} SCD_Struct_Si4;

typedef struct __CFHTTPMessage* CFHTTPMessageRef;

typedef struct {
	unsigned char field1;
	unsigned field2;
} SCD_Struct_Si6;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned long long total_in;
	char* next_out;
	unsigned avail_out;
	unsigned long long total_out;
	char* msg;
	internal_state state;
	/*function pointer*/void* zalloc;
	/*function pointer*/void* zfree;
	void opaque;
	int data_type;
	unsigned long long adler;
	unsigned long long reserved;
} z_stream_s;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

