/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NFLazy;

@interface FCAMSPushHandler : NSObject {

	NFLazy* _lazyHandler;

}

@property (nonatomic,retain) NFLazy * lazyHandler;              //@synthesize lazyHandler=_lazyHandler - In the implementation block
-(id)init;
-(void)handleNotification:(id)arg1 ;
-(BOOL)shouldHandleNotification:(id)arg1 ;
-(BOOL)shouldHandleNotificationResponse:(id)arg1 ;
-(NFLazy *)lazyHandler;
-(void)handleNotificationResponse:(id)arg1 ;
-(void)setLazyHandler:(NFLazy *)arg1 ;
@end

