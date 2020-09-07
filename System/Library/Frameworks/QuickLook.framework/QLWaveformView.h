/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PHVideoScrubberFilmstripView.h>

@class AVAsset, UIImage, AVVideoComposition, UIView, UIImageView, NSString;

@interface QLWaveformView : UIView <PHVideoScrubberFilmstripView> {

	CGSize _waveSize;
	UIView* _lineView;
	UIImage* _waveImage;
	UIImageView* _waveView;
	AVAsset* _asset;
	UIImage* placeholderImage;
	CGRect visibleRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) AVAsset * asset;                                    //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage; 
@property (assign,nonatomic) CGRect visibleRect; 
@property (nonatomic,copy) AVVideoComposition * videoComposition; 
-(AVAsset *)asset;
-(void)setAsset:(AVAsset *)arg1 ;
-(CGRect)visibleRect;
-(void)layoutSubviews;
-(void)updateImage;
-(void)setVisibleRect:(CGRect)arg1 ;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(void)_updateWithWaveformImage:(id)arg1 ;
-(void)_expandWaveform;
@end
