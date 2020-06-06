/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsCommandQueue.h>

@class NSString;

@interface MTLCountersCommandQueue : MTLToolsCommandQueue {

	NSString* _tracePath;

}

@property (nonatomic,readonly) NSString * tracePath;              //@synthesize tracePath=_tracePath - In the implementation block
-(id)commandBuffer;
-(id)commandBufferWithUnretainedReferences;
-(NSString *)tracePath;
-(id)initWithCommandQueue:(id)arg1 device:(id)arg2 ;
@end

