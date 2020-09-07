/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSNotificationSettings : NSObject {

	 authorizationStatus;
	 sound;
	 badge;
	 showOnLockScreen;
	 showInNotificationCenter;
	 showBanners;

}

@property (readonly,nonatomic) long long authorizationStatus; 
@property (readonly,nonatomic) BOOL sound; 
@property (readonly,nonatomic) BOOL badge; 
@property (readonly,nonatomic) BOOL showOnLockScreen; 
@property (readonly,nonatomic) BOOL showInNotificationCenter; 
@property (readonly,nonatomic) BOOL showBanners; 
-(id)init;
-(long long)authorizationStatus;
-(BOOL)sound;
-(BOOL)badge;
-(BOOL)showOnLockScreen;
-(BOOL)showInNotificationCenter;
-(BOOL)showBanners;
-(id)initWithSystemSettings:(id)arg1 ;
@end
