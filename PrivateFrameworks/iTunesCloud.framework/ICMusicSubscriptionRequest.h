/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext;

@interface ICMusicSubscriptionRequest : ICRequestOperation {

	ICStoreRequestContext* _storeRequestContext;
	long long _requestType;
	BOOL _requestingOfflineSlot;

}
-(void)execute;
-(id)_bagKeyForRequestType:(long long)arg1 ;
-(id)initWithStoreRequestContext:(id)arg1 requestType:(long long)arg2 requestingOfflineSlot:(BOOL)arg3 ;
@end

