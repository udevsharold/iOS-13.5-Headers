/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class MPUArtworkView, UIImage, UIImageView, NSArray;

@interface VideosExtrasConstrainedArtworkContainerView : UIView {

	BOOL _shouldAutoresizeMaskLayerToFillBounds;
	BOOL _shouldBottomAlignArtwork;
	MPUArtworkView* _artworkView;
	UIImage* _overlayImage;
	double _overlayScale;
	UIImageView* _overlayView;
	NSArray* _overlaySizeConstraints;

}

@property (nonatomic,retain) MPUArtworkView * artworkView;                            //@synthesize artworkView=_artworkView - In the implementation block
@property (nonatomic,retain) UIImageView * overlayView;                               //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) NSArray * overlaySizeConstraints;                        //@synthesize overlaySizeConstraints=_overlaySizeConstraints - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoresizeMaskLayerToFillBounds;              //@synthesize shouldAutoresizeMaskLayerToFillBounds=_shouldAutoresizeMaskLayerToFillBounds - In the implementation block
@property (assign,nonatomic) BOOL shouldBottomAlignArtwork;                           //@synthesize shouldBottomAlignArtwork=_shouldBottomAlignArtwork - In the implementation block
@property (nonatomic,retain) UIImage * overlayImage;                                  //@synthesize overlayImage=_overlayImage - In the implementation block
@property (assign,nonatomic) double overlayScale;                                     //@synthesize overlayScale=_overlayScale - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setOverlayView:(UIImageView *)arg1 ;
-(UIImageView *)overlayView;
-(UIImage *)overlayImage;
-(void)setOverlayImage:(UIImage *)arg1 ;
-(MPUArtworkView *)artworkView;
-(void)setArtworkView:(MPUArtworkView *)arg1 ;
-(BOOL)shouldBottomAlignArtwork;
-(BOOL)shouldAutoresizeMaskLayerToFillBounds;
-(void)setOverlayScale:(double)arg1 ;
-(void)setShouldAutoresizeMaskLayerToFillBounds:(BOOL)arg1 ;
-(void)setShouldBottomAlignArtwork:(BOOL)arg1 ;
-(double)overlayScale;
-(NSArray *)overlaySizeConstraints;
-(void)setOverlaySizeConstraints:(NSArray *)arg1 ;
@end

