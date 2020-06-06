/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNContactContentViewControllerDelegate.h>

@class CNAvatarViewController, CNStarkNameViewController, CNStarkActionsController, CNContact, NSArray, NSString;

@interface CNStarkCardViewController : UIViewController <CNContactContentViewControllerDelegate> {

	CNAvatarViewController* _avatarViewController;
	CNStarkNameViewController* _nameViewController;
	CNStarkActionsController* _actionsController;
	CNContact* _contact;
	NSArray* _displayedContactProperties;
	NSArray* _layoutConstraints;

}

@property (nonatomic,readonly) CNAvatarViewController * avatarViewController;               //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (nonatomic,readonly) CNStarkNameViewController * nameViewController;              //@synthesize nameViewController=_nameViewController - In the implementation block
@property (nonatomic,readonly) CNStarkActionsController * actionsController;                //@synthesize actionsController=_actionsController - In the implementation block
@property (nonatomic,readonly) CNContact * contact;                                         //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSArray * displayedContactProperties;                        //@synthesize displayedContactProperties=_displayedContactProperties - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;                                   //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
+(id)starkCardControllerForCalendarEventWithContact:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(CNContact *)contact;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)updateViewConstraints;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4 ;
-(CNAvatarViewController *)avatarViewController;
-(id)initWithContact:(id)arg1 displayedContactProperties:(id)arg2 ;
-(void)setupViewControllers;
-(void)resetLayoutConstraints;
-(void)setupLayoutConstraints;
-(void)updateViewControllers;
-(void)updateNavigationItems;
-(void)showMore:(id)arg1 ;
-(CNStarkNameViewController *)nameViewController;
-(CNStarkActionsController *)actionsController;
-(NSArray *)displayedContactProperties;
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
@end

