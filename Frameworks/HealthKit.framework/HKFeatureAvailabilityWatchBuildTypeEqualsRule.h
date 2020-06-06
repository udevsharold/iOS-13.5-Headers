/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKFeatureAvailabilityBaseRule.h>
#import <libobjc.A.dylib/HKFeatureAvailabilityRule.h>

@class NSString;

@interface HKFeatureAvailabilityWatchBuildTypeEqualsRule : HKFeatureAvailabilityBaseRule <HKFeatureAvailabilityRule> {

	NSString* _buildType;

}

@property (nonatomic,retain) NSString * buildType;                  //@synthesize buildType=_buildType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleIdentifier;
-(BOOL)evaluate;
-(void)processUserInfo:(id)arg1 ;
-(void)setBuildType:(NSString *)arg1 ;
-(NSString *)buildType;
@end

