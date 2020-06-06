/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsKit/UserNotificationsKit-Structs.h>
#import <UserNotificationsKit/NCNotificationAction.h>

@class NSString, NSURL, NSDictionary;

@interface NCMutableNotificationAction : NCNotificationAction

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) unsigned long long activationMode; 
@property (nonatomic,copy) NSURL * launchURL; 
@property (nonatomic,copy) NSString * launchBundleID; 
@property (assign,nonatomic) unsigned long long behavior; 
@property (nonatomic,copy) NSDictionary * behaviorParameters; 
@property (nonatomic,retain) id<NCNotificationActionRunner> actionRunner; 
@property (assign,nonatomic) BOOL requiresAuthentication; 
@property (assign,getter=isDestructiveAction,nonatomic) BOOL destructiveAction; 
@property (assign,nonatomic) BOOL shouldDismissNotification; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setActivationMode:(unsigned long long)arg1 ;
-(void)setBehavior:(unsigned long long)arg1 ;
-(void)setLaunchURL:(NSURL *)arg1 ;
-(void)setRequiresAuthentication:(BOOL)arg1 ;
-(void)setLaunchBundleID:(NSString *)arg1 ;
-(void)setBehaviorParameters:(NSDictionary *)arg1 ;
-(void)setActionRunner:(id<NCNotificationActionRunner>)arg1 ;
-(void)setDestructiveAction:(BOOL)arg1 ;
-(void)setShouldDismissNotification:(BOOL)arg1 ;
@end

