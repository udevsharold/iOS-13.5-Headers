/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct network_uuid {
	unsigned u1;
	unsigned short u2;
	unsigned short u3;
	unsigned char u4[8];
} network_uuid;

typedef struct {
	unsigned msgid;
	unsigned status;
	unsigned checksum;
	unsigned reserved2;
} SCD_Struct_ws1;

typedef struct timespec {
	long long tv_sec;
	long long tv_nsec;
} timespec;

