/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SAClientSetupInfo : SABaseClientBoundCommand

@property (assign,nonatomic) BOOL delay; 
@property (assign,nonatomic) double threshold; 
+(id)clientSetupInfo;
+(id)clientSetupInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)delay;
-(void)setDelay:(BOOL)arg1 ;
-(id)groupIdentifier;
-(double)threshold;
-(void)setThreshold:(double)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end

