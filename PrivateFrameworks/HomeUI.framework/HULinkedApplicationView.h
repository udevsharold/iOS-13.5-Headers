/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class HFItem, UIImageView, UILabel, HULinkedApplicationRatingView, UIButton, NSString, NSURL, NSArray;

@interface HULinkedApplicationView : UIView <HUCellProtocol> {

	BOOL _isInstalled;
	HFItem* _item;
	UIImageView* _iconView;
	UILabel* _nameLabel;
	UILabel* _publisherLabel;
	HULinkedApplicationRatingView* _ratingView;
	UILabel* _priceLabel;
	UILabel* _installedLabel;
	UIButton* _viewButton;
	NSString* _bundleID;
	NSURL* _storeURL;
	NSArray* _currentConstraints;

}

@property (nonatomic,retain) UIImageView * iconView;                                           //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                              //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * publisherLabel;                                         //@synthesize publisherLabel=_publisherLabel - In the implementation block
@property (nonatomic,retain) HULinkedApplicationRatingView * ratingView;                       //@synthesize ratingView=_ratingView - In the implementation block
@property (nonatomic,retain) UILabel * priceLabel;                                             //@synthesize priceLabel=_priceLabel - In the implementation block
@property (nonatomic,retain) UILabel * installedLabel;                                         //@synthesize installedLabel=_installedLabel - In the implementation block
@property (nonatomic,retain) UIButton * viewButton;                                            //@synthesize viewButton=_viewButton - In the implementation block
@property (assign,nonatomic) BOOL isInstalled;                                                 //@synthesize isInstalled=_isInstalled - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSURL * storeURL;                                                 //@synthesize storeURL=_storeURL - In the implementation block
@property (nonatomic,retain) NSArray * currentConstraints;                                     //@synthesize currentConstraints=_currentConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(BOOL)isInstalled;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(NSURL *)storeURL;
-(void)setViewButton:(UIButton *)arg1 ;
-(UIButton *)viewButton;
-(void)_viewButtonTapped:(id)arg1 ;
-(HULinkedApplicationRatingView *)ratingView;
-(void)setRatingView:(HULinkedApplicationRatingView *)arg1 ;
-(void)setStoreURL:(NSURL *)arg1 ;
-(NSArray *)currentConstraints;
-(void)setCurrentConstraints:(NSArray *)arg1 ;
-(UILabel *)publisherLabel;
-(void)setPublisherLabel:(UILabel *)arg1 ;
-(void)setIsInstalled:(BOOL)arg1 ;
-(UILabel *)priceLabel;
-(void)setPriceLabel:(UILabel *)arg1 ;
-(UILabel *)installedLabel;
-(void)setInstalledLabel:(UILabel *)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
@end

