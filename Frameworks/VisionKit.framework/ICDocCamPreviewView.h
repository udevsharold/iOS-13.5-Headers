/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class AVCaptureVideoPreviewLayer, AVCaptureSession;

@interface ICDocCamPreviewView : UIView

@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * videoPreviewLayer; 
@property (nonatomic,retain) AVCaptureSession * session; 
+(Class)layerClass;
-(AVCaptureSession *)session;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(AVCaptureVideoPreviewLayer *)videoPreviewLayer;
@end

