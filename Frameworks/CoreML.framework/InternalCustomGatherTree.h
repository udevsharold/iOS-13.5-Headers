/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLCustomLayer.h>

@interface InternalCustomGatherTree : NSObject <MLCustomLayer> {

	vector<int, std::__1::allocator<int> >* _shape;

}

@property (nonatomic,readonly) vector<int shape;              //@synthesize shape=_shape - In the implementation block
-(vector<int)shape;
-(BOOL)setWeightData:(id)arg1 error:(id*)arg2 ;
-(id)initWithParameterDictionary:(id)arg1 error:(id*)arg2 ;
-(id)outputShapesForInputShapes:(id)arg1 error:(id*)arg2 ;
-(BOOL)evaluateOnCPUWithInputs:(id)arg1 outputs:(id)arg2 error:(id*)arg3 ;
@end

