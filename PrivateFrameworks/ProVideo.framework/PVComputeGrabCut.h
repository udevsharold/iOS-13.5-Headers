/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PVComputeGrabCut : NSObject {

	HFGrabCutInterface* _module;

}
-(id)init;
-(void)dealloc;
-(void)reset;
-(BOOL)processImage:(id)arg1 trimap:(id)arg2 roi:(CGRect)arg3 clusters:(int)arg4 gamma:(float)arg5 iterations:(int)arg6 mask:(id)arg7 ;
@end

