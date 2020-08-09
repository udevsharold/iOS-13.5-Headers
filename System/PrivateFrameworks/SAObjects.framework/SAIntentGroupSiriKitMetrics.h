/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAIntentGroupSiriKitMetrics : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * interactionId; 
@property (nonatomic,copy) NSString * resultCandidateId; 
@property (nonatomic,copy) NSString * taskId; 
@property (nonatomic,copy) NSNumber * taskStepStartTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)siriKitMetrics;
+(id)siriKitMetricsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
-(NSString *)taskId;
-(void)setTaskId:(NSString *)arg1 ;
-(NSString *)resultCandidateId;
-(void)setResultCandidateId:(NSString *)arg1 ;
-(NSNumber *)taskStepStartTime;
-(void)setTaskStepStartTime:(NSNumber *)arg1 ;
@end
