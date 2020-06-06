/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIImageView.h>

@protocol ICDocCamZoomablePageContentViewDelegate;
@interface ICDocCamZoomablePageContentImageView : UIImageView {

	id<ICDocCamZoomablePageContentViewDelegate> _pageContentViewDelegate;

}

@property (assign,nonatomic,__weak) id<ICDocCamZoomablePageContentViewDelegate> pageContentViewDelegate;              //@synthesize pageContentViewDelegate=_pageContentViewDelegate - In the implementation block
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityScrollAncestorForSelector:(SEL)arg1 ;
-(void)setPageContentViewDelegate:(id<ICDocCamZoomablePageContentViewDelegate>)arg1 ;
-(id<ICDocCamZoomablePageContentViewDelegate>)pageContentViewDelegate;
@end

