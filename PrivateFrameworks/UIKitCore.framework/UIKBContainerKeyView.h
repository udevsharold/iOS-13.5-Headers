/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBKeyView.h>

@class UIKBKeyView;

@interface UIKBContainerKeyView : UIKBKeyView {

	UIKBKeyView* _keyView;

}
-(void)dealloc;
-(id)key;
-(id)factory;
-(void)displayLayer:(id)arg1 ;
-(void)setNeedsDisplay;
-(void)setRenderConfig:(id)arg1 ;
-(void)prepareForDisplay;
-(id)contentsKeyView;
-(void)setDrawFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(id)renderConfig;
-(void)dimKeys:(id)arg1 ;
-(id)keyplane;
-(BOOL)hasRendered;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(id)layerForRenderFlags:(long long)arg1 ;
-(CGRect)drawFrame;
-(BOOL)requiresSublayers;
-(long long)imageOrientationForLayer:(id)arg1 ;
-(void)changeBackgroundToEnabled;
-(void)changeBackgroundToActiveIfNecessary;
-(void)setFactory:(id)arg1 ;
@end

