/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSURL, NSArray, NSString;

@interface SAAlarmUpdateCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSURL * alarmId; 
@property (nonatomic,copy) NSArray * alarmIds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)updateCompleted;
+(id)updateCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSURL *)alarmId;
-(void)setAlarmId:(NSURL *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)alarmIds;
-(void)setAlarmIds:(NSArray *)arg1 ;
@end

