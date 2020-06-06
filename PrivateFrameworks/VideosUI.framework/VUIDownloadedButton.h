/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class VUITextLayout;

@interface VUIDownloadedButton : UIButton {

	VUITextLayout* _textLayout;

}

@property (nonatomic,retain) VUITextLayout * textLayout;              //@synthesize textLayout=_textLayout - In the implementation block
+(id)downloadedButton;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextLayout:(VUITextLayout *)arg1 ;
-(VUITextLayout *)textLayout;
@end
