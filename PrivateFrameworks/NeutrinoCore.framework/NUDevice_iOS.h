/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUDevice.h>

@class NURenderer;

@interface NUDevice_iOS : NUDevice {

	NURenderer* _renderer;

}
-(id)debugDescription;
-(id)initWithName:(id)arg1 ;
-(unsigned long long)family;
-(BOOL)hasOpenGLSupport;
-(long long)_defaultSampleMode;
-(long long)_openGLVirtualScreen;
-(id)_newRenderer:(out id*)arg1 ;
-(id)_lowPriorityRenderer:(out id*)arg1 ;
-(id)_newRendererWithOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_newMetalRendererWithOptions:(id)arg1 ;
-(id)_newOpenGLRendererWithOptions:(id)arg1 error:(out id*)arg2 ;
@end
