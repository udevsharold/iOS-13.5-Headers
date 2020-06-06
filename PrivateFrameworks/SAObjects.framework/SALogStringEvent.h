/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SALogStringEvent : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * eventName; 
@property (nonatomic,copy) NSString * eventValue; 
+(id)logStringEvent;
+(id)logStringEventWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(void)setEventValue:(NSString *)arg1 ;
-(NSString *)eventValue;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

