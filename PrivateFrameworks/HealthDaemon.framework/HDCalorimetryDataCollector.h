/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDCoreMotionDataCollector.h>

@interface HDCalorimetryDataCollector : HDCoreMotionDataCollector
+(BOOL)isNatalimeterAvailable;
+(BOOL)supportsCollectionForProfile:(id)arg1 ;
-(id)persistentIdentifier;
-(id)initWithProfile:(id)arg1 ;
-(Class)coreMotionDatumClass;
-(id)collectedTypes;
-(id)queue_newDataSource;
-(double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3 ;
@end

