/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/_SFPasswordTableViewController.h>
#import <libobjc.A.dylib/SFPasswordDetailViewControllerDelegate.h>

@protocol _SFPasswordAuditingViewControllerDelegate;
@class WBSAutoFillQuirksManager, WBSSavedPasswordAuditor, WBSSavedPasswordStore, NSArray, WBSPasswordEvaluator, NSString;

@interface _SFPasswordAuditingViewController : _SFPasswordTableViewController <SFPasswordDetailViewControllerDelegate> {

	WBSAutoFillQuirksManager* _autoFillQuirksManager;
	WBSSavedPasswordAuditor* _savedPasswordAuditor;
	WBSSavedPasswordStore* _savedPasswordStore;
	NSArray* _flaggedPasswordCellData;
	WBSPasswordEvaluator* _passwordEvaluator;
	id<_SFPasswordAuditingViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SFPasswordAuditingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_SFPasswordAuditingViewControllerDelegate>)delegate;
-(void)setDelegate:(id<_SFPasswordAuditingViewControllerDelegate>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithSiteMetadataManager:(id)arg1 autoFillQuirksManager:(id)arg2 ;
-(void)passwordDetailViewControllerDidUpdate:(id)arg1 ;
-(void)_reloadSavedPasswords;
-(id)_warningStringForPasswordCellData:(id)arg1 ;
@end

