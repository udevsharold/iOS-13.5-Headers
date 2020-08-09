/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PRRequestDelegate;
@class NSString;

@interface PRRequestQueue : NSObject {

	id<PRRequestDelegate> _delegate;
	NSString* _identifier;

}

@property (assign,nonatomic,__weak) id<PRRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
+(id)_requestQueueForIdentifier:(id)arg1 ;
+(id)defaultRequestQueue;
-(id<PRRequestDelegate>)delegate;
-(void)setDelegate:(id<PRRequestDelegate>)arg1 ;
-(NSString *)identifier;
-(id)_pushToken;
-(void)_attemptLocalApprovalForStorePurchaseRequestWithItemIdentifier:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)askPermissionTo:(id)arg1 withRequestInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)pendingRequestsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)attemptLocalApprovalForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_didStartNewPurchaseRequestWithInfo:(id)arg1 ;
-(void)_didReceiveStorePushNotificationWithPayload:(id)arg1 ;
-(void)_pendingStorePurchaseRequestForItemIdentifier:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)_attemptLocalApprovalForStorePurchaseRequestWithAdamID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_requestToBePresentedWithReply:(/*^block*/id)arg1 ;
-(void)_userDidApproveRequestWithRequestID:(id)arg1 ;
-(void)_userDidDenyRequestWithRequestID:(id)arg1 ;
-(void)_clearCachedRequests;
-(void)_registerPushToken;
-(void)_readTestValueFromTouchIDKeychain;
-(void)_writeTestValueToTouchIDKeychain;
-(void)_deleteTestValueFromTouchIDKeychain;
@end
