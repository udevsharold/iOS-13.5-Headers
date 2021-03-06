/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class NSArray;

@interface WFContentItemsViewController : UITableViewController {

	BOOL _allowsCoercion;
	NSArray* _contentItems;

}

@property (nonatomic,retain) NSArray * contentItems;              //@synthesize contentItems=_contentItems - In the implementation block
@property (assign,nonatomic) BOOL allowsCoercion;                 //@synthesize allowsCoercion=_allowsCoercion - In the implementation block
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)allowsCoercion;
-(void)setContentItems:(NSArray *)arg1 ;
-(NSArray *)contentItems;
-(void)setAllowsCoercion:(BOOL)arg1 ;
@end

