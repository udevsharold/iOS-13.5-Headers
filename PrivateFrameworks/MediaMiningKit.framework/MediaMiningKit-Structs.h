/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
	unsigned long long field4;
	unsigned long long field5;
} SCD_Struct_CL1;

typedef struct {
	unsigned long long numberOfLocations;
	unsigned long long numberOfResolvedLocations;
	unsigned long long numberOfUnneededLocations;
	unsigned long long numberOfRequests;
	unsigned long long batchSize;
} SCD_Struct_CL2;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct CGImage* CGImageRef;

typedef struct {
	double field1;
	double field2;
} SCD_Struct_CL5;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct _NSZone* NSZoneRef;

typedef struct _IMDChatRecordStruct* IMDChatRecordStructRef;

typedef struct CLSRoutineServiceStatisticsStruct {
	BOOL routineAvailable;
	unsigned long long numberOfLocationsOfInterest;
	unsigned long long numberOfVisits;
	unsigned long long numberOfTransitions;
	unsigned long long numberOfTimeMatches;
	unsigned long long numberOfCloseByLocationMatches;
	unsigned long long numberOfRemoteLocationMatches;
	unsigned long long numberOfMatchRequests;
	double pinningVisitsRatio;
} CLSRoutineServiceStatisticsStruct;

typedef struct CLLocationCoordinate2D {
	double latitude;
	double longitude;
} CLLocationCoordinate2D;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct os_unfair_recursive_lock_s {
	os_unfair_lock_s ourl_lock;
	unsigned ourl_count;
} os_unfair_recursive_lock_s;

typedef struct _IMDAttachmentRecordStruct* IMDAttachmentRecordStructRef;

typedef struct _IMDMessageRecordStruct* IMDMessageRecordStructRef;

