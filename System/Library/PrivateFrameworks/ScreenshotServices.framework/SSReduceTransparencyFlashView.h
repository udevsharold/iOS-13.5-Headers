/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <ScreenshotServices/SSFlashView.h>

@class UIView;

@interface SSReduceTransparencyFlashView : SSFlashView {

	/*^block*/id _oldCompletionBlock;
	UIView* _colorView;

}
+(double)expectedAnimationDurationForStyle:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)flashWithCompletion:(/*^block*/id)arg1 ;
@end
