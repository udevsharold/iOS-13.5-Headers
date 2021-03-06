/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:58:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NMSMediaContainerQuotaData : NSObject {

	id _quotaRefObj;
	unsigned long long _numItemsAdded;
	unsigned long long _numItemsSkipped;
	unsigned long long _numItemsRemoved;

}

@property (assign,nonatomic) unsigned long long numItemsAdded;                     //@synthesize numItemsAdded=_numItemsAdded - In the implementation block
@property (assign,nonatomic) unsigned long long numItemsSkipped;                   //@synthesize numItemsSkipped=_numItemsSkipped - In the implementation block
@property (assign,nonatomic) unsigned long long numItemsRemoved;                   //@synthesize numItemsRemoved=_numItemsRemoved - In the implementation block
@property (assign,nonatomic,__weak) id quotaRefObj;                                //@synthesize quotaRefObj=_quotaRefObj - In the implementation block
@property (nonatomic,readonly) unsigned long long numItemsAboveQuota; 
-(unsigned long long)numItemsAboveQuota;
-(id)quotaRefObj;
-(unsigned long long)numItemsAdded;
-(unsigned long long)numItemsSkipped;
-(void)setNumItemsSkipped:(unsigned long long)arg1 ;
-(unsigned long long)numItemsRemoved;
-(void)setNumItemsRemoved:(unsigned long long)arg1 ;
-(void)setNumItemsAdded:(unsigned long long)arg1 ;
-(void)setQuotaRefObj:(id)arg1 ;
@end

