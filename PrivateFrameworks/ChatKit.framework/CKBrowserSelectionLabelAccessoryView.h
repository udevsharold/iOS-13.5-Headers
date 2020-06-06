/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface CKBrowserSelectionLabelAccessoryView : UIView {

	UIImageView* _plusLView;
	UIImageView* _plusDView;

}

@property (nonatomic,retain) UIImageView * plusLView;              //@synthesize plusLView=_plusLView - In the implementation block
@property (nonatomic,retain) UIImageView * plusDView;              //@synthesize plusDView=_plusDView - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithLabelAccessoryType:(unsigned long long)arg1 ;
-(void)setPlusLView:(UIImageView *)arg1 ;
-(void)setPlusDView:(UIImageView *)arg1 ;
-(UIImageView *)plusLView;
-(UIImageView *)plusDView;
@end

