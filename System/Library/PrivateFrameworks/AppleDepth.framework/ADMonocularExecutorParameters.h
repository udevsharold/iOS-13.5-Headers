/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleDepth/ADExecutorParameters.h>

@class ADMonocularPipelineParameters;

@interface ADMonocularExecutorParameters : ADExecutorParameters {

	ADMonocularPipelineParameters* _pipelineParameters;

}

@property (nonatomic,retain,readonly) ADMonocularPipelineParameters * pipelineParameters;              //@synthesize pipelineParameters=_pipelineParameters - In the implementation block
-(ADMonocularPipelineParameters *)pipelineParameters;
-(id)initForPipeline:(id)arg1 ;
@end
