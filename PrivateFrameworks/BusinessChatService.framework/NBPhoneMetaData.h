/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NBPhoneNumberDesc, NSString, NSNumber, NSMutableArray;

@interface NBPhoneMetaData : NSObject {

	BOOL _sameMobileAndFixedLinePattern;
	BOOL _mainCountryForCode;
	BOOL _leadingZeroPossible;
	NBPhoneNumberDesc* _generalDesc;
	NBPhoneNumberDesc* _fixedLine;
	NBPhoneNumberDesc* _mobile;
	NBPhoneNumberDesc* _tollFree;
	NBPhoneNumberDesc* _premiumRate;
	NBPhoneNumberDesc* _sharedCost;
	NBPhoneNumberDesc* _personalNumber;
	NBPhoneNumberDesc* _voip;
	NBPhoneNumberDesc* _pager;
	NBPhoneNumberDesc* _uan;
	NBPhoneNumberDesc* _emergency;
	NBPhoneNumberDesc* _voicemail;
	NBPhoneNumberDesc* _noInternationalDialling;
	NSString* _codeID;
	NSNumber* _countryCode;
	NSString* _internationalPrefix;
	NSString* _preferredInternationalPrefix;
	NSString* _nationalPrefix;
	NSString* _preferredExtnPrefix;
	NSString* _nationalPrefixForParsing;
	NSString* _nationalPrefixTransformRule;
	NSMutableArray* _numberFormats;
	NSMutableArray* _intlNumberFormats;
	NSString* _leadingDigits;

}

@property (nonatomic,retain) NBPhoneNumberDesc * generalDesc;                          //@synthesize generalDesc=_generalDesc - In the implementation block
@property (nonatomic,retain) NBPhoneNumberDesc * fixedLine;                            //@synthesize fixedLine=_fixedLine - In the implementation block
@property (nonatomic,retain) NBPhoneNumberDesc * mobile;                               //@synthesize mobile=_mobile - In the implementation block
@property (nonatomic,retain) NBPhoneNumberDesc * tollFree;                             //@synthesize tollFree=_tollFree - In the implementation block
@property (nonatomic,retain) NBPhoneNumberDesc * premiumRate;                          //@synthesize premiumRate=_premiumRate - In the implementation block
@property (nonatomic,retain) NBPhoneNumberDesc * sharedCost;                           //@synthesize sharedCost=_sharedCost - In the implementation block
@property (nonatomic,retain) NBPhoneNumberDesc * personalNumber;                       //@synthesize personalNumber=_personalNumber - In the implementation block
@property (nonatomic,retain) NBPhoneNumberDesc * voip;                                 //@synthesize voip=_voip - In the implementation block
@property (nonatomic,retain) NBPhoneNumberDesc * pager;                                //@synthesize pager=_pager - In the implementation block
@property (nonatomic,retain) NBPhoneNumberDesc * uan;                                  //@synthesize uan=_uan - In the implementation block
@property (nonatomic,retain) NBPhoneNumberDesc * emergency;                            //@synthesize emergency=_emergency - In the implementation block
@property (nonatomic,retain) NBPhoneNumberDesc * voicemail;                            //@synthesize voicemail=_voicemail - In the implementation block
@property (nonatomic,retain) NBPhoneNumberDesc * noInternationalDialling;              //@synthesize noInternationalDialling=_noInternationalDialling - In the implementation block
@property (nonatomic,retain) NSString * codeID;                                        //@synthesize codeID=_codeID - In the implementation block
@property (nonatomic,retain) NSNumber * countryCode;                                   //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSString * internationalPrefix;                           //@synthesize internationalPrefix=_internationalPrefix - In the implementation block
@property (nonatomic,retain) NSString * preferredInternationalPrefix;                  //@synthesize preferredInternationalPrefix=_preferredInternationalPrefix - In the implementation block
@property (nonatomic,retain) NSString * nationalPrefix;                                //@synthesize nationalPrefix=_nationalPrefix - In the implementation block
@property (nonatomic,retain) NSString * preferredExtnPrefix;                           //@synthesize preferredExtnPrefix=_preferredExtnPrefix - In the implementation block
@property (nonatomic,retain) NSString * nationalPrefixForParsing;                      //@synthesize nationalPrefixForParsing=_nationalPrefixForParsing - In the implementation block
@property (nonatomic,retain) NSString * nationalPrefixTransformRule;                   //@synthesize nationalPrefixTransformRule=_nationalPrefixTransformRule - In the implementation block
@property (assign,nonatomic) BOOL sameMobileAndFixedLinePattern;                       //@synthesize sameMobileAndFixedLinePattern=_sameMobileAndFixedLinePattern - In the implementation block
@property (nonatomic,retain) NSMutableArray * numberFormats;                           //@synthesize numberFormats=_numberFormats - In the implementation block
@property (nonatomic,retain) NSMutableArray * intlNumberFormats;                       //@synthesize intlNumberFormats=_intlNumberFormats - In the implementation block
@property (assign,nonatomic) BOOL mainCountryForCode;                                  //@synthesize mainCountryForCode=_mainCountryForCode - In the implementation block
@property (nonatomic,retain) NSString * leadingDigits;                                 //@synthesize leadingDigits=_leadingDigits - In the implementation block
@property (assign,nonatomic) BOOL leadingZeroPossible;                                 //@synthesize leadingZeroPossible=_leadingZeroPossible - In the implementation block
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)countryCode;
-(void)setEmergency:(NBPhoneNumberDesc *)arg1 ;
-(NBPhoneNumberDesc *)emergency;
-(void)setCountryCode:(NSNumber *)arg1 ;
-(void)setVoicemail:(NBPhoneNumberDesc *)arg1 ;
-(NBPhoneNumberDesc *)generalDesc;
-(void)setGeneralDesc:(NBPhoneNumberDesc *)arg1 ;
-(NBPhoneNumberDesc *)fixedLine;
-(void)setFixedLine:(NBPhoneNumberDesc *)arg1 ;
-(NBPhoneNumberDesc *)mobile;
-(void)setMobile:(NBPhoneNumberDesc *)arg1 ;
-(NBPhoneNumberDesc *)tollFree;
-(void)setTollFree:(NBPhoneNumberDesc *)arg1 ;
-(NBPhoneNumberDesc *)premiumRate;
-(void)setPremiumRate:(NBPhoneNumberDesc *)arg1 ;
-(NBPhoneNumberDesc *)sharedCost;
-(void)setSharedCost:(NBPhoneNumberDesc *)arg1 ;
-(NBPhoneNumberDesc *)personalNumber;
-(void)setPersonalNumber:(NBPhoneNumberDesc *)arg1 ;
-(NBPhoneNumberDesc *)voip;
-(void)setVoip:(NBPhoneNumberDesc *)arg1 ;
-(NBPhoneNumberDesc *)pager;
-(void)setPager:(NBPhoneNumberDesc *)arg1 ;
-(NBPhoneNumberDesc *)uan;
-(void)setUan:(NBPhoneNumberDesc *)arg1 ;
-(NBPhoneNumberDesc *)voicemail;
-(NBPhoneNumberDesc *)noInternationalDialling;
-(void)setNoInternationalDialling:(NBPhoneNumberDesc *)arg1 ;
-(NSString *)codeID;
-(void)setCodeID:(NSString *)arg1 ;
-(NSString *)internationalPrefix;
-(void)setInternationalPrefix:(NSString *)arg1 ;
-(NSString *)preferredInternationalPrefix;
-(void)setPreferredInternationalPrefix:(NSString *)arg1 ;
-(NSString *)nationalPrefix;
-(void)setNationalPrefix:(NSString *)arg1 ;
-(NSString *)preferredExtnPrefix;
-(void)setPreferredExtnPrefix:(NSString *)arg1 ;
-(NSString *)nationalPrefixForParsing;
-(void)setNationalPrefixForParsing:(NSString *)arg1 ;
-(NSString *)nationalPrefixTransformRule;
-(void)setNationalPrefixTransformRule:(NSString *)arg1 ;
-(BOOL)sameMobileAndFixedLinePattern;
-(void)setSameMobileAndFixedLinePattern:(BOOL)arg1 ;
-(NSMutableArray *)numberFormats;
-(void)setNumberFormats:(NSMutableArray *)arg1 ;
-(NSMutableArray *)intlNumberFormats;
-(void)setIntlNumberFormats:(NSMutableArray *)arg1 ;
-(BOOL)mainCountryForCode;
-(void)setMainCountryForCode:(BOOL)arg1 ;
-(NSString *)leadingDigits;
-(void)setLeadingDigits:(NSString *)arg1 ;
-(BOOL)leadingZeroPossible;
-(void)setLeadingZeroPossible:(BOOL)arg1 ;
@end

