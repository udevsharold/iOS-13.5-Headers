/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/EKEventAttachmentCellControllerDelegate.h>

@protocol EKEventAttachmentEditViewControllerDelegate;
@class UITableView, NSArray, NSString;

@interface EKEventAttachmentEditViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate, EKEventAttachmentCellControllerDelegate> {

	UITableView* _table;
	NSArray* _cellControllers;
	id<EKEventAttachmentEditViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<EKEventAttachmentEditViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<EKEventAttachmentEditViewControllerDelegate>)delegate;
-(void)setDelegate:(id<EKEventAttachmentEditViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(id)parentViewControllerForAttachmentCellController:(id)arg1 ;
-(id)owningEventForAttachmentCellController:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 attachments:(id)arg2 sourceIsManaged:(BOOL)arg3 ;
@end

