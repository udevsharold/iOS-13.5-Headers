/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDCoreMotionDataCollector.h>
#import <libobjc.A.dylib/HDUserCharacteristicsProfileObserver.h>

@class NSNumber, NSString;

@interface HDPedometerDataCollector : HDCoreMotionDataCollector <HDUserCharacteristicsProfileObserver> {

	NSNumber* _userCondition;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isPedometerDataCollectionSupported;
-(void)dealloc;
-(id)persistentIdentifier;
-(id)initWithProfile:(id)arg1 ;
-(void)userCharacteristicsManager:(id)arg1 didUpdateUserProfile:(id)arg2 ;
-(Class)coreMotionDatumClass;
-(id)collectedTypes;
-(id)queue_newDataSource;
-(double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3 ;
-(BOOL)queue_userConditionIsSet;
-(BOOL)queue_userIsAbleBodied;
@end

