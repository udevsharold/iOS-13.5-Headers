/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol SKUIProfileImagePickerDelegate;
@class SKUIClientContext, UIView, UILabel, UIImagePickerController, UIScrollView, NSString;

@interface SKUIProfileImagePicker : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {

	SKUIClientContext* _clientContext;
	UIView* _contentView;
	UILabel* _descriptionLabel;
	BOOL _firstApperance;
	UIImagePickerController* _imagePicker;
	UIScrollView* _scrollView;
	UILabel* _titleLabel;
	id<SKUIProfileImagePickerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKUIProfileImagePickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_fixCropRect:(id)arg1 forOriginalImage:(id)arg2 ;
-(id<SKUIProfileImagePickerDelegate>)delegate;
-(void)setDelegate:(id<SKUIProfileImagePickerDelegate>)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)_didCancel;
-(id)initWithClientContext:(id)arg1 ;
-(void)_showImagePicker;
-(void)_showImageSourcePicker;
-(void)_presentImagePickerWithSourceType:(long long)arg1 ;
@end

