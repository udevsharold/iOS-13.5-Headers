/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIAppNavigationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class UITapGestureRecognizer, VUIDocumentUIConfiguration, NSString;

@interface VUINavigationController : VUIAppNavigationController <UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate> {

	UITapGestureRecognizer* _gesture;
	VUIDocumentUIConfiguration* _configuration;

}

@property (nonatomic,retain) UITapGestureRecognizer * gesture;                        //@synthesize gesture=_gesture - In the implementation block
@property (nonatomic,retain) VUIDocumentUIConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setConfiguration:(VUIDocumentUIConfiguration *)arg1 ;
-(VUIDocumentUIConfiguration *)configuration;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)setGesture:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)gesture;
@end

