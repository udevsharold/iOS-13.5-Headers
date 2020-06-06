/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMSBagKeySet, NSArray, NSDictionary, NSDate, NSString;

@interface AMSBagFrozenDataSourceBuilder : NSObject {

	AMSBagKeySet* _bagKeySet;
	NSArray* _cookies;
	NSDictionary* _data;
	NSDate* _expirationDate;
	NSString* _profile;
	NSString* _profileVersion;

}

@property (nonatomic,retain) AMSBagKeySet * bagKeySet;               //@synthesize bagKeySet=_bagKeySet - In the implementation block
@property (nonatomic,retain) NSArray * cookies;                      //@synthesize cookies=_cookies - In the implementation block
@property (nonatomic,retain) NSDictionary * data;                    //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSString * profile;                     //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSString * profileVersion;              //@synthesize profileVersion=_profileVersion - In the implementation block
-(NSDictionary *)data;
-(void)setData:(NSDictionary *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)profile;
-(void)setProfile:(NSString *)arg1 ;
-(NSArray *)cookies;
-(AMSBagKeySet *)bagKeySet;
-(NSString *)profileVersion;
-(void)setBagKeySet:(AMSBagKeySet *)arg1 ;
-(void)setCookies:(NSArray *)arg1 ;
-(void)setProfileVersion:(NSString *)arg1 ;
-(id)createFrozenDataSource;
-(id)initWithFrozenDataSource:(id)arg1 ;
@end

