/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class CNSharingProfilePhotoPickerItem, CAShapeLayer, UIImageView;

@interface CNSharingProfilePhotoPickerItemCell : UICollectionViewCell {

	BOOL _isSmallScreen;
	CNSharingProfilePhotoPickerItem* _pickerItem;
	CAShapeLayer* _selectionStrokeLayer;
	UIImageView* _imageView;
	CGSize _originalSize;

}

@property (nonatomic,retain) CAShapeLayer * selectionStrokeLayer;                       //@synthesize selectionStrokeLayer=_selectionStrokeLayer - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                   //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) CGSize originalSize;                                       //@synthesize originalSize=_originalSize - In the implementation block
@property (assign,nonatomic) BOOL isSmallScreen;                                        //@synthesize isSmallScreen=_isSmallScreen - In the implementation block
@property (nonatomic,retain) CNSharingProfilePhotoPickerItem * pickerItem;              //@synthesize pickerItem=_pickerItem - In the implementation block
+(id)reuseIdentifier;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(CGSize)originalSize;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setPickerItem:(CNSharingProfilePhotoPickerItem *)arg1 ;
-(id)selectionBezierPath;
-(void)updateWithImage:(id)arg1 ;
-(BOOL)isSmallScreen;
-(void)setIsSmallScreen:(BOOL)arg1 ;
-(CNSharingProfilePhotoPickerItem *)pickerItem;
-(CAShapeLayer *)selectionStrokeLayer;
-(void)setSelectionStrokeLayer:(CAShapeLayer *)arg1 ;
-(void)setOriginalSize:(CGSize)arg1 ;
@end

