/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/FigCapturePreviewSinkPipeline.h>

@class NSString;

@interface FigCaptureSessionPreviewSinkPipeline : FigCapturePreviewSinkPipeline {

	BOOL _imageQueueUpdatedNotificationSent;
	BOOL _previewSinkEnabled;
	BOOL _previewRunning;
	NSString* _sourceID;

}

@property (assign,nonatomic) BOOL imageQueueUpdatedNotificationSent;              //@synthesize imageQueueUpdatedNotificationSent=_imageQueueUpdatedNotificationSent - In the implementation block
@property (assign,nonatomic) BOOL previewRunning;                                 //@synthesize previewRunning=_previewRunning - In the implementation block
@property (assign,nonatomic) BOOL previewSinkEnabled;                             //@synthesize previewSinkEnabled=_previewSinkEnabled - In the implementation block
@property (nonatomic,retain) NSString * sourceID;                                 //@synthesize sourceID=_sourceID - In the implementation block
-(void)dealloc;
-(NSString *)sourceID;
-(void)setSourceID:(NSString *)arg1 ;
-(BOOL)imageQueueUpdatedNotificationSent;
-(void)setImageQueueUpdatedNotificationSent:(BOOL)arg1 ;
-(void)setPreviewSinkEnabled:(BOOL)arg1 ;
-(BOOL)previewSinkEnabled;
-(BOOL)previewRunning;
-(void)setPreviewRunning:(BOOL)arg1 ;
@end

