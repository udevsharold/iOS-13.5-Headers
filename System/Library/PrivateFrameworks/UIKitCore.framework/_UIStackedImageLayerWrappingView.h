/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol CALayerDelegate;
@interface _UIStackedImageLayerWrappingView : UIView {

	id<CALayerDelegate> _actionDelegate;

}

@property (assign,nonatomic,__weak) id<CALayerDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
-(void)dealloc;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(id<CALayerDelegate>)actionDelegate;
-(void)setActionDelegate:(id<CALayerDelegate>)arg1 ;
@end
