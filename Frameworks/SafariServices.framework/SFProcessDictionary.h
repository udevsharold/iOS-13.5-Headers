/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet, NSMutableArray, NSCountedSet, BKSApplicationStateMonitor;

@interface SFProcessDictionary : NSObject {

	NSMutableDictionary* _pidToBundleIdentifierMap;
	NSMutableSet* _pidsPendingTermination;
	NSMutableArray* _recentlyReferencedPIDs;
	NSCountedSet* _references;
	BKSApplicationStateMonitor* _stateMonitor;
	NSMutableDictionary* _values;
	unsigned long long _cacheCapacity;

}

@property (nonatomic,readonly) unsigned long long cacheCapacity;              //@synthesize cacheCapacity=_cacheCapacity - In the implementation block
-(id)init;
-(void)dealloc;
-(void)decrementReferenceForPID:(int)arg1 ;
-(id)incrementReferenceForPID:(int)arg1 bundleIdentifier:(id)arg2 valueCreationBlock:(/*^block*/id)arg3 ;
-(id)initWithCacheCapacity:(unsigned long long)arg1 ;
-(void)_handleApplicationStateUpdate:(id)arg1 ;
-(void)_handleProcessTermination:(int)arg1 ;
-(void)_removeValueForPID:(id)arg1 ;
-(void)_updateInterestedApplications;
-(void)_removeUnreferencedObjectsIfNeeded;
-(unsigned long long)cacheCapacity;
@end

