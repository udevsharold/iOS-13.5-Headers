/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CRIntermediateDetectorResult : NSObject {

	NSMutableArray* _pyramidPreIntraScaleNMSTextFeatures;
	NSMutableArray* _pyramidPostIntraScaleNMSTextFeatures;
	NSMutableArray* _pyramidPostInterScaleNMSTextFeatures;
	NSMutableArray* _pyramidScaleSize;

}

@property (nonatomic,retain) NSMutableArray * pyramidPreIntraScaleNMSTextFeatures;               //@synthesize pyramidPreIntraScaleNMSTextFeatures=_pyramidPreIntraScaleNMSTextFeatures - In the implementation block
@property (nonatomic,retain) NSMutableArray * pyramidPostIntraScaleNMSTextFeatures;              //@synthesize pyramidPostIntraScaleNMSTextFeatures=_pyramidPostIntraScaleNMSTextFeatures - In the implementation block
@property (nonatomic,retain) NSMutableArray * pyramidPostInterScaleNMSTextFeatures;              //@synthesize pyramidPostInterScaleNMSTextFeatures=_pyramidPostInterScaleNMSTextFeatures - In the implementation block
@property (nonatomic,retain) NSMutableArray * pyramidScaleSize;                                  //@synthesize pyramidScaleSize=_pyramidScaleSize - In the implementation block
-(id)initWithNumberOfScales:(long long)arg1 ;
-(NSMutableArray *)pyramidScaleSize;
-(NSMutableArray *)pyramidPreIntraScaleNMSTextFeatures;
-(void)setPyramidScaleSize:(NSMutableArray *)arg1 ;
-(void)setPyramidPreIntraScaleNMSTextFeatures:(NSMutableArray *)arg1 ;
-(void)setPyramidPostIntraScaleNMSTextFeatures:(NSMutableArray *)arg1 ;
-(void)setPyramidPostInterScaleNMSTextFeatures:(NSMutableArray *)arg1 ;
-(NSMutableArray *)pyramidPostIntraScaleNMSTextFeatures;
-(NSMutableArray *)pyramidPostInterScaleNMSTextFeatures;
@end

