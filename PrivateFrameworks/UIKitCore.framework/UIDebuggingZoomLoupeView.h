/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UIDebuggingZoomDelegate;
@interface UIDebuggingZoomLoupeView : UIView {

	id<UIDebuggingZoomDelegate> _delegate;
	CGPoint _currentlyInspectedPoint;

}

@property (assign,nonatomic) CGPoint currentlyInspectedPoint;                          //@synthesize currentlyInspectedPoint=_currentlyInspectedPoint - In the implementation block
@property (assign,nonatomic,__weak) id<UIDebuggingZoomDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<UIDebuggingZoomDelegate>)delegate;
-(void)setDelegate:(id<UIDebuggingZoomDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGPoint)currentlyInspectedPoint;
-(void)setCurrentlyInspectedPoint:(CGPoint)arg1 ;
@end

