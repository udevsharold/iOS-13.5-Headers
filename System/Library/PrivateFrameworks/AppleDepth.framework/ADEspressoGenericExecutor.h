/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleDepth/AppleDepth-Structs.h>
@class NSMutableDictionary;

@interface ADEspressoGenericExecutor : NSObject {

	void* _ctx;
	void* _plan;
	SCD_Struct_AD4* _net;
	NSMutableDictionary* _inputsMap;
	NSMutableDictionary* _outputsMap;
	BOOL _CPUBindWA;

}
-(void)dealloc;
-(long long)execute;
-(id)networkVersionString;
-(int)bindBuffers:(id)arg1 toMap:(id)arg2 withMode:(int)arg3 ;
-(void*)getBufferWithName:(id)arg1 fromMap:(id)arg2 ;
-(long long)bindAsVImage:(CVBufferRef)arg1 name:(id)arg2 ;
-(id)initWithUrl:(id)arg1 inputNamesForBind:(id)arg2 outputNamesForBind:(id)arg3 forEngine:(unsigned long long)arg4 configurationName:(id)arg5 ;
-(void*)getInputBufferWithName:(id)arg1 ;
-(void*)getOutputBufferWithName:(id)arg1 ;
-(void*)getBufferWithName:(id)arg1 ;
-(long long)bindPixelBuffer:(CVBufferRef)arg1 name:(id)arg2 ;
@end

