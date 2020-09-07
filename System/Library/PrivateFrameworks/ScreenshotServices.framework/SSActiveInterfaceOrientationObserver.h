/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBUIActiveOrientationObserver.h>

@protocol SSActiveInterfaceOrientationObserverDelegate;
@class NSString;

@interface SSActiveInterfaceOrientationObserver : NSObject <SBUIActiveOrientationObserver> {

	id<SSActiveInterfaceOrientationObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SSActiveInterfaceOrientationObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SSActiveInterfaceOrientationObserverDelegate>)delegate;
-(void)setDelegate:(id<SSActiveInterfaceOrientationObserverDelegate>)arg1 ;
-(void)stopObserving;
-(void)beginObserving;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(void)_registerForActiveInterfaceOrientationChanges;
-(void)_observeActiveInterfaceOrientationChangeToOrientation:(long long)arg1 withDuration:(double)arg2 ;
-(void)_unregisterForActiveInterfaceOrientationChanges;
-(id)_sbUIUserAgent;
@end
