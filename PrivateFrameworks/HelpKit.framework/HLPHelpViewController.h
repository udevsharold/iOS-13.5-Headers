/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HLPHelpTableOfContentViewControllerDelegate.h>
#import <libobjc.A.dylib/HLPHelpTopicViewControllerDelegate.h>
#import <libobjc.A.dylib/HLPReachabilityManagerDelegate.h>
#import <libobjc.A.dylib/HLPHelpLoadingViewDelegate.h>

@protocol HLPHelpViewControllerDelegate;
@class NSDictionary, NSString, UIBarButtonItem, NSLayoutConstraint, UIView, HLPHelpUsageController, HLPHelpTopicViewController, NSURL, NSArray, NSMutableDictionary, HLPHelpLocaleController, HLPHelpBookController, HLPReachabilityManager, HLPHelpLoadingView, HLPHelpTableOfContentViewController;

@interface HLPHelpViewController : UIViewController <HLPHelpTableOfContentViewControllerDelegate, HLPHelpTopicViewControllerDelegate, HLPReachabilityManagerDelegate, HLPHelpLoadingViewDelegate> {

	BOOL _fullBookView;
	BOOL _showingHelpTopic;
	BOOL _shouldDismissWelcomeTopic;
	NSDictionary* _context;
	NSString* _helpBookBasePath;
	NSString* _helpbookVersion;
	UIBarButtonItem* _doneBarButtonItem;
	NSLayoutConstraint* _loadingViewTopConstraint;
	UIView* _fullBookViewSeparator;
	HLPHelpUsageController* _usageController;
	HLPHelpTopicViewController* _topicViewController;
	BOOL _hideDoneButton;
	BOOL _displayHelpTopicsOnly;
	BOOL _showTopicNameAsTitle;
	BOOL _showTopicViewOnLoad;
	id<HLPHelpViewControllerDelegate> _delegate;
	NSString* _identifier;
	NSString* _version;
	NSString* _subpath;
	NSURL* _localHelpBookFileURL;
	NSString* _selectedHelpTopicID;
	NSArray* _preferredLanguagesOverride;
	NSString* _selectedHelpTopicName;
	NSMutableDictionary* _localHelpBookNameIDMap;
	NSURL* _helpBookURL;
	HLPHelpLocaleController* _localeListController;
	HLPHelpBookController* _helpBookController;
	HLPReachabilityManager* _reachabilityManager;
	HLPHelpLoadingView* _loadingView;
	HLPHelpTableOfContentViewController* _tableOfContentViewController;

}

@property (nonatomic,retain) NSMutableDictionary * localHelpBookNameIDMap;                                    //@synthesize localHelpBookNameIDMap=_localHelpBookNameIDMap - In the implementation block
@property (nonatomic,retain) NSURL * helpBookURL;                                                             //@synthesize helpBookURL=_helpBookURL - In the implementation block
@property (nonatomic,retain) HLPHelpLocaleController * localeListController;                                  //@synthesize localeListController=_localeListController - In the implementation block
@property (nonatomic,retain) HLPHelpBookController * helpBookController;                                      //@synthesize helpBookController=_helpBookController - In the implementation block
@property (nonatomic,retain) HLPReachabilityManager * reachabilityManager;                                    //@synthesize reachabilityManager=_reachabilityManager - In the implementation block
@property (nonatomic,retain) HLPHelpLoadingView * loadingView;                                                //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) HLPHelpTableOfContentViewController * tableOfContentViewController;              //@synthesize tableOfContentViewController=_tableOfContentViewController - In the implementation block
@property (assign,nonatomic) BOOL hideDoneButton;                                                             //@synthesize hideDoneButton=_hideDoneButton - In the implementation block
@property (assign,nonatomic) BOOL displayHelpTopicsOnly;                                                      //@synthesize displayHelpTopicsOnly=_displayHelpTopicsOnly - In the implementation block
@property (assign,nonatomic) BOOL showTopicNameAsTitle;                                                       //@synthesize showTopicNameAsTitle=_showTopicNameAsTitle - In the implementation block
@property (assign,nonatomic) BOOL showTopicViewOnLoad;                                                        //@synthesize showTopicViewOnLoad=_showTopicViewOnLoad - In the implementation block
@property (assign,nonatomic,__weak) id<HLPHelpViewControllerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * version;                                                                //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSString * subpath;                                                                //@synthesize subpath=_subpath - In the implementation block
@property (nonatomic,copy) NSURL * localHelpBookFileURL;                                                      //@synthesize localHelpBookFileURL=_localHelpBookFileURL - In the implementation block
@property (nonatomic,copy) NSString * selectedHelpTopicID;                                                    //@synthesize selectedHelpTopicID=_selectedHelpTopicID - In the implementation block
@property (nonatomic,copy) NSArray * preferredLanguagesOverride;                                              //@synthesize preferredLanguagesOverride=_preferredLanguagesOverride - In the implementation block
@property (nonatomic,copy) NSString * selectedHelpTopicName;                                                  //@synthesize selectedHelpTopicName=_selectedHelpTopicName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)helpViewControllerWithIdentifier:(id)arg1 version:(id)arg2 ;
+(id)helpViewControllerWithTitle:(id)arg1 identifier:(id)arg2 version:(id)arg3 ;
+(id)helpViewControllerWithTitle:(id)arg1 identifier:(id)arg2 version:(id)arg3 subpath:(id)arg4 ;
+(void)clearCacheControllers;
+(id)helpViewController;
+(id)helpViewControllerWithLocalHelpBookFileURL:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_setContext:(id)arg1 ;
-(id<HLPHelpViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HLPHelpViewControllerDelegate>)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(id)deviceFamily;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dismiss;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateDoneButton;
-(void)setLoadingView:(HLPHelpLoadingView *)arg1 ;
-(HLPHelpLoadingView *)loadingView;
-(void)setShowTopicViewOnLoad:(BOOL)arg1 ;
-(void)setDisplayHelpTopicsOnly:(BOOL)arg1 ;
-(void)setSelectedHelpTopicID:(NSString *)arg1 ;
-(HLPReachabilityManager *)reachabilityManager;
-(void)setReachabilityManager:(HLPReachabilityManager *)arg1 ;
-(BOOL)hideDoneButton;
-(id)currentHelpTopicItemForTableOfContentViewController:(id)arg1 ;
-(NSURL *)helpBookURL;
-(void)setHelpBookController:(HLPHelpBookController *)arg1 ;
-(void)tableOfContentViewControllerShowHelpBookInfo:(id)arg1 ;
-(void)tableOfContentViewController:(id)arg1 showHelpTopicItem:(id)arg2 ;
-(HLPHelpBookController *)helpBookController;
-(void)setHelpBookURL:(NSURL *)arg1 ;
-(void)setLocalHelpBookFileURL:(NSURL *)arg1 ;
-(void)setSubpath:(NSString *)arg1 ;
-(void)updateDarkMode;
-(BOOL)displayHelpTopicsOnly;
-(void)setupFullBookView;
-(void)showHelpTopicItem:(id)arg1 anchor:(id)arg2 animate:(BOOL)arg3 ;
-(void)setupTableContentViewController;
-(void)updateTOCButton;
-(void)updateChildViewConstraints;
-(void)loadHelpBook;
-(void)setupTopicViewController;
-(void)showTopicView;
-(void)setShowTopicNameAsTitle:(BOOL)arg1 ;
-(void)loadFromStaticServer;
-(void)updateLastLoadVersion;
-(void)removeDDMLoadFailVersion;
-(void)updateCacheControllerToLanguageCode:(id)arg1 ;
-(void)displayHelpBookWithLocale:(id)arg1 ;
-(NSArray *)preferredLanguagesOverride;
-(void)setPreferredLanguagesOverride:(NSArray *)arg1 ;
-(HLPHelpLocaleController *)localeListController;
-(void)showMessageForError:(id)arg1 ;
-(void)setHideDoneButton:(BOOL)arg1 ;
-(NSURL *)localHelpBookFileURL;
-(NSMutableDictionary *)localHelpBookNameIDMap;
-(void)popWelcomeTopicView;
-(void)helpTopicViewControllerTableOfContentButtonTapped:(id)arg1 ;
-(void)showHelpBookInfo:(id)arg1 ;
-(void)helpTopicViewControllerShowHelpBookInfo:(id)arg1 ;
-(void)helpTopicViewControllerDoneButtonTapped:(id)arg1 ;
-(void)helpTopicViewController:(id)arg1 topicLoaded:(id)arg2 ;
-(void)helpTopicViewController:(id)arg1 failToLoadWithError:(id)arg2 ;
-(void)helpTopicViewControllerCurrentTopicIsPassionPoint:(id)arg1 ;
-(void)helpTopicViewController:(id)arg1 selectedHelpTopicItem:(id)arg2 ;
-(void)reachabilityManagerConnectionStatusChanged:(id)arg1 connected:(BOOL)arg2 ;
-(void)_setFullBookView:(BOOL)arg1 ;
-(void)loadHelpTopicID:(id)arg1 ;
-(id)topicIDForTopicName:(id)arg1 locale:(id)arg2 ;
-(BOOL)showTopicNameAsTitle;
-(BOOL)showTopicViewOnLoad;
-(NSString *)subpath;
-(NSString *)selectedHelpTopicID;
-(NSString *)selectedHelpTopicName;
-(void)setSelectedHelpTopicName:(NSString *)arg1 ;
-(void)setLocalHelpBookNameIDMap:(NSMutableDictionary *)arg1 ;
-(void)setLocaleListController:(HLPHelpLocaleController *)arg1 ;
-(HLPHelpTableOfContentViewController *)tableOfContentViewController;
-(void)setTableOfContentViewController:(HLPHelpTableOfContentViewController *)arg1 ;
@end

