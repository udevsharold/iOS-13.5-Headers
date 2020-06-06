/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/VUIProductUberBackgroundInterface.h>

@class IKViewElement, VUIRoomBannerView, NSString;

@interface VUIRoomBannerViewController : UIViewController <VUIProductUberBackgroundInterface> {

	IKViewElement* _viewElement;
	VUIRoomBannerView* _bannerView;

}

@property (nonatomic,retain) IKViewElement * viewElement;                    //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUIRoomBannerView * bannerView;                 //@synthesize bannerView=_bannerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isUberLayoutActive; 
@property (nonatomic,readonly) BOOL disableGradientBelowNavBar; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double topThreshold; 
-(CGSize)size;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(VUIRoomBannerView *)bannerView;
-(void)setBannerView:(VUIRoomBannerView *)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(BOOL)isUberLayoutActive;
-(void)setUberImageOffset:(double)arg1 ;
-(void)setBannerOpacity:(double)arg1 ;
-(BOOL)disableGradientBelowNavBar;
-(double)topThreshold;
-(void)setWhiteBannerOpacity:(double)arg1 ;
@end

