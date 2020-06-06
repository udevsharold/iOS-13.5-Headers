/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivityViewController.h>

@protocol DOCServicePopoverTrackerProtocol;
@class UIBarButtonItem;

@interface DOCDocBrowserVC_UIActivityViewController : UIActivityViewController {

	id<DOCServicePopoverTrackerProtocol> _popoverTracker;
	UIBarButtonItem* _barButtonItem;

}

@property (retain) id<DOCServicePopoverTrackerProtocol> popoverTracker;              //@synthesize popoverTracker=_popoverTracker - In the implementation block
@property (__weak) UIBarButtonItem * barButtonItem;                                  //@synthesize barButtonItem=_barButtonItem - In the implementation block
-(UIBarButtonItem *)barButtonItem;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(id<DOCServicePopoverTrackerProtocol>)popoverTracker;
-(void)setPopoverTracker:(id<DOCServicePopoverTrackerProtocol>)arg1 ;
@end

