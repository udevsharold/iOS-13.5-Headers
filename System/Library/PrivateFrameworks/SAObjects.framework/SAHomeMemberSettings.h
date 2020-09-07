/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAPerson, NSArray, SAVoice, NSNumber;

@interface SAHomeMemberSettings : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,retain) SAPerson * meCard; 
@property (nonatomic,copy) NSArray * parentalRestrictions; 
@property (nonatomic,copy) NSString * preferredLanguage; 
@property (nonatomic,copy) NSString * region; 
@property (nonatomic,copy) NSString * temperatureUnit; 
@property (nonatomic,retain) SAVoice * ttsVoice; 
@property (nonatomic,copy) NSNumber * twentyFourHourTimeDisplay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)homeMemberSettings;
+(id)homeMemberSettingsWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)countryCode;
-(id)groupIdentifier;
-(NSString *)region;
-(void)setRegion:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)temperatureUnit;
-(void)setTemperatureUnit:(NSString *)arg1 ;
-(id)encodedClassName;
-(SAPerson *)meCard;
-(NSString *)preferredLanguage;
-(void)setMeCard:(SAPerson *)arg1 ;
-(NSArray *)parentalRestrictions;
-(void)setParentalRestrictions:(NSArray *)arg1 ;
-(void)setPreferredLanguage:(NSString *)arg1 ;
-(SAVoice *)ttsVoice;
-(void)setTtsVoice:(SAVoice *)arg1 ;
-(NSNumber *)twentyFourHourTimeDisplay;
-(void)setTwentyFourHourTimeDisplay:(NSNumber *)arg1 ;
@end
