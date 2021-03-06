/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, MPMediaItem, ICBuyProductRequest, ICStoreMediaResponseItem;

@interface BLStoreItemMetadataRequest : ICRequestOperation {

	ICStoreRequestContext* _requestContext;
	MPMediaItem* _mediaItem;
	ICBuyProductRequest* _buyProductRequest;
	ICStoreMediaResponseItem* _storeMetadata;

}
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(void)_performBuyProductRequest;
-(id)_responseDictionaryForKeyCertificateURL:(id)arg1 keyServerURL:(id)arg2 ;
-(id)initWithRequestContext:(id)arg1 mediaItem:(id)arg2 ;
@end

