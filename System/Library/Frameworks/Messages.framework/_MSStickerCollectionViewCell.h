/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewCell.h>

@class MSStickerView, CALayer;

@interface _MSStickerCollectionViewCell : UICollectionViewCell {

	MSStickerView* _stickerView;
	CALayer* _borderLayer;

}

@property (nonatomic,retain) CALayer * borderLayer;                      //@synthesize borderLayer=_borderLayer - In the implementation block
@property (nonatomic,retain) id<MSStickerPrivate> sticker; 
@property (nonatomic,readonly) MSStickerView * stickerView;              //@synthesize stickerView=_stickerView - In the implementation block
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setAnimating:(BOOL)arg1 ;
-(MSStickerView *)stickerView;
-(void)setSticker:(id<MSStickerPrivate>)arg1 ;
-(CALayer *)borderLayer;
-(id<MSStickerPrivate>)sticker;
-(void)showCellBorder:(BOOL)arg1 ;
-(void)setBorderLayer:(CALayer *)arg1 ;
@end

