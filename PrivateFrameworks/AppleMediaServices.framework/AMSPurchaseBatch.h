/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSLock, NSMutableDictionary, AMSLazyPromise;

@interface AMSPurchaseBatch : NSObject {

	BOOL _isComplete;
	NSMutableArray* _contexts;
	NSLock* _lock;
	NSMutableDictionary* _contextMap;
	NSMutableArray* _results;
	AMSLazyPromise* _promise;

}

@property (nonatomic,readonly) NSMutableArray * contexts;                     //@synthesize contexts=_contexts - In the implementation block
@property (nonatomic,retain) NSLock * lock;                                   //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * contextMap;              //@synthesize contextMap=_contextMap - In the implementation block
@property (assign,nonatomic) BOOL isComplete;                                 //@synthesize isComplete=_isComplete - In the implementation block
@property (nonatomic,readonly) NSMutableArray * results;                      //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) AMSLazyPromise * promise;                      //@synthesize promise=_promise - In the implementation block
-(NSLock *)lock;
-(NSMutableArray *)results;
-(void)setLock:(NSLock *)arg1 ;
-(AMSLazyPromise *)promise;
-(BOOL)isComplete;
-(NSMutableArray *)contexts;
-(id)initWithContexts:(id)arg1 weakPromise:(id)arg2 ;
-(id)contextForPurchaseId:(id)arg1 ;
-(BOOL)finishContext:(id)arg1 withError:(id)arg2 ;
-(BOOL)finishContext:(id)arg1 withResult:(id)arg2 ;
-(id)nextPurchaseContext;
-(NSMutableDictionary *)contextMap;
-(void)setIsComplete:(BOOL)arg1 ;
@end

