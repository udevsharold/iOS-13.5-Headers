/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface ProgressController : NSObject {

	BOOL _progressShowing;
	int _loadingCount;
	NSTimer* _hideSpinnerTimer;

}
+(id)sharedProgressController;
-(void)suspend;
-(void)_showSpinner;
-(void)_setHideSpinnerTimer:(id)arg1 ;
-(void)_hideSpinner;
-(void)userScrolled;
-(void)setLoadingData:(BOOL)arg1 ;
@end
