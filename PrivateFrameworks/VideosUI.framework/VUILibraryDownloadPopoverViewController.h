/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol VUILibraryDownloadPopoverViewControllerDelegate;
@class VUILibraryListItemView, NSString;

@interface VUILibraryDownloadPopoverViewController : UIViewController <UIGestureRecognizerDelegate> {

	id<VUILibraryDownloadPopoverViewControllerDelegate> _delegate;
	VUILibraryListItemView* _listView;

}

@property (nonatomic,retain) VUILibraryListItemView * listView;                                                //@synthesize listView=_listView - In the implementation block
@property (assign,nonatomic,__weak) id<VUILibraryDownloadPopoverViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<VUILibraryDownloadPopoverViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VUILibraryDownloadPopoverViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(VUILibraryListItemView *)listView;
-(void)setListView:(VUILibraryListItemView *)arg1 ;
-(void)popoverPressed:(id)arg1 ;
@end

