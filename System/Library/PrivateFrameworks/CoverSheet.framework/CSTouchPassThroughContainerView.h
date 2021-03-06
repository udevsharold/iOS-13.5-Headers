/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CSTouchPassThroughContainerViewDelegate;
@interface CSTouchPassThroughContainerView : UIView {

	id<CSTouchPassThroughContainerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSTouchPassThroughContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CSTouchPassThroughContainerViewDelegate>)delegate;
-(void)setDelegate:(id<CSTouchPassThroughContainerViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

