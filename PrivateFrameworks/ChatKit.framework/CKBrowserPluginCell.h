/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKBrowserCell.h>

@class UIImageView, IMBalloonPlugin;

@interface CKBrowserPluginCell : CKBrowserCell {

	UIImageView* _selectionOutline;
	IMBalloonPlugin* _plugin;
	UIImageView* _browserImage;

}

@property (nonatomic,retain) IMBalloonPlugin * plugin;                //@synthesize plugin=_plugin - In the implementation block
@property (nonatomic,retain) UIImageView * browserImage;              //@synthesize browserImage=_browserImage - In the implementation block
+(id)reuseIdentifier;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(id)iconView;
-(IMBalloonPlugin *)plugin;
-(void)setPlugin:(IMBalloonPlugin *)arg1 ;
-(UIImageView *)browserImage;
-(void)setPlugin:(id)arg1 hideShinyStatus:(BOOL)arg2 ;
-(void)setBrowserImage:(UIImageView *)arg1 ;
-(void)_setImageForPlugin:(id)arg1 ;
-(void)_updateShinyStatus;
@end

