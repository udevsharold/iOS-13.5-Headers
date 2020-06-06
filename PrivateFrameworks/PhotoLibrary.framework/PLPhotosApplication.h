/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, NSString, NSDictionary, NSSet;

@interface PLPhotosApplication : UIApplication <UIApplicationDelegate> {

	BOOL _receivingRemoteControlEvents;
	int _observeForRechabilityChanges;
	BOOL _isReachable;
	BOOL _isOnWifi;
	BOOL _photoStreamIsBusy;
	BOOL _sharedPhotoStreamIsBusy;
	int _photoStreamActivityToken;
	int _sharedPhotoStreamActivityToken;
	int _sharedPhotoStreamInvitationFailureToken;
	NSString* _currentTestName;
	NSDictionary* _currentTestOptions;
	long long _waitForGraphCount;
	NSSet* _notificationSuppressionContexts;

}

@property (nonatomic,readonly) BOOL isReachable;                                 //@synthesize isReachable=_isReachable - In the implementation block
@property (nonatomic,readonly) BOOL isOnWifi;                                    //@synthesize isOnWifi=_isOnWifi - In the implementation block
@property (nonatomic,retain) NSString * currentTestName;                         //@synthesize currentTestName=_currentTestName - In the implementation block
@property (nonatomic,retain) NSDictionary * currentTestOptions;                  //@synthesize currentTestOptions=_currentTestOptions - In the implementation block
@property (assign,nonatomic) long long waitForGraphCount;                        //@synthesize waitForGraphCount=_waitForGraphCount - In the implementation block
@property (nonatomic,copy) NSSet * notificationSuppressionContexts;              //@synthesize notificationSuppressionContexts=_notificationSuppressionContexts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
+(void)initialize;
-(void)dealloc;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(BOOL)isReachable;
-(void)photosPreferencesChanged;
-(void)_networkReachabilityDidChange:(id)arg1 ;
-(BOOL)useCompatibleSuspensionAnimation;
-(void)prepareForApplicationWillEnterForeground;
-(void)prepareForApplicationDidEnterBackground;
-(void)prepareForApplicationDidBecomeActive;
-(void)_updateSuspensionSettings;
-(void)_cleanUpOutboundSharingAssets;
-(void)setReceivingRemoteControlEvents:(BOOL)arg1 ;
-(void)_startObservingReachabilityChanges;
-(void)_stopObservingReachabilityChanges;
-(void)enableNetworkObservation;
-(void)disableNetworkObservation;
-(void)_registerForPhotoStreamActivityNotifications;
-(void)_unregisterForPhotoStreamActivityNotifications;
-(void)_updateNetworkActivityIndicatorAsync;
-(void)_updatePhotoStreamProgressDisplay;
-(void)_updateSharedPhotoStreamProgressDisplay;
-(void)handleImportCompleteAlertResponse:(CFUserNotificationRef)arg1 flags:(unsigned long long)arg2 ;
-(BOOL)isOnWifi;
-(NSString *)currentTestName;
-(void)setCurrentTestName:(NSString *)arg1 ;
-(NSDictionary *)currentTestOptions;
-(void)setCurrentTestOptions:(NSDictionary *)arg1 ;
-(long long)waitForGraphCount;
-(void)setWaitForGraphCount:(long long)arg1 ;
-(NSSet *)notificationSuppressionContexts;
-(void)setNotificationSuppressionContexts:(NSSet *)arg1 ;
@end

