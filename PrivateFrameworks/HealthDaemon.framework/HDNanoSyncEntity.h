/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDNanoSyncEntity <HDSyncEntity>
@optional
+(int)nanoSyncObjectType;
+(BOOL)supportsSpeculativeNanoSyncChanges;
+(BOOL)companionDidChangeForProfile:(id)arg1 error:(id*)arg2;

@required
+(unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;

@end

