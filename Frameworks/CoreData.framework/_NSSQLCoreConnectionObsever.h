/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSQLCore;

@interface _NSSQLCoreConnectionObsever : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _token;
	NSSQLCore* _core;

}
-(void)dealloc;
-(id)initWithSQLCore:(id)arg1 ;
-(void)_clearBinding;
-(void)_postRemoteChangeNotificationWithTransactionID:(unsigned long long)arg1 ;
-(id)_retainedBinding;
-(void)_purgeCaches:(id)arg1 ;
@end

