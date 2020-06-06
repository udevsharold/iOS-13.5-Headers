/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXGalleryComponentView.h>
#import <libobjc.A.dylib/SXMosaicGalleryLayouterDataSource.h>
#import <libobjc.A.dylib/SXFullscreenCanvasShowable.h>
#import <libobjc.A.dylib/SXImageViewDelegate.h>
#import <libobjc.A.dylib/SXFullscreenCaptionDataSource.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>

@protocol SXGalleryItemImageViewFactory;
@class SXFullscreenCanvasController, UIView, NSMutableArray, SXMediaViewEvent, SXMosaicGalleryLayouter, NSMutableSet, NSString;

@interface SXMosaicGalleryComponentView : SXGalleryComponentView <SXMosaicGalleryLayouterDataSource, SXFullscreenCanvasShowable, SXImageViewDelegate, SXFullscreenCaptionDataSource, SXViewportChangeListener> {

	BOOL _loadedAtleastOneImage;
	id<SXGalleryItemImageViewFactory> _imageViewFactory;
	SXFullscreenCanvasController* _fullScreenCanvasController;
	UIView* _galleryView;
	NSMutableArray* _imageViews;
	NSMutableArray* _visibleImageViews;
	SXMediaViewEvent* _mediaViewEvent;
	SXMosaicGalleryLayouter* _galleryLayouter;
	NSMutableSet* _exposedGalleryItems;

}

@property (nonatomic,readonly) id<SXGalleryItemImageViewFactory> imageViewFactory;                     //@synthesize imageViewFactory=_imageViewFactory - In the implementation block
@property (nonatomic,readonly) SXFullscreenCanvasController * fullScreenCanvasController;              //@synthesize fullScreenCanvasController=_fullScreenCanvasController - In the implementation block
@property (nonatomic,retain) UIView * galleryView;                                                     //@synthesize galleryView=_galleryView - In the implementation block
@property (nonatomic,readonly) NSMutableArray * imageViews;                                            //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,readonly) NSMutableArray * visibleImageViews;                                     //@synthesize visibleImageViews=_visibleImageViews - In the implementation block
@property (nonatomic,retain) SXMediaViewEvent * mediaViewEvent;                                        //@synthesize mediaViewEvent=_mediaViewEvent - In the implementation block
@property (assign,nonatomic) BOOL loadedAtleastOneImage;                                               //@synthesize loadedAtleastOneImage=_loadedAtleastOneImage - In the implementation block
@property (nonatomic,retain) SXMosaicGalleryLayouter * galleryLayouter;                                //@synthesize galleryLayouter=_galleryLayouter - In the implementation block
@property (nonatomic,retain) NSMutableSet * exposedGalleryItems;                                       //@synthesize exposedGalleryItems=_exposedGalleryItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)imageViews;
-(void)discardContents;
-(id)imageViewForItemAtIndex:(unsigned long long)arg1 ;
-(id)textStyleForIdentifier:(id)arg1 ;
-(id)componentTextStyleForIdentifier:(id)arg1 inheritingFromComponentTextStyle:(id)arg2 ;
-(void)imageView:(id)arg1 didLoadImage:(id)arg2 ofQuality:(int)arg3 ;
-(void)imageView:(id)arg1 didLoadAnimatedImage:(id)arg2 ;
-(id)imageViewForLocation:(CGPoint)arg1 ;
-(void)forceImageViewFullscreen:(id)arg1 ;
-(id)textResizerForCaption:(id)arg1 ;
-(id)textRulesForCaption:(id)arg1 ;
-(id)contentSizeCategoryForCaption:(id)arg1 ;
-(void)presentComponentWithChanges:(SCD_Struct_SX14)arg1 ;
-(void)renderContents;
-(id<SXGalleryItemImageViewFactory>)imageViewFactory;
-(UIView *)galleryView;
-(SXMosaicGalleryLayouter *)galleryLayouter;
-(void)renderContentsInDrawableRect;
-(NSMutableArray *)visibleImageViews;
-(void)visibleBoundsChanged;
-(NSMutableSet *)exposedGalleryItems;
-(void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2 ;
-(void)setGalleryLayouter:(SXMosaicGalleryLayouter *)arg1 ;
-(SXFullscreenCanvasController *)fullScreenCanvasController;
-(void)finishMediaViewEvent;
-(void)createMediaViewEventForGalleryItem:(id)arg1 ;
-(unsigned long long)numberOfItemsForGalleryLayouter:(id)arg1 ;
-(void)submitEvents;
-(SXMediaViewEvent *)mediaViewEvent;
-(void)setMediaViewEvent:(SXMediaViewEvent *)arg1 ;
-(void)willSubmitMediaExposureEvent:(id)arg1 ;
-(BOOL)allowHierarchyRemoval;
-(CGSize)galleryLayouter:(id)arg1 dimensionsForItemAtIndex:(unsigned long long)arg2 ;
-(id)galleryLayouter:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2 ;
-(BOOL)galleryLayouter:(id)arg1 viewIsCurrentlyFullscreenForItemAtIndex:(unsigned long long)arg2 ;
-(id)documentColumnLayoutForGalleryLayouter:(id)arg1 ;
-(unsigned long long)fullScreenCanvasController:(id)arg1 numberOfViewsForShowable:(id)arg2 ;
-(void)fullScreenCanvasController:(id)arg1 shouldAddGestureView:(id)arg2 forShowable:(id)arg3 ;
-(id)fullScreenCanvasController:(id)arg1 canvasViewControllerForShowable:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(unsigned long long)fullScreenCanvasController:(id)arg1 viewIndexForPoint:(CGPoint)arg2 inShowable:(id)arg3 ;
-(id)fullScreenCanvasController:(id)arg1 originalViewForShowable:(id)arg2 viewIndex:(unsigned long long)arg3 ;
-(CGRect)fullScreenCanvasController:(id)arg1 originalFrameForShowable:(id)arg2 onCanvasView:(id)arg3 viewIndex:(unsigned long long)arg4 ;
-(CGRect)fullScreenCanvasController:(id)arg1 fullScreenFrameForShowable:(id)arg2 viewIndex:(unsigned long long)arg3 withinRect:(CGRect)arg4 ;
-(void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 shouldTransferToOriginalViewWithIndex:(unsigned long long)arg3 ;
-(BOOL)requestInteractivityFocusForFullScreenCanvasController:(id)arg1 ;
-(id)fullScreenCanvasController:(id)arg1 captionForShowable:(id)arg2 viewIndex:(unsigned long long)arg3 ;
-(BOOL)fullScreenCanvasController:(id)arg1 willShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3 ;
-(void)fullScreenCanvasController:(id)arg1 didShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3 ;
-(void)fullScreenCanvasController:(id)arg1 willHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3 ;
-(void)fullScreenCanvasController:(id)arg1 didHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3 ;
-(void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 didShowViewWithIndex:(unsigned long long)arg3 ;
-(void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 willShowViewWithIndex:(unsigned long long)arg3 ;
-(void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 didHideViewWithIndex:(unsigned long long)arg3 ;
-(BOOL)fullScreenCanvasController:(id)arg1 showable:(id)arg2 gestureRecognizerShouldBegin:(id)arg3 ;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 mediaSharingPolicyProvider:(id)arg7 imageViewFactory:(id)arg8 canvasControllerFactory:(id)arg9 ;
-(unsigned long long)analyticsMediaType;
-(unsigned long long)analyticsGalleryType;
-(BOOL)shouldSubmitMediaExposureEventForExposedBounds:(CGRect)arg1 ;
-(void)setGalleryView:(UIView *)arg1 ;
-(BOOL)loadedAtleastOneImage;
-(void)setLoadedAtleastOneImage:(BOOL)arg1 ;
-(void)setExposedGalleryItems:(NSMutableSet *)arg1 ;
@end

