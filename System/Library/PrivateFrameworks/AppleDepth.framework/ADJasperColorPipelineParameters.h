/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleDepth/ADPipelineParameters.h>

@class ADJasperPointCloudFilterParamaters, ADAggregationParameters;

@interface ADJasperColorPipelineParameters : ADPipelineParameters {

	ADJasperPointCloudFilterParamaters* _pointCloudFilter;
	ADAggregationParameters* _aggregationParameters;

}

@property (nonatomic,retain) ADJasperPointCloudFilterParamaters * pointCloudFilter;              //@synthesize pointCloudFilter=_pointCloudFilter - In the implementation block
@property (nonatomic,retain) ADAggregationParameters * aggregationParameters;                    //@synthesize aggregationParameters=_aggregationParameters - In the implementation block
-(id)init;
-(ADAggregationParameters *)aggregationParameters;
-(void)setAggregationParameters:(ADAggregationParameters *)arg1 ;
-(ADJasperPointCloudFilterParamaters *)pointCloudFilter;
-(void)setPointCloudFilter:(ADJasperPointCloudFilterParamaters *)arg1 ;
@end
