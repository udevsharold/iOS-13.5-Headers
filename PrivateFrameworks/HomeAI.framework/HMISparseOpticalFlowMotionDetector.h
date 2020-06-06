/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIMotionDetector.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSMutableArray, NSString;

@interface HMISparseOpticalFlowMotionDetector : HMFObject <HMIMotionDetector, HMFLogging> {

	NSMutableArray* _frames;
	CGSize _size;

}

@property (readonly) NSMutableArray * frames;                       //@synthesize frames=_frames - In the implementation block
@property (readonly) CGSize size;                                   //@synthesize size=_size - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(CGSize)size;
-(id)initWithSize:(CGSize)arg1 ;
-(NSMutableArray *)frames;
-(void)appendFramePixelBuffer:(CVBufferRef)arg1 atTime:(SCD_Struct_HM4)arg2 ;
-(id)detectWithGlobalMotionScore:(float*)arg1 ;
-(id)_computeOpticalFlow:(CVBufferRef)arg1 with:(CVBufferRef)arg2 globalMotionScore:(float*)arg3 ;
@end

