/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/SGSuggestionViewControllerPresenter.h>

@class SGSuggestionStore, NSString;

@interface SGSuggestionTableViewController : UITableViewController <SGSuggestionViewControllerPresenter> {

	SGSuggestionStore* _suggestionStore;

}

@property (nonatomic,retain) SGSuggestionStore * suggestionStore;              //@synthesize suggestionStore=_suggestionStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)presentViewController:(id)arg1 ;
-(void)dismissViewController:(id)arg1 ;
-(void)updatePrefferedSize;
-(void)listDidChangeNotification:(id)arg1 ;
-(SGSuggestionStore *)suggestionStore;
-(void)setSuggestionStore:(SGSuggestionStore *)arg1 ;
@end

