/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PushButtonDelegate;
@class SBSBiometricsService;

@interface PushButtonMonitor : NSObject {

	unsigned long long _lastTap;
	unsigned long long _lastDoubleTap;
	SBSBiometricsService* _sbBiometricsService;
	BOOL _doubleTapDetected;
	id<PushButtonDelegate> _delegate;

}

@property (assign,nonatomic) BOOL doubleTapDetected;                              //@synthesize doubleTapDetected=_doubleTapDetected - In the implementation block
@property (assign,nonatomic,__weak) id<PushButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id<PushButtonDelegate>)delegate;
-(void)setDelegate:(id<PushButtonDelegate>)arg1 ;
-(void)consumeDoubleTapWithReason:(id)arg1 ;
-(BOOL)doubleTapDetected;
-(void)consumeDoubleTapAfter:(long long)arg1 ;
-(id)prearmAssertion;
-(void)doubleTappedAt:(id)arg1 ;
-(void)setDoubleTapDetected:(BOOL)arg1 ;
@end

