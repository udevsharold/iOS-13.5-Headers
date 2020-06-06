/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemModule.h>
#import <libobjc.A.dylib/HUCameraSettingsModule.h>

@class NSSet, HUCameraSmartDetectionSettingsModule, HUCameraCloudStorageSettingsModule, HFStaticItem, HFStaticItemProvider, NSString, UIViewController;

@interface HUCameraRecordingOptionsModule : HFItemModule <HUCameraSettingsModule> {

	NSSet* _itemProviders;
	HUCameraSmartDetectionSettingsModule* _smartDetectionModule;
	HUCameraCloudStorageSettingsModule* _cloudStorageModule;
	HFStaticItem* _recordAudioItem;
	NSSet* _cameraProfiles;
	HFStaticItemProvider* _recordAudioItemProvider;

}

@property (nonatomic,readonly) NSSet * cameraProfiles;                                                   //@synthesize cameraProfiles=_cameraProfiles - In the implementation block
@property (nonatomic,retain) NSSet * itemProviders;                                                      //@synthesize itemProviders=_itemProviders - In the implementation block
@property (nonatomic,retain) HFStaticItemProvider * recordAudioItemProvider;                             //@synthesize recordAudioItemProvider=_recordAudioItemProvider - In the implementation block
@property (nonatomic,retain) HFStaticItem * recordAudioItem;                                             //@synthesize recordAudioItem=_recordAudioItem - In the implementation block
@property (nonatomic,readonly) HUCameraSmartDetectionSettingsModule * smartDetectionModule;              //@synthesize smartDetectionModule=_smartDetectionModule - In the implementation block
@property (nonatomic,readonly) HUCameraCloudStorageSettingsModule * cloudStorageModule;                  //@synthesize cloudStorageModule=_cloudStorageModule - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long displayStyle; 
@property (nonatomic,retain) UIViewController * presentingViewController; 
-(NSSet *)itemProviders;
-(void)setItemProviders:(NSSet *)arg1 ;
-(NSSet *)cameraProfiles;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)didSelectItem:(id)arg1 ;
-(void)_buildItemProviders;
-(BOOL)isItemHeader:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg1 cameraProfiles:(id)arg2 ;
-(void)setRecordAudioItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)recordAudioItem;
-(void)setRecordAudioItemProvider:(HFStaticItemProvider *)arg1 ;
-(HUCameraSmartDetectionSettingsModule *)smartDetectionModule;
-(HFStaticItemProvider *)recordAudioItemProvider;
-(HUCameraCloudStorageSettingsModule *)cloudStorageModule;
-(void)updateRecordAudioValue:(BOOL)arg1 ;
@end

