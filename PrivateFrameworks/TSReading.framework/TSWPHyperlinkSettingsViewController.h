/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <TSReading/TSKKeyboardObserver.h>

@class TSWPHyperlinkField, UITableViewCell, NSString;

@interface TSWPHyperlinkSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, TSKKeyboardObserver> {

	TSWPHyperlinkField* _hyperlink;
	UITableViewCell* _editingCell;
	BOOL _readOnly;

}

@property (nonatomic,retain) TSWPHyperlinkField * hyperlink;              //@synthesize hyperlink=_hyperlink - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)keyboardDidShowOrDock:(id)arg1 ;
-(void)keyboardDidHideOrUndock:(id)arg1 ;
-(void)setHyperlink:(TSWPHyperlinkField *)arg1 ;
-(TSWPHyperlinkField *)hyperlink;
-(id)initWithHyperlink:(id)arg1 readOnly:(BOOL)arg2 ;
@end

