/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HMBProcessingModelResult.h>

@class HMBModel;

@interface HMBProcessingModelUpdate : HMBProcessingModelResult {

	HMBModel* _previousModel;

}

@property (readonly) HMBModel * previousModel;              //@synthesize previousModel=_previousModel - In the implementation block
-(id)attributeDescriptions;
-(id)initWithModel:(id)arg1 previousModel:(id)arg2 options:(id)arg3 mirrorOutputFuture:(id)arg4 ;
-(HMBModel *)previousModel;
@end

