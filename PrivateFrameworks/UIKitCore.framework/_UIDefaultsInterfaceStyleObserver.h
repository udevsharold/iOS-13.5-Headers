/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _UIDefaultsInterfaceStyleObserver : NSObject {

	NSString* _notificationName;
	int _notifyToken;

}
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_didChange;
-(id)initWithNotificationName:(id)arg1 darwinNotification:(const char*)arg2 ;
-(void)observeUserDefaults:(id)arg1 key:(id)arg2 ;
@end

