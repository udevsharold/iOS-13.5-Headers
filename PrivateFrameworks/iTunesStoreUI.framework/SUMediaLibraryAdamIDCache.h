/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface SUMediaLibraryAdamIDCache : NSObject {

	NSMutableSet* _adamIDs;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _isPopulated;

}
+(id)sharedCache;
-(id)init;
-(void)dealloc;
-(void)_populateCache;
-(void)getContainsAdamID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getIntersectionWithSet:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getProperties:(id)arg1 ofAdamIDs:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_libraryChangedNotification:(id)arg1 ;
-(void)populateCache;
@end

