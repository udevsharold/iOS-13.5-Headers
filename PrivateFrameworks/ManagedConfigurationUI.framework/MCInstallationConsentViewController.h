/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@protocol MCInstallationConsentDelegate;
@class MCProfile, NSString;

@interface MCInstallationConsentViewController : UITableViewController <PSStateRestoration> {

	BOOL _showInstall;
	MCProfile* _profile;
	id<MCInstallationConsentDelegate> _consentDelegate;

}

@property (nonatomic,retain) MCProfile * profile;                                                   //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) id<MCInstallationConsentDelegate> consentDelegate;              //@synthesize consentDelegate=_consentDelegate - In the implementation block
@property (assign,nonatomic) BOOL showInstall;                                                      //@synthesize showInstall=_showInstall - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MCProfile *)profile;
-(void)setProfile:(MCProfile *)arg1 ;
-(void)_setup;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(BOOL)canBeShownFromSuspendedState;
-(void)_installProfile;
-(void)setConsentDelegate:(id<MCInstallationConsentDelegate>)arg1 ;
-(void)setShowInstall:(BOOL)arg1 ;
-(void)_cancelInstallProfile;
-(id<MCInstallationConsentDelegate>)consentDelegate;
-(BOOL)showInstall;
@end

