/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSHashTable, NSURL;

@interface PLFileSystemVolumeUnmountMonitor : NSObject {

	NSHashTable* _observers;
	os_unfair_lock_s _lock;
	NSURL* _volumeURL;

}
-(void)dealloc;
-(id)description;
-(id)initWithVolumeURL:(id)arg1 ;
-(void)addVolumeUnmountObserver:(id)arg1 ;
-(void)removeVolumeUnmountObserver:(id)arg1 ;
@end

