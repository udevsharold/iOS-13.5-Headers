/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, UIScreen;

@interface SSScreenSnapshot : NSObject {

	UIImage* _image;
	UIScreen* _screen;

}

@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) UIScreen * screen; 
+(id)snapshotWithImage:(id)arg1 fromScreen:(id)arg2 ;
-(UIScreen *)screen;
-(UIImage *)image;
@end

