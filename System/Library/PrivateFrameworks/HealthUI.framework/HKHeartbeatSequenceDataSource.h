/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeriesDataSource.h>

@class HKGraphSeriesDataBlock;

@interface HKHeartbeatSequenceDataSource : HKGraphSeriesDataSource {

	HKGraphSeriesDataBlock* _dataBlock;

}

@property (nonatomic,readonly) HKGraphSeriesDataBlock * dataBlock;              //@synthesize dataBlock=_dataBlock - In the implementation block
-(id)init;
-(HKGraphSeriesDataBlock *)dataBlock;
-(id)cachedBlockForPath:(SCD_Struct_HK9)arg1 context:(id)arg2 ;
-(void)blocksRequestedFromPath:(SCD_Struct_HK9)arg1 toPath:(SCD_Struct_HK9)arg2 ;
-(SCD_Struct_HK9)blockPathForX:(id)arg1 zoom:(long long)arg2 ;
-(void)setHeartbeatSequencePoints:(id)arg1 ;
-(CGRect)unionWithExtent:(CGRect)arg1 ;
@end

