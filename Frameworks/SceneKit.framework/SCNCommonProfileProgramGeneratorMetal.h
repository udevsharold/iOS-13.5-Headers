/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNCommonProfileProgramGenerator.h>

@class NSString, NSArray;

@interface SCNCommonProfileProgramGeneratorMetal : SCNCommonProfileProgramGenerator {

	BOOL _useFunctionConstants;
	NSString* _originalSourceCode;
	NSArray* _injectionPointRanges;
	NSString* _originalLightingSourceCode;
	NSArray* _lightingInjectionPointRanges;

}
-(id)init;
-(void)dealloc;
-(int)profile;
-(void)emptyShaderCache;
-(C3DFXProgramRef)_newProgramWithHashCode:(C3DProgramHashCodeRef)arg1 engineContext:(C3DEngineContextRef)arg2 introspectionDataPtr:(void*)arg3 ;
-(void)_loadSourceCode;
-(C3DFXProgramRef)_newProgramWithHashCodeWithFunctionConstants:(C3DProgramHashCodeRef)arg1 engineContext:(C3DEngineContextRef)arg2 introspectionDataPtr:(void*)arg3 ;
@end

