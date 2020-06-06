/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class AVTAvatarActionButtonBlockHandler;

@interface AVTAvatarActionButton : UIButton {

	BOOL _isDestructive;
	AVTAvatarActionButtonBlockHandler* _blockHandler;

}

@property (assign,nonatomic) BOOL isDestructive;                                            //@synthesize isDestructive=_isDestructive - In the implementation block
@property (nonatomic,retain) AVTAvatarActionButtonBlockHandler * blockHandler;              //@synthesize blockHandler=_blockHandler - In the implementation block
+(id)buttonWithTitle:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
+(id)defaultButtonWithTitle:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
+(id)destructiveButtonWithTitle:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
-(BOOL)isDestructive;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setIsDestructive:(BOOL)arg1 ;
-(void)performActionBlock;
-(AVTAvatarActionButtonBlockHandler *)blockHandler;
-(void)setBlockHandler:(AVTAvatarActionButtonBlockHandler *)arg1 ;
@end

