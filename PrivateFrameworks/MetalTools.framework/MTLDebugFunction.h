/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsFunction.h>

@class MTLFunctionConstantValues;

@interface MTLDebugFunction : MTLToolsFunction {

	MTLFunctionConstantValues* _constantValues;

}

@property (nonatomic,retain) MTLFunctionConstantValues * constantValues;              //@synthesize constantValues=_constantValues - In the implementation block
-(void)dealloc;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 ;
-(id)bitcodeData;
-(MTLFunctionConstantValues *)constantValues;
-(void)setConstantValues:(MTLFunctionConstantValues *)arg1 ;
@end

