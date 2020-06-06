/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class UIImageView, _MKUILabel, UIView, NSLayoutConstraint, NSString, UIImage;

@interface MKTransitSystemCell : MKCustomSeparatorTableViewCell {

	UIImageView* _shieldImageView;
	_MKUILabel* _systemLabel;
	UIView* _disclosureButton;
	NSLayoutConstraint* _imageToLabelConstraint;
	NSLayoutConstraint* _systemLabelToTopConstraint;
	NSLayoutConstraint* _systemLabelToBottomConstraint;
	BOOL _showDisclosureButton;
	BOOL _expanded;

}

@property (nonatomic,copy) NSString * systemName; 
@property (nonatomic,retain) UIImage * systemArtwork; 
@property (assign,nonatomic) BOOL showDisclosureButton;                    //@synthesize showDisclosureButton=_showDisclosureButton - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;              //@synthesize expanded=_expanded - In the implementation block
-(void)prepareForReuse;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(BOOL)isExpanded;
-(NSString *)systemName;
-(void)setExpanded:(BOOL)arg1 ;
-(id)_disclosureButton;
-(void)infoCardThemeChanged;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)setShowDisclosureButton:(BOOL)arg1 ;
-(CGAffineTransform)_transformForExpandedState:(BOOL)arg1 animating:(BOOL)arg2 ;
-(void)setExpanded:(BOOL)arg1 insideAnimation:(BOOL)arg2 ;
-(UIImage *)systemArtwork;
-(void)setSystemArtwork:(UIImage *)arg1 ;
-(void)setSystemName:(NSString *)arg1 ;
-(BOOL)showDisclosureButton;
@end

