/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class UIPrintPanelViewController;

@interface UIPrintPaperViewController : UITableViewController {

	UIPrintPanelViewController* _printPanelViewController;

}
-(void)loadView;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)initWithPrintPanelViewController:(id)arg1 ;
-(void)adjustPopoverSize;
-(void)updateScaleUp:(id)arg1 ;
@end

