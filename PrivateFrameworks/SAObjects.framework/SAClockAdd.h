/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SAClockObject;

@interface SAClockAdd : SADomainCommand

@property (nonatomic,retain) SAClockObject * clockToAdd; 
+(id)add;
+(id)addWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAClockObject *)clockToAdd;
-(void)setClockToAdd:(SAClockObject *)arg1 ;
@end

