/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <libobjc.A.dylib/PMLMultiLabelClassifierModelProtocol.h>

@class NSString;

@interface PMLMultiLabelEspressoClassifier : NSObject <PMLMultiLabelClassifierModelProtocol> {

	SCD_Struct_PM8* _espressoModel;
	void* _espressoPlan;
	void* _espressoContext;
	unsigned long long _outputNumReplyClasses;
	unsigned long long _inputMaxSequenceLength;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)count;
-(id)predict:(id)arg1 ;
-(id)initWithModels:(SCD_Struct_PM8*)arg1 ;
-(id)classify:(id)arg1 ;
-(id)shapeJSONFromFile:(id)arg1 ;
-(BOOL)finalizeNetWithInputOutputShape:(id)arg1 ;
-(id)initWithEspressoModelsFromFile:(id)arg1 intercept:(BOOL)arg2 ;
@end

