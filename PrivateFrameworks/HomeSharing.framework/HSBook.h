/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSURL;

@interface HSBook : NSObject <NSSecureCoding> {

	BOOL _vppLicensed;
	unsigned long long _purchaseHistoryID;
	unsigned long long _storeID;
	NSString* _title;
	NSString* _author;
	NSString* _genre;
	NSDate* _datePurchased;
	NSURL* _artworkURL;
	NSString* _redownloadParameters;
	NSString* _vppOrganizationID;
	NSString* _vppOrganizationDisplayName;

}

@property (assign,nonatomic) unsigned long long purchaseHistoryID;               //@synthesize purchaseHistoryID=_purchaseHistoryID - In the implementation block
@property (assign,nonatomic) unsigned long long storeID;                         //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * author;                                    //@synthesize author=_author - In the implementation block
@property (nonatomic,copy) NSString * genre;                                     //@synthesize genre=_genre - In the implementation block
@property (nonatomic,copy) NSDate * datePurchased;                               //@synthesize datePurchased=_datePurchased - In the implementation block
@property (nonatomic,copy) NSURL * artworkURL;                                   //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,copy) NSString * redownloadParameters;                      //@synthesize redownloadParameters=_redownloadParameters - In the implementation block
@property (assign,getter=isVPPLicensed,nonatomic) BOOL vppLicensed;              //@synthesize vppLicensed=_vppLicensed - In the implementation block
@property (nonatomic,copy) NSString * vppOrganizationID;                         //@synthesize vppOrganizationID=_vppOrganizationID - In the implementation block
@property (nonatomic,copy) NSString * vppOrganizationDisplayName;                //@synthesize vppOrganizationDisplayName=_vppOrganizationDisplayName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)genre;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(unsigned long long)storeID;
-(void)setGenre:(NSString *)arg1 ;
-(NSURL *)artworkURL;
-(void)setArtworkURL:(NSURL *)arg1 ;
-(void)setStoreID:(unsigned long long)arg1 ;
-(NSString *)redownloadParameters;
-(void)setRedownloadParameters:(NSString *)arg1 ;
-(BOOL)isVPPLicensed;
-(NSDate *)datePurchased;
-(void)setDatePurchased:(NSDate *)arg1 ;
-(void)setPurchaseHistoryID:(unsigned long long)arg1 ;
-(void)setVppLicensed:(BOOL)arg1 ;
-(void)setVppOrganizationID:(NSString *)arg1 ;
-(void)setVppOrganizationDisplayName:(NSString *)arg1 ;
-(unsigned long long)purchaseHistoryID;
-(NSString *)vppOrganizationID;
-(NSString *)vppOrganizationDisplayName;
@end

