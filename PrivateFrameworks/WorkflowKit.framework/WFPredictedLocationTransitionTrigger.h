/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@interface WFPredictedLocationTransitionTrigger : WFTrigger {

	unsigned long long _destinationType;
	unsigned long long _minutesBefore;

}

@property (assign,nonatomic) unsigned long long destinationType;              //@synthesize destinationType=_destinationType - In the implementation block
@property (assign,nonatomic) unsigned long long minutesBefore;                //@synthesize minutesBefore=_minutesBefore - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(id)localizedDisplayExplanation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)destinationType;
-(void)setDestinationType:(unsigned long long)arg1 ;
-(BOOL)hasValidConfiguration;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(unsigned long long)minutesBefore;
-(void)setMinutesBefore:(unsigned long long)arg1 ;
@end

