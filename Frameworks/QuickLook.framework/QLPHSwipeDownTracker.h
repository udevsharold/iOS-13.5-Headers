/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLook/QuickLook-Structs.h>
@class QLPXSwipeDownTracker;

@interface QLPHSwipeDownTracker : NSObject {

	QLPXSwipeDownTracker* _impl;

}

@property (nonatomic,readonly) QLPXSwipeDownTracker * impl;                      //@synthesize impl=_impl - In the implementation block
@property (nonatomic,readonly) double dismissalProgress; 
@property (nonatomic,readonly) BOOL shouldFinishDismissal; 
@property (nonatomic,readonly) CGPoint trackedCenter; 
@property (nonatomic,readonly) CGRect trackedBounds; 
@property (nonatomic,readonly) CGAffineTransform trackedTransform; 
@property (nonatomic,readonly) QLPHDisplayVelocity trackedVelocity; 
@property (nonatomic,readonly) double finalAnimationDuration; 
@property (nonatomic,readonly) double finalAnimationSpringDamping; 
-(id)init;
-(QLPXSwipeDownTracker *)impl;
-(CGPoint)trackedCenter;
-(CGAffineTransform)trackedTransform;
-(QLPHDisplayVelocity)trackedVelocity;
-(double)finalAnimationSpringDamping;
-(void)startTrackingCenter:(CGPoint)arg1 bounds:(CGRect)arg2 transform:(CGAffineTransform)arg3 withInitialGestureLocation:(CGPoint)arg4 ;
-(double)dismissalProgress;
-(void)trackGestureTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(BOOL)shouldFinishDismissal;
-(CGRect)trackedBounds;
-(double)finalAnimationDuration;
@end

