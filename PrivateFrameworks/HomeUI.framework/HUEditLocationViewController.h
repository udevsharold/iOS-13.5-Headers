/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUItemTableViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/HUWallpaperPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/HUWallpaperEditingViewControllerDelegate.h>
#import <libobjc.A.dylib/HUAddPeopleViewControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/HFHomeManagerObserver.h>
#import <libobjc.A.dylib/HUWallpaperThumbnailCellDelegate.h>
#import <libobjc.A.dylib/HUWallpaperPickerInlineViewControllerDelegate.h>
#import <libobjc.A.dylib/HUPresentationDelegateHost.h>

@protocol HUPresentationDelegate, HUEditLocationViewControllerAddLocationDelegate;
@class HUHomeUsersCollectionViewController, HFHomeBuilder, HUUserNotificationTopicListModuleController, HUEditLocationItemManager, HUEditableTextCell, NSString, HUEditableTextViewCell, HUWallpaperPickerInlineViewController, UIBarButtonItem;

@interface HUEditLocationViewController : HUItemTableViewController <UITextFieldDelegate, UITextViewDelegate, HUWallpaperPickerViewControllerDelegate, HUWallpaperEditingViewControllerDelegate, HUAddPeopleViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, HFHomeManagerObserver, HUWallpaperThumbnailCellDelegate, HUWallpaperPickerInlineViewControllerDelegate, HUPresentationDelegateHost> {

	id<HUPresentationDelegate> _presentationDelegate;
	HUHomeUsersCollectionViewController* _usersViewController;
	HFHomeBuilder* _homeBuilder;
	id<HUEditLocationViewControllerAddLocationDelegate> _addLocationDelegate;
	unsigned long long _context;
	HUUserNotificationTopicListModuleController* _notificationTopicModuleController;
	HUEditLocationItemManager* _homeItemManager;
	HUEditableTextCell* _nameCell;
	NSString* _editedName;
	HUEditableTextViewCell* _detailNotesCell;
	NSString* _editedNotes;
	HUWallpaperPickerInlineViewController* _wallpaperPickerViewController;
	UIBarButtonItem* _savedButtonBarItem;

}

@property (assign,nonatomic,__weak) id<HUEditLocationViewControllerAddLocationDelegate> addLocationDelegate;               //@synthesize addLocationDelegate=_addLocationDelegate - In the implementation block
@property (nonatomic,retain) HUUserNotificationTopicListModuleController * notificationTopicModuleController;              //@synthesize notificationTopicModuleController=_notificationTopicModuleController - In the implementation block
@property (assign,nonatomic,__weak) HUEditLocationItemManager * homeItemManager;                                           //@synthesize homeItemManager=_homeItemManager - In the implementation block
@property (assign,nonatomic,__weak) HUEditableTextCell * nameCell;                                                         //@synthesize nameCell=_nameCell - In the implementation block
@property (nonatomic,retain) NSString * editedName;                                                                        //@synthesize editedName=_editedName - In the implementation block
@property (assign,nonatomic,__weak) HUEditableTextViewCell * detailNotesCell;                                              //@synthesize detailNotesCell=_detailNotesCell - In the implementation block
@property (nonatomic,retain) NSString * editedNotes;                                                                       //@synthesize editedNotes=_editedNotes - In the implementation block
@property (nonatomic,readonly) HUHomeUsersCollectionViewController * usersViewController;                                  //@synthesize usersViewController=_usersViewController - In the implementation block
@property (nonatomic,readonly) HUWallpaperPickerInlineViewController * wallpaperPickerViewController;                      //@synthesize wallpaperPickerViewController=_wallpaperPickerViewController - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * savedButtonBarItem;                                                         //@synthesize savedButtonBarItem=_savedButtonBarItem - In the implementation block
@property (nonatomic,readonly) HFHomeBuilder * homeBuilder;                                                                //@synthesize homeBuilder=_homeBuilder - In the implementation block
@property (nonatomic,readonly) unsigned long long context;                                                                 //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUPresentationDelegate> presentationDelegate;                                       //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
-(unsigned long long)context;
-(void)homeManager:(id)arg1 didRemoveHome:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)setPresentationDelegate:(id<HUPresentationDelegate>)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(id<HUPresentationDelegate>)presentationDelegate;
-(void)doneButtonPressed:(id)arg1 ;
-(HUEditableTextCell *)nameCell;
-(void)setNameCell:(HUEditableTextCell *)arg1 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(BOOL)shouldManageTextFieldForItem:(id)arg1 ;
-(id)currentTextForTextField:(id)arg1 item:(id)arg2 ;
-(void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(id)buildItemModuleControllerForModule:(id)arg1 ;
-(BOOL)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2 ;
-(id)childViewControllersToPreload;
-(void)wallpaperEditing:(id)arg1 didFinishWithWallpaper:(id)arg2 image:(id)arg3 ;
-(void)wallpaperEditingDidCancel:(id)arg1 ;
-(void)wallpaperPickerRequestOpenWallpaperEditor:(id)arg1 ;
-(void)wallpaperPicker:(id)arg1 didSelectWallpaper:(id)arg2 withImage:(id)arg3 ;
-(void)wallpaperPicker:(id)arg1 didReceiveDroppedImage:(id)arg2 ;
-(id)showNotificationSettingsForHomeKitObject:(id)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)automaticDisablingReasonsForItem:(id)arg1 ;
-(void)wallpaperPickerDidFinish:(id)arg1 wallpaper:(id)arg2 image:(id)arg3 ;
-(void)wallpaperPickerDidCancel:(id)arg1 ;
-(void)addPeopleViewControllerDidCancel:(id)arg1 ;
-(HFHomeBuilder *)homeBuilder;
-(id)initWithHomeBuilder:(id)arg1 presentationDelegate:(id)arg2 addLocationDelegate:(id)arg3 context:(unsigned long long)arg4 ;
-(HUEditLocationItemManager *)homeItemManager;
-(id<HUEditLocationViewControllerAddLocationDelegate>)addLocationDelegate;
-(void)addButtonPressed:(id)arg1 ;
-(HUUserNotificationTopicListModuleController *)notificationTopicModuleController;
-(NSString *)editedName;
-(NSString *)editedNotes;
-(void)setSavedButtonBarItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)savedButtonBarItem;
-(void)setNotificationTopicModuleController:(HUUserNotificationTopicListModuleController *)arg1 ;
-(HUHomeUsersCollectionViewController *)usersViewController;
-(void)setDetailNotesCell:(HUEditableTextViewCell *)arg1 ;
-(HUEditableTextViewCell *)detailNotesCell;
-(HUWallpaperPickerInlineViewController *)wallpaperPickerViewController;
-(void)setEditedName:(NSString *)arg1 ;
-(void)setEditedNotes:(NSString *)arg1 ;
-(void)updateWallpaper:(id)arg1 image:(id)arg2 ;
-(void)wallpaperThumbnailCell:(id)arg1 didReceiveDroppedImage:(id)arg2 ;
-(id)initWithHomeBuilder:(id)arg1 presentationDelegate:(id)arg2 addLocationDelegate:(id)arg3 ;
-(void)scrollToNotificationTopicsAnimated:(BOOL)arg1 ;
-(id)presentNetworkSettings:(BOOL)arg1 ;
-(void)setAddLocationDelegate:(id<HUEditLocationViewControllerAddLocationDelegate>)arg1 ;
-(void)setHomeItemManager:(HUEditLocationItemManager *)arg1 ;
@end

