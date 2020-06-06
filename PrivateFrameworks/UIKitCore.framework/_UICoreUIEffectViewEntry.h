/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class CALayer;

@interface _UICoreUIEffectViewEntry : _UIVisualEffectViewEntry {

	CALayer* _materialLayer;

}

@property (nonatomic,retain) CALayer * materialLayer;              //@synthesize materialLayer=_materialLayer - In the implementation block
-(void)removeEffectFromView:(id)arg1 ;
-(BOOL)canTransitionToEffect:(id)arg1 ;
-(BOOL)shouldAnimateProperty:(id)arg1 ;
-(void)addEffectToView:(id)arg1 ;
-(BOOL)isSameTypeOfEffect:(id)arg1 ;
-(CALayer *)materialLayer;
-(void)setMaterialLayer:(CALayer *)arg1 ;
@end

