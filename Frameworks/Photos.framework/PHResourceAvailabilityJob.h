/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSMutableArray, NSArray, NSMutableSet;

@interface PHResourceAvailabilityJob : PLDaemonJob {

	NSMutableArray* _requests;
	NSArray* _cancelledRequestIdentifiers;
	NSMutableSet* _unsentRequestIdentifiers;
	os_unfair_lock_s _lock;

}
-(void)run;
-(id)description;
-(void)addRequest:(id)arg1 ;
-(void)runDaemonSide;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(long long)daemonOperation;
-(void)setClientConnection:(id)arg1 ;
-(BOOL)shouldRunOnDaemonSerialQueue;
-(void)cancelAll;
@end

