/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface CRCarPlayAppPolicy : NSObject {

	BOOL _carPlaySupported;
	BOOL _canDisplayOnCarScreen;
	BOOL _launchUsingSiri;
	BOOL _launchNotificationsUsingSiri;
	BOOL _launchUsingMusicUIService;
	BOOL _badgesAppIcon;
	BOOL _showsNotifications;
	BOOL _handlesCarIntents;
	BOOL _launchUsingMapsTemplateUI;
	NSDictionary* _siriActivationOptions;
	unsigned long long _applicationCategory;

}

@property (assign,getter=isCarPlaySupported,nonatomic) BOOL carPlaySupported;              //@synthesize carPlaySupported=_carPlaySupported - In the implementation block
@property (assign,nonatomic) BOOL canDisplayOnCarScreen;                                   //@synthesize canDisplayOnCarScreen=_canDisplayOnCarScreen - In the implementation block
@property (assign,nonatomic) BOOL launchUsingSiri;                                         //@synthesize launchUsingSiri=_launchUsingSiri - In the implementation block
@property (assign,nonatomic) BOOL launchNotificationsUsingSiri;                            //@synthesize launchNotificationsUsingSiri=_launchNotificationsUsingSiri - In the implementation block
@property (nonatomic,copy) NSDictionary * siriActivationOptions;                           //@synthesize siriActivationOptions=_siriActivationOptions - In the implementation block
@property (assign,nonatomic) BOOL launchUsingMusicUIService;                               //@synthesize launchUsingMusicUIService=_launchUsingMusicUIService - In the implementation block
@property (assign,nonatomic) BOOL badgesAppIcon;                                           //@synthesize badgesAppIcon=_badgesAppIcon - In the implementation block
@property (assign,nonatomic) BOOL showsNotifications;                                      //@synthesize showsNotifications=_showsNotifications - In the implementation block
@property (assign,nonatomic) BOOL handlesCarIntents;                                       //@synthesize handlesCarIntents=_handlesCarIntents - In the implementation block
@property (assign,nonatomic) BOOL launchUsingMapsTemplateUI;                               //@synthesize launchUsingMapsTemplateUI=_launchUsingMapsTemplateUI - In the implementation block
@property (assign,nonatomic) unsigned long long applicationCategory;                       //@synthesize applicationCategory=_applicationCategory - In the implementation block
-(id)init;
-(BOOL)showsNotifications;
-(void)setShowsNotifications:(BOOL)arg1 ;
-(void)setLaunchUsingSiri:(BOOL)arg1 ;
-(BOOL)launchUsingSiri;
-(BOOL)launchNotificationsUsingSiri;
-(void)setLaunchNotificationsUsingSiri:(BOOL)arg1 ;
-(void)setCarPlaySupported:(BOOL)arg1 ;
-(void)setCanDisplayOnCarScreen:(BOOL)arg1 ;
-(void)setSiriActivationOptions:(NSDictionary *)arg1 ;
-(void)setLaunchUsingMusicUIService:(BOOL)arg1 ;
-(void)setBadgesAppIcon:(BOOL)arg1 ;
-(void)setHandlesCarIntents:(BOOL)arg1 ;
-(void)setLaunchUsingMapsTemplateUI:(BOOL)arg1 ;
-(void)setApplicationCategory:(unsigned long long)arg1 ;
-(BOOL)isCarPlaySupported;
-(BOOL)canDisplayOnCarScreen;
-(NSDictionary *)siriActivationOptions;
-(BOOL)launchUsingMusicUIService;
-(BOOL)badgesAppIcon;
-(BOOL)handlesCarIntents;
-(BOOL)launchUsingMapsTemplateUI;
-(unsigned long long)applicationCategory;
@end

