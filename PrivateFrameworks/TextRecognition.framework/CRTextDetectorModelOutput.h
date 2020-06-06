/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface CRTextDetectorModelOutput : NSObject <MLFeatureProvider> {

	MLMultiArray* _f_score_act_sigmoid_output;
	MLMultiArray* _geometry_output;

}

@property (nonatomic,retain) MLMultiArray * f_score_act_sigmoid_output;              //@synthesize f_score_act_sigmoid_output=_f_score_act_sigmoid_output - In the implementation block
@property (nonatomic,retain) MLMultiArray * geometry_output;                         //@synthesize geometry_output=_geometry_output - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithF_score_act_sigmoid_output:(id)arg1 geometry_output:(id)arg2 ;
-(MLMultiArray *)f_score_act_sigmoid_output;
-(void)setF_score_act_sigmoid_output:(MLMultiArray *)arg1 ;
-(MLMultiArray *)geometry_output;
-(void)setGeometry_output:(MLMultiArray *)arg1 ;
@end

