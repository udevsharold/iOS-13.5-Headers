/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIScreen;

@interface SSScreenSnapshotter : NSObject {

	UIScreen* _screen;

}

@property (nonatomic,readonly) UIScreen * screen;              //@synthesize screen=_screen - In the implementation block
+(id)snapshotterForScreen:(id)arg1 ;
-(UIScreen *)screen;
-(id)initWithScreen:(id)arg1 ;
-(id)takeScreenshot;
@end

