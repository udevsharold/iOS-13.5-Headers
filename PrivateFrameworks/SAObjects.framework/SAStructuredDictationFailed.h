/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAStructuredDictationFailed : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * dialogIdentifier; 
@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,copy) NSString * recognition; 
@property (nonatomic,copy) NSString * userFacingReasonDescription; 
@property (nonatomic,copy) NSString * userFacingReasonTitle; 
+(id)structuredDictationFailed;
+(id)structuredDictationFailedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_dialogIdentifier;
-(id)groupIdentifier;
-(NSString *)recognition;
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
-(id)encodedClassName;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(NSString *)dialogIdentifier;
-(BOOL)requiresResponse;
-(void)setRecognition:(NSString *)arg1 ;
-(NSString *)userFacingReasonDescription;
-(void)setUserFacingReasonDescription:(NSString *)arg1 ;
-(NSString *)userFacingReasonTitle;
-(void)setUserFacingReasonTitle:(NSString *)arg1 ;
@end
