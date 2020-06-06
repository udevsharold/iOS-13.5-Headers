/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TUIAssistantButtonBarView, UIView;

@interface TUISystemInputAssistantLayoutViewSet : NSObject {

	TUIAssistantButtonBarView* _leftButtonBar;
	TUIAssistantButtonBarView* _rightButtonBar;
	TUIAssistantButtonBarView* _unifiedButtonBar;
	UIView* _centerView;

}

@property (nonatomic,retain) TUIAssistantButtonBarView * leftButtonBar;                 //@synthesize leftButtonBar=_leftButtonBar - In the implementation block
@property (nonatomic,retain) TUIAssistantButtonBarView * rightButtonBar;                //@synthesize rightButtonBar=_rightButtonBar - In the implementation block
@property (nonatomic,retain) TUIAssistantButtonBarView * unifiedButtonBar;              //@synthesize unifiedButtonBar=_unifiedButtonBar - In the implementation block
@property (nonatomic,retain) UIView * centerView;                                       //@synthesize centerView=_centerView - In the implementation block
-(void)setCenterView:(UIView *)arg1 ;
-(UIView *)centerView;
-(TUIAssistantButtonBarView *)leftButtonBar;
-(void)setLeftButtonBar:(TUIAssistantButtonBarView *)arg1 ;
-(TUIAssistantButtonBarView *)rightButtonBar;
-(void)setRightButtonBar:(TUIAssistantButtonBarView *)arg1 ;
-(TUIAssistantButtonBarView *)unifiedButtonBar;
-(void)setUnifiedButtonBar:(TUIAssistantButtonBarView *)arg1 ;
@end

