/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <ManagedConfigurationUI/MCURLListenerListController.h>
#import <UIKit/UITableViewDelegate.h>

@class NSMutableDictionary, UIImage, NSSManager, NSString;

@interface MCProfileListController : MCURLListenerListController <UITableViewDelegate> {

	BOOL _hasFetchedProfilesInfo;
	BOOL _hasFailedFetchingProfilesInfo;
	int _provisioningProfileInstalledToken;
	int _provisioningProfileRemovedToken;
	NSMutableDictionary* _dataDictionary;
	UIImage* _profileListIcon;
	NSSManager* _nssManager;

}

@property (nonatomic,retain) NSMutableDictionary * dataDictionary;               //@synthesize dataDictionary=_dataDictionary - In the implementation block
@property (nonatomic,retain) UIImage * profileListIcon;                          //@synthesize profileListIcon=_profileListIcon - In the implementation block
@property (nonatomic,retain) NSSManager * nssManager;                            //@synthesize nssManager=_nssManager - In the implementation block
@property (assign,nonatomic) BOOL hasFetchedProfilesInfo;                        //@synthesize hasFetchedProfilesInfo=_hasFetchedProfilesInfo - In the implementation block
@property (assign,nonatomic) BOOL hasFailedFetchingProfilesInfo;                 //@synthesize hasFailedFetchingProfilesInfo=_hasFailedFetchingProfilesInfo - In the implementation block
@property (assign,nonatomic) int provisioningProfileInstalledToken;              //@synthesize provisioningProfileInstalledToken=_provisioningProfileInstalledToken - In the implementation block
@property (assign,nonatomic) int provisioningProfileRemovedToken;                //@synthesize provisioningProfileRemovedToken=_provisioningProfileRemovedToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)specifiersForBlockedApps:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(NSMutableDictionary *)dataDictionary;
-(void)setDataDictionary:(NSMutableDictionary *)arg1 ;
-(int)provisioningProfileInstalledToken;
-(void)setProvisioningProfileInstalledToken:(int)arg1 ;
-(int)provisioningProfileRemovedToken;
-(void)setProvisioningProfileRemovedToken:(int)arg1 ;
-(void)_showProgressIndicator;
-(NSSManager *)nssManager;
-(void)setNssManager:(NSSManager *)arg1 ;
-(void)fetchRemoteProfileList;
-(void)_profileListChanged:(id)arg1 ;
-(void)_installedApplicationsChanged:(id)arg1 ;
-(void)_appSignerApplicationsChanged:(id)arg1 ;
-(long long)_profilesCount;
-(UIImage *)profileListIcon;
-(id)_specifiersForDataDictionary;
-(void)_fetchPhoneProfileList;
-(int)_resolveIndexPathForSection:(id)arg1 ;
-(BOOL)_isSectionPopulated:(int)arg1 ;
-(id)_dataForIndexPath:(id)arg1 ;
-(void)_handleProfileCellSelectionAtIndexPath:(id)arg1 ;
-(BOOL)_showProfileDetailPageForUserEnrollmentProfile:(id)arg1 ;
-(void)_hideProgressIndicatorAndShowBackButton:(BOOL)arg1 ;
-(void)handleProfilesInfoResponse:(id)arg1 error:(id)arg2 ;
-(void)_blockedAppsChanged:(id)arg1 ;
-(BOOL)_isUIProfileInstallationRestricted;
-(void)setProfileListIcon:(UIImage *)arg1 ;
-(BOOL)hasFetchedProfilesInfo;
-(void)setHasFetchedProfilesInfo:(BOOL)arg1 ;
-(BOOL)hasFailedFetchingProfilesInfo;
-(void)setHasFailedFetchingProfilesInfo:(BOOL)arg1 ;
@end

