/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, SSURLBag;

@interface SKUIProductReviewURLProvider : NSObject {

	NSURL* _rateURL;
	NSURL* _writeReviewURL;
	NSString* _itemID;
	SSURLBag* _urlBag;

}

@property (nonatomic,copy) NSString * itemID;                     //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) SSURLBag * urlBag;                   //@synthesize urlBag=_urlBag - In the implementation block
@property (nonatomic,retain) NSURL * rateURL;                     //@synthesize rateURL=_rateURL - In the implementation block
@property (nonatomic,retain) NSURL * writeReviewURL;              //@synthesize writeReviewURL=_writeReviewURL - In the implementation block
-(id)init;
-(NSString *)itemID;
-(void)setItemID:(NSString *)arg1 ;
-(SSURLBag *)urlBag;
-(id)initWithClientContext:(id)arg1 itemID:(id)arg2 ;
-(id)_urlByAppendingItemId:(id)arg1 ;
-(void)setRateURL:(NSURL *)arg1 ;
-(void)setWriteReviewURL:(NSURL *)arg1 ;
-(void)fetchURLsWithCompletion:(/*^block*/id)arg1 ;
-(NSURL *)rateURL;
-(NSURL *)writeReviewURL;
-(void)setUrlBag:(SSURLBag *)arg1 ;
@end

