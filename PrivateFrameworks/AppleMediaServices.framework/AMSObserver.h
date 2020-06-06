/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AMSObserver : NSObject {

	/*^block*/id _completionBlock;
	/*^block*/id _failureBlock;
	/*^block*/id _resultBlock;

}

@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) id failureBlock;                 //@synthesize failureBlock=_failureBlock - In the implementation block
@property (nonatomic,copy) id resultBlock;                  //@synthesize resultBlock=_resultBlock - In the implementation block
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)initWithResultBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(id)initWithResultBlock:(/*^block*/id)arg1 ;
-(void)_sendCompletionUsingQueue:(id)arg1 ;
-(void)_sendFailure:(id)arg1 usingQueue:(id)arg2 ;
-(void)_sendResult:(id)arg1 usingQueue:(id)arg2 ;
-(id)failureBlock;
-(id)resultBlock;
-(void)setFailureBlock:(id)arg1 ;
-(void)setResultBlock:(id)arg1 ;
@end

