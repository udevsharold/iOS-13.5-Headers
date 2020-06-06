/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCCommand.h>

@class NSString;

@interface FCSubscribeToEmailCommand : FCCommand {

	NSString* _DSID;
	NSString* _storeFrontID;
	NSString* _primaryLanguage;

}

@property (nonatomic,copy) NSString * DSID;                         //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy) NSString * storeFrontID;                 //@synthesize storeFrontID=_storeFrontID - In the implementation block
@property (nonatomic,copy) NSString * primaryLanguage;              //@synthesize primaryLanguage=_primaryLanguage - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)primaryLanguage;
-(void)setPrimaryLanguage:(NSString *)arg1 ;
-(void)setDSID:(NSString *)arg1 ;
-(NSString *)DSID;
-(void)setStoreFrontID:(NSString *)arg1 ;
-(NSString *)storeFrontID;
-(void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3 ;
-(id)initWithDSID:(id)arg1 storeFrontID:(id)arg2 primaryLanguage:(id)arg3 ;
@end

