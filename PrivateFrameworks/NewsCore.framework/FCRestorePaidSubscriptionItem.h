/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FCRestorePaidSubscriptionItem : NSObject {

	BOOL _isNewsAppPurchase;
	NSString* _channelID;

}

@property (nonatomic,readonly) NSString * channelID;                //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,readonly) BOOL isNewsAppPurchase;              //@synthesize isNewsAppPurchase=_isNewsAppPurchase - In the implementation block
-(BOOL)isNewsAppPurchase;
-(NSString *)channelID;
-(id)initWithChannelID:(id)arg1 isNewsAppPurchase:(BOOL)arg2 ;
@end

