/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLLibrary;
@class NSArray, NSMutableDictionary;

@interface ARUIBlurRenderState : NSObject {

	NSArray* _supportedRadii;
	NSMutableDictionary* _renderStates;
	id<MTLDevice> _device;
	id<MTLLibrary> _library;

}
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(id)renderPipelineDescriptorFromLibrary:(id)arg1 forRadius:(long long)arg2 ;
-(id)renderPipelineStateForBlurRadius:(long long)arg1 error:(long long*)arg2 ;
-(id)_renderPipelineStateForKey:(id)arg1 ;
@end
