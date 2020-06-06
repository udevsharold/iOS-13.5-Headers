/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIInterfaceActionGroupView.h>

@class UIAlertController;

@interface _UIAlertControllerInterfaceActionGroupView : UIInterfaceActionGroupView {

	BOOL _scrollableHeaderViewHasRealContent;
	UIAlertController* _alertController;

}

@property (assign,nonatomic,__weak) UIAlertController * alertController;              //@synthesize alertController=_alertController - In the implementation block
@property (assign,nonatomic) BOOL scrollableHeaderViewHasRealContent;                 //@synthesize scrollableHeaderViewHasRealContent=_scrollableHeaderViewHasRealContent - In the implementation block
-(void)setAlertController:(UIAlertController *)arg1 ;
-(id)_alertController;
-(UIAlertController *)alertController;
-(BOOL)_shouldInstallContentGuideConstraints;
-(BOOL)_shouldShowSeparatorAboveActionsSequenceView;
-(id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2 ;
-(BOOL)scrollableHeaderViewHasRealContent;
-(id)initWithAlertController:(id)arg1 actionGroup:(id)arg2 actionHandlerInvocationDelegate:(id)arg3 ;
-(void)setScrollableHeaderViewHasRealContent:(BOOL)arg1 ;
@end

