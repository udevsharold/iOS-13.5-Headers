/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>
#import <libobjc.A.dylib/HUCollectionViewCellSeparatorsProtocol.h>

@class HULinkedApplicationView, UIView, NSString, HFItem;

@interface HULinkedApplicationCollectionViewCell : UICollectionViewCell <HUCellProtocol, HUCollectionViewCellSeparatorsProtocol> {

	HULinkedApplicationView* _linkedApplicationView;
	UIView* _topSeparatorView;
	UIView* _bottomSeparatorView;

}

@property (nonatomic,readonly) HULinkedApplicationView * linkedApplicationView;                //@synthesize linkedApplicationView=_linkedApplicationView - In the implementation block
@property (nonatomic,readonly) UIView * topSeparatorView;                                      //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (nonatomic,readonly) UIView * bottomSeparatorView;                                   //@synthesize bottomSeparatorView=_bottomSeparatorView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item; 
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (assign,nonatomic) BOOL topSeparatorVisible; 
@property (assign,nonatomic) BOOL bottomSeparatorVisible; 
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(UIView *)topSeparatorView;
-(UIView *)bottomSeparatorView;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(HULinkedApplicationView *)linkedApplicationView;
-(void)setTopSeparatorVisible:(BOOL)arg1 ;
-(void)setBottomSeparatorVisible:(BOOL)arg1 ;
-(BOOL)topSeparatorVisible;
-(BOOL)bottomSeparatorVisible;
@end

