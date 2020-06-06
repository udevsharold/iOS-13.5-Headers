/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@interface HMDBackingStoreLogFetchOperation : HMDBackingStoreOperation {

	/*^block*/id _fetchBlock;
	id _sentinal;
	long long _maskValue;
	long long _compareValue;

}

@property (nonatomic,copy) id fetchBlock;                         //@synthesize fetchBlock=_fetchBlock - In the implementation block
@property (nonatomic,retain) id sentinal;                         //@synthesize sentinal=_sentinal - In the implementation block
@property (assign,nonatomic) long long maskValue;                 //@synthesize maskValue=_maskValue - In the implementation block
@property (assign,nonatomic) long long compareValue;              //@synthesize compareValue=_compareValue - In the implementation block
-(id)fetchBlock;
-(void)setMaskValue:(long long)arg1 ;
-(long long)maskValue;
-(id)initWithNeedsPushTo:(unsigned long long)arg1 result:(/*^block*/id)arg2 ;
-(id)mainReturningError;
-(id)initWithSentinal:(id)arg1 needsPushTo:(unsigned long long)arg2 fetchResult:(/*^block*/id)arg3 ;
-(id)initWithSentinal:(id)arg1 mask:(long long)arg2 compare:(long long)arg3 fetchResult:(/*^block*/id)arg4 ;
-(id)initWithSentinal:(id)arg1 alreadyPushedTo:(unsigned long long)arg2 fetchResult:(/*^block*/id)arg3 ;
-(id)sentinal;
-(long long)compareValue;
-(id)initWithAlreadyPushedTo:(unsigned long long)arg1 result:(/*^block*/id)arg2 ;
-(void)setFetchBlock:(id)arg1 ;
-(void)setSentinal:(id)arg1 ;
-(void)setCompareValue:(long long)arg1 ;
@end

