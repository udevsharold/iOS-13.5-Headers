/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MLCustomLayer
@optional
-(BOOL)encodeToCommandBuffer:(id)arg1 inputs:(id)arg2 outputs:(id)arg3 error:(id*)arg4;

@required
-(BOOL)setWeightData:(id)arg1 error:(id*)arg2;
-(id)initWithParameterDictionary:(id)arg1 error:(id*)arg2;
-(id)outputShapesForInputShapes:(id)arg1 error:(id*)arg2;
-(BOOL)evaluateOnCPUWithInputs:(id)arg1 outputs:(id)arg2 error:(id*)arg3;

@end

