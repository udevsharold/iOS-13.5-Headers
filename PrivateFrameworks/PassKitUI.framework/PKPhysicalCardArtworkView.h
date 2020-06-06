/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIImage, NSString;

@interface PKPhysicalCardArtworkView : UIView {

	UIImageView* _artworkImageView;
	UILabel* _nameLabel;
	UIImage* _artworkImage;
	NSString* _nameOnCard;

}

@property (nonatomic,retain) UIImage * artworkImage;              //@synthesize artworkImage=_artworkImage - In the implementation block
@property (nonatomic,copy) NSString * nameOnCard;                 //@synthesize nameOnCard=_nameOnCard - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(NSString *)nameOnCard;
-(void)setNameOnCard:(NSString *)arg1 ;
-(UIImage *)artworkImage;
-(void)setArtworkImage:(UIImage *)arg1 ;
@end
