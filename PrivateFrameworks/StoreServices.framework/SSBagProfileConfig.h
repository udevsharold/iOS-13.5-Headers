/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSArray;

@interface SSBagProfileConfig : NSObject <NSCopying> {

	double _bagLoadTimeout;
	NSString* _profile;
	NSString* _profileVersion;
	NSDictionary* _bagKeysDictionary;

}

@property (nonatomic,retain) NSDictionary * bagKeysDictionary;              //@synthesize bagKeysDictionary=_bagKeysDictionary - In the implementation block
@property (assign,nonatomic) double bagLoadTimeout;                         //@synthesize bagLoadTimeout=_bagLoadTimeout - In the implementation block
@property (nonatomic,copy) NSString * profile;                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy) NSString * profileVersion;                       //@synthesize profileVersion=_profileVersion - In the implementation block
@property (nonatomic,readonly) NSArray * bagKeys; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)profile;
-(void)setProfile:(NSString *)arg1 ;
-(NSString *)profileVersion;
-(void)setProfileVersion:(NSString *)arg1 ;
-(NSArray *)bagKeys;
-(id)bagKeyForStringRepresentation:(id)arg1 ;
-(NSDictionary *)bagKeysDictionary;
-(double)bagLoadTimeout;
-(void)setBagLoadTimeout:(double)arg1 ;
-(void)setBagKeysDictionary:(NSDictionary *)arg1 ;
@end

