/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKitCore/UIView.h>

@class TintedView, UIView, UIImage, StockGraphImageSet;

@interface VolumeGraphView : UIView {

	BOOL _showingTintedRegion;
	TintedView* _tintedVolumeView;
	UIView* _tintedRegionClipView;
	UIImage* _volumeImage;
	StockGraphImageSet* _graphImageSet;

}

@property (nonatomic,retain) StockGraphImageSet * graphImageSet;              //@synthesize graphImageSet=_graphImageSet - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)resizeSelectedVolumeClipViewWithLeftX:(double)arg1 rightX:(double)arg2 ;
-(void)setShowingSelectedRegion:(BOOL)arg1 ;
-(void)setGraphImageSet:(StockGraphImageSet *)arg1 ;
-(StockGraphImageSet *)graphImageSet;
@end

