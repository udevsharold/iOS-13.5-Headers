/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <JITAppKit/JITAppKit-Structs.h>
#import <UIKitCore/UIView.h>

@class TKKeyPathObserver, UIScrollView;

@interface MCLContentSizingView : UIView {

	TKKeyPathObserver* _observer;
	UIScrollView* _contentView;

}

@property (nonatomic,retain) UIScrollView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(UIScrollView *)contentView;
-(void)setContentView:(UIScrollView *)arg1 ;
-(CGSize)intrinsicContentSize;
@end
