/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol SVVideoAccessoryItemDisplayModeTransitionContext <NSObject>
@property (nonatomic,readonly) NSSet * views; 
@property (nonatomic,readonly) NSSet * appearingViews; 
@property (nonatomic,readonly) NSSet * disappearingViews; 
@property (nonatomic,readonly) NSSet * transitioningViews; 
@property (nonatomic,readonly) NSSet * containerViews; 
@property (nonatomic,readonly) BOOL transitionWasCancelled; 
@required
-(BOOL)transitionWasCancelled;
-(void)completeTransition:(BOOL)arg1;
-(NSSet *)views;
-(NSSet *)appearingViews;
-(CGRect*)initialFrameForView:(id)arg1;
-(NSSet *)containerViews;
-(unsigned long long)initialDisplayModeForView:(id)arg1;
-(unsigned long long)targetDisplayModeForView:(id)arg1;
-(CGRect*)targetFrameForView:(id)arg1;
-(NSSet *)transitioningViews;
-(NSSet *)disappearingViews;

@end

