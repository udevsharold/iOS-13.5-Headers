/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLLibrary;
@class NSMutableDictionary;

@interface AVTCompositorPipelineCache : NSObject {

	id<MTLLibrary> _library;
	NSMutableDictionary* _pipelines;

}
+(id)pipelineForPropertyName:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 ;
-(id)pipelineForPropertyName:(id)arg1 ;
@end
