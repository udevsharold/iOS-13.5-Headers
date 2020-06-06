/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, NSString;

@interface _MFSecureMIMEPersonHeaderLabel : UIView {

	UIImageView* _imageView;
	UILabel* _label;

}

@property (nonatomic,copy) NSString * text; 
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithImage:(id)arg1 text:(id)arg2 textColor:(id)arg3 ;
@end

