/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NCNotificationExtensionCache;

@interface NCNotificationExtensionsManager : NSObject {

	NCNotificationExtensionCache* _extensionsCache;
	id _extensionsDiscoveryToken;

}

@property (nonatomic,retain) NCNotificationExtensionCache * extensionsCache;              //@synthesize extensionsCache=_extensionsCache - In the implementation block
@property (nonatomic,retain) id extensionsDiscoveryToken;                                 //@synthesize extensionsDiscoveryToken=_extensionsDiscoveryToken - In the implementation block
+(void)initialize;
+(id)sharedInstance;
-(id)init;
-(id)extensionForNotificationRequest:(id)arg1 ;
-(void)_beginMatchingExtensions;
-(NCNotificationExtensionCache *)extensionsCache;
-(id)_matchingAttributes;
-(void)_stopMatchingExtensions;
-(void)setExtensionsCache:(NCNotificationExtensionCache *)arg1 ;
-(id)extensionsDiscoveryToken;
-(void)setExtensionsDiscoveryToken:(id)arg1 ;
@end
