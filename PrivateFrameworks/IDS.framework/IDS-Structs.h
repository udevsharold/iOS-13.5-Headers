/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct cfs_client_s* cfs_client_sRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
} SCD_Struct_ID4;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
	unsigned short field5;
	unsigned char field6;
	unsigned char field7;
	unsigned char field8;
	unsigned char field9[16];
	unsigned char field10[16];
	unsigned char field11;
	unsigned short field12;
	unsigned short field13;
	unsigned char field14[3];
} SCD_Struct_ID5;

typedef struct channel* channelRef;

typedef struct channel_ring_desc* channel_ring_descRef;

typedef struct {
	char field1;
	unsigned short field2;
	unsigned short field3;
	unsigned char field4;
} SCD_Struct_ID8;

typedef struct {
	unsigned short field1;
	unsigned short field2;
	unsigned short field3;
	unsigned short field4;
	unsigned short field5;
} SCD_Struct_ID9;

typedef struct {
	unsigned field1;
	unsigned long long field2;
	unsigned short field3;
	unsigned char field4;
	char field5;
	unsigned short field6[12];
	unsigned char field7;
	unsigned short field8;
	SCD_Struct_ID9 field9;
	double field10;
	unsigned long long field11;
} SCD_Struct_ID10;

typedef struct {
	char* field1;
	char* field2;
	char* field3;
	char* field4;
	BOOL field5;
} SCD_Struct_ID11;

typedef struct {
	char* field1;
	unsigned short field2;
	int field3;
	unsigned short field4[12];
	long long field5;
	unsigned char field6;
	unsigned short field7;
	unsigned char field8;
	BOOL field9;
	BOOL field10;
	unsigned short field11;
	SCD_Struct_ID9 field12;
	BOOL field13;
	unsigned field14;
} SCD_Struct_ID12;

typedef struct {
	char* field1;
	unsigned long long field2;
	long long field3;
	long long field4;
	unsigned field5;
	BOOL field6;
	BOOL field7;
	BOOL field8;
	BOOL field9;
	BOOL field10;
	BOOL field11;
	unsigned field12;
	sockaddr_storage field13;
	sockaddr_storage field14;
	unsigned short field15;
	int field16;
	SCD_Struct_ID12 field17[8];
	char field18;
	char field19;
	int field20;
	double field21;
	unsigned long long field22;
	unsigned char field23[0];
} SCD_Struct_ID13;

