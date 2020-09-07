/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface CSVoiceProfileContext : NSObject {

	NSString* _profileId;
	NSString* _languageCode;
	NSString* _productCategory;
	NSNumber* _version;
	unsigned long long _onboardType;
	NSString* _homeId;
	NSString* _userName;
	NSString* _siriDebugProfileId;

}

@property (nonatomic,retain) NSString * profileId;                        //@synthesize profileId=_profileId - In the implementation block
@property (nonatomic,retain) NSString * languageCode;                     //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,retain) NSString * productCategory;                  //@synthesize productCategory=_productCategory - In the implementation block
@property (nonatomic,retain) NSNumber * version;                          //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned long long onboardType;              //@synthesize onboardType=_onboardType - In the implementation block
@property (nonatomic,retain) NSString * homeId;                           //@synthesize homeId=_homeId - In the implementation block
@property (nonatomic,retain) NSString * userName;                         //@synthesize userName=_userName - In the implementation block
@property (nonatomic,retain) NSString * siriDebugProfileId;               //@synthesize siriDebugProfileId=_siriDebugProfileId - In the implementation block
-(id)description;
-(NSString *)userName;
-(NSString *)languageCode;
-(NSNumber *)version;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSString *)profileId;
-(void)setProfileId:(NSString *)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(NSString *)productCategory;
-(void)setProductCategory:(NSString *)arg1 ;
-(id)initWithSharedSiriId:(id)arg1 languageCode:(id)arg2 productCategory:(id)arg3 version:(id)arg4 sharedHomeId:(id)arg5 userName:(id)arg6 ;
-(void)setOnboardType:(unsigned long long)arg1 ;
-(unsigned long long)onboardType;
-(NSString *)homeId;
-(void)setHomeId:(NSString *)arg1 ;
-(NSString *)siriDebugProfileId;
-(void)setSiriDebugProfileId:(NSString *)arg1 ;
@end
