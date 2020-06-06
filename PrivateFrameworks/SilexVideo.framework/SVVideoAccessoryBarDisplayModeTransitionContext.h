/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/SVVideoAccessoryItemDisplayModeTransitionContext.h>

@class NSSet, SVVideoAccessoryBarDisplayState, NSString;

@interface SVVideoAccessoryBarDisplayModeTransitionContext : NSObject <SVVideoAccessoryItemDisplayModeTransitionContext> {

	BOOL _transitionWasCancelled;
	NSSet* _views;
	NSSet* _appearingViews;
	NSSet* _disappearingViews;
	NSSet* _transitioningViews;
	NSSet* _containerViews;
	SVVideoAccessoryBarDisplayState* _fromState;
	SVVideoAccessoryBarDisplayState* _toState;
	/*^block*/id _completionBlock;

}

@property (nonatomic,readonly) SVVideoAccessoryBarDisplayState * fromState;              //@synthesize fromState=_fromState - In the implementation block
@property (nonatomic,readonly) SVVideoAccessoryBarDisplayState * toState;                //@synthesize toState=_toState - In the implementation block
@property (nonatomic,readonly) id completionBlock;                                       //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) BOOL transitionWasCancelled;                                //@synthesize transitionWasCancelled=_transitionWasCancelled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * views;                                            //@synthesize views=_views - In the implementation block
@property (nonatomic,readonly) NSSet * appearingViews;                                   //@synthesize appearingViews=_appearingViews - In the implementation block
@property (nonatomic,readonly) NSSet * disappearingViews;                                //@synthesize disappearingViews=_disappearingViews - In the implementation block
@property (nonatomic,readonly) NSSet * transitioningViews;                               //@synthesize transitioningViews=_transitioningViews - In the implementation block
@property (nonatomic,readonly) NSSet * containerViews;                                   //@synthesize containerViews=_containerViews - In the implementation block
-(id)completionBlock;
-(BOOL)transitionWasCancelled;
-(void)completeTransition:(BOOL)arg1 ;
-(NSSet *)views;
-(void)setTransitionWasCancelled:(BOOL)arg1 ;
-(SVVideoAccessoryBarDisplayState *)fromState;
-(SVVideoAccessoryBarDisplayState *)toState;
-(id)initWithFromState:(id)arg1 toState:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(NSSet *)appearingViews;
-(CGRect)initialFrameForView:(id)arg1 ;
-(NSSet *)containerViews;
-(unsigned long long)initialDisplayModeForView:(id)arg1 ;
-(unsigned long long)targetDisplayModeForView:(id)arg1 ;
-(CGRect)targetFrameForView:(id)arg1 ;
-(NSSet *)transitioningViews;
-(NSSet *)disappearingViews;
-(CGRect)frameForView:(id)arg1 inState:(id)arg2 ;
-(CGRect)initialFrameForView:(id)arg1 inState:(id)arg2 basedOnPositionInState:(id)arg3 ;
-(CGRect)targetFrameForView:(id)arg1 inState:(id)arg2 basedOnPositionInState:(id)arg3 ;
-(unsigned long long)displayModeForView:(id)arg1 inState:(id)arg2 ;
-(id)viewsForState:(id)arg1 ;
-(id)containerViewForDisplayMode:(unsigned long long)arg1 inState:(id)arg2 ;
-(id)containerViewForInitialDisplayMode:(unsigned long long)arg1 ;
-(id)containerViewForTargetDisplayMode:(unsigned long long)arg1 ;
@end

