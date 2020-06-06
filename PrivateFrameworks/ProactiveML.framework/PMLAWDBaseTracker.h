/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AWDProactiveModelFittingModelInfo;

@interface PMLAWDBaseTracker : NSObject {

	AWDProactiveModelFittingModelInfo* _modelInfo;

}

@property (nonatomic,readonly) AWDProactiveModelFittingModelInfo * modelInfo;              //@synthesize modelInfo=_modelInfo - In the implementation block
+(id)trackerForPlanId:(id)arg1 ;
+(id)trackerForModelName:(id)arg1 modelVersion:(id)arg2 modelLocale:(id)arg3 ;
-(id)initWithModel:(id)arg1 ;
-(AWDProactiveModelFittingModelInfo *)modelInfo;
-(void)postMetricId:(unsigned)arg1 message:(id)arg2 ;
@end

