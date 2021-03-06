/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class SKUIMediaComponent, SKUIEmbeddedMediaView;

@interface SKUIGalleryPaneViewController : UIViewController {

	SKUIMediaComponent* _component;
	long long _galleryIndex;

}

@property (nonatomic,readonly) SKUIMediaComponent * component;                 //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) long long galleryIndex;                         //@synthesize galleryIndex=_galleryIndex - In the implementation block
@property (nonatomic,readonly) SKUIEmbeddedMediaView * mediaView; 
-(SKUIEmbeddedMediaView *)mediaView;
-(SKUIMediaComponent *)component;
-(long long)galleryIndex;
-(id)initWithMediaComponent:(id)arg1 galleryIndex:(long long)arg2 ;
@end

