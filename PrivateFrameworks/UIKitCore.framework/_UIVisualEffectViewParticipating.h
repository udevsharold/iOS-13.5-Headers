/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _UIVisualEffectViewBackdropCaptureGroup, NSArray;


@protocol _UIVisualEffectViewParticipating <NSObject>
@property (nonatomic,retain) _UIVisualEffectViewBackdropCaptureGroup * primaryCaptureGroup; 
@property (nonatomic,retain) UIView*<_UIVisualEffectViewParticipating> containedView; 
@property (nonatomic,copy) NSArray * viewEffects; 
@property (nonatomic,copy) NSArray * filters; 
@required
-(NSArray *)filters;
-(void)setFilters:(id)arg1;
-(void)setContainedView:(id)arg1;
-(void)setPrimaryCaptureGroup:(id)arg1;
-(void)applyRequestedFilterEffects;
-(NSArray *)viewEffects;
-(void)setViewEffects:(id)arg1;
-(UIView*<_UIVisualEffectViewParticipating>)containedView;
-(void)applyIdentityFilterEffects;
-(void)applyIdentityViewEffects;
-(void)applyRequestedViewEffects;
-(_UIVisualEffectViewBackdropCaptureGroup *)primaryCaptureGroup;

@end

