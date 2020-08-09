/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAPhoneCallSnippet.h>

@class SAUIColor;

@interface SAPhoneCallEmergencySnippet : SAPhoneCallSnippet

@property (nonatomic,retain) SAUIColor * bodyBackgroundColor; 
@property (nonatomic,retain) SAUIColor * bodyTextColor; 
@property (assign,nonatomic) long long countDownSeconds; 
@property (nonatomic,retain) SAUIColor * headerBackgroundColor; 
@property (nonatomic,retain) SAUIColor * headerTextColor; 
+(id)callEmergencySnippet;
+(id)callEmergencySnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setHeaderTextColor:(SAUIColor *)arg1 ;
-(SAUIColor *)headerTextColor;
-(SAUIColor *)headerBackgroundColor;
-(void)setHeaderBackgroundColor:(SAUIColor *)arg1 ;
-(id)encodedClassName;
-(SAUIColor *)bodyTextColor;
-(void)setBodyTextColor:(SAUIColor *)arg1 ;
-(SAUIColor *)bodyBackgroundColor;
-(void)setBodyBackgroundColor:(SAUIColor *)arg1 ;
-(long long)countDownSeconds;
-(void)setCountDownSeconds:(long long)arg1 ;
@end
