/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, PVContext;

@interface PVEventManager : NSObject {

	NSMutableArray* _notificationListeners;
	PVContext* _context;

}
-(id)initWithContext:(id)arg1 ;
-(void)addNotificationListener:(id)arg1 ;
-(void)removeNotificationListener:(id)arg1 ;
-(void)publishEvent:(id)arg1 source:(id)arg2 ;
-(void)notifyListeners:(id)arg1 ;
@end

