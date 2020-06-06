/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@interface _UIZoomEffectViewEntry : _UIVisualEffectViewEntry {

	double _zoomAmount;

}

@property (assign,nonatomic) double zoomAmount;              //@synthesize zoomAmount=_zoomAmount - In the implementation block
-(id)description;
-(void)applyRequestedEffectToView:(id)arg1 ;
-(void)applyIdentityEffectToView:(id)arg1 ;
-(void)removeEffectFromView:(id)arg1 ;
-(BOOL)canTransitionToEffect:(id)arg1 ;
-(void)setZoomAmount:(double)arg1 ;
-(BOOL)shouldAnimateProperty:(id)arg1 ;
-(void)convertToIdentity;
-(double)zoomAmount;
@end

