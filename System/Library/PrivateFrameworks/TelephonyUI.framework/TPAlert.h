/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TelephonyUI/TelephonyUI-Structs.h>
@interface TPAlert : NSObject {

	/*^block*/id _completion;
	CFUserNotificationRef _userNotification;

}

@property (assign,nonatomic) CFUserNotificationRef userNotification;              //@synthesize userNotification=_userNotification - In the implementation block
@property (nonatomic,copy) id completion;                                         //@synthesize completion=_completion - In the implementation block
-(void)dealloc;
-(id)title;
-(id)message;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)show;
-(id)defaultButtonTitle;
-(id)alternateButtonTitle;
-(id)otherButtonTitle;
-(void)defaultResponse;
-(void)otherResponse;
-(CFUserNotificationRef)userNotification;
-(void)alternateResponse;
-(void)showOnViewController:(id)arg1 ;
-(void)setUserNotification:(CFUserNotificationRef)arg1 ;
@end
