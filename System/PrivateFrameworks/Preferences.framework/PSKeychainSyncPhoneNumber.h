/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, KeychainSyncCountryInfo;

@interface PSKeychainSyncPhoneNumber : NSObject {

	NSString* _digits;
	KeychainSyncCountryInfo* _countryInfo;

}

@property (nonatomic,retain) NSString * digits;                                  //@synthesize digits=_digits - In the implementation block
@property (nonatomic,retain) KeychainSyncCountryInfo * countryInfo;              //@synthesize countryInfo=_countryInfo - In the implementation block
+(id)phoneNumberWithDigits:(id)arg1 countryInfo:(id)arg2 ;
-(NSString *)digits;
-(id)formattedString;
-(KeychainSyncCountryInfo *)countryInfo;
-(void)setCountryInfo:(KeychainSyncCountryInfo *)arg1 ;
-(void)setDigits:(NSString *)arg1 ;
-(id)_stringByAddingDialingPrefixToString:(id)arg1 ;
-(id)formattedStringWithDialingPrefix;
-(id)formattedAndObfuscatedString;
@end

