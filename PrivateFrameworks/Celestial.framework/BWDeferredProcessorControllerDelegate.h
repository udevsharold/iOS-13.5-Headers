/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWDeferredProcessorControllerDelegate <BWStillImageProcessorControllerDelegate>
@required
-(void)processorController:(id)arg1 didDetermineReferenceFrame:(opaqueCMSampleBufferRef)arg2 processorInput:(id)arg3 err:(int)arg4;
-(void)processorController:(id)arg1 didProcessInferencesForSkinMask:(const void*)arg2 personMask:(const void*)arg3 faceObservations:(id)arg4 processorInput:(id)arg5 err:(int)arg6;

@end

