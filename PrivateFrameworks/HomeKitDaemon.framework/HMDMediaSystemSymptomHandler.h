/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMDMediaSystem, NSDictionary, NSObject, HMFMessageDispatcher, NSSet, NSString;

@interface HMDMediaSystemSymptomHandler : HMFObject <NSSecureCoding, HMFLogging> {

	NSUUID* _uuid;
	HMDMediaSystem* _mediaSystem;
	NSDictionary* _currentSymptoms;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;

}

@property (nonatomic,readonly) NSUUID * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,__weak,readonly) HMDMediaSystem * mediaSystem;               //@synthesize mediaSystem=_mediaSystem - In the implementation block
@property (nonatomic,copy) NSDictionary * currentSymptoms;                        //@synthesize currentSymptoms=_currentSymptoms - In the implementation block
@property (nonatomic,readonly) NSSet * mergedSymptoms; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)logIdentifier;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(NSDictionary *)currentSymptoms;
-(HMDMediaSystem *)mediaSystem;
-(id)_initializePlaceholderSymptomsDict:(id)arg1 ;
-(void)refreshCurrentDeviceSymptoms;
-(void)_refreshCurrentDeviceSymptoms;
-(void)_handleNewDiscoveredSymptoms:(id)arg1 forAccessory:(id)arg2 ;
-(void)_updateBackingStoreModelWithNewSymptoms:(id)arg1 ;
-(void)setCurrentSymptoms:(NSDictionary *)arg1 ;
-(NSSet *)mergedSymptoms;
-(id)initWithMediaSystem:(id)arg1 symptoms:(id)arg2 ;
-(void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2 ;
-(void)handleNewDiscoveredSymptoms:(id)arg1 forAccessory:(id)arg2 ;
-(void)handleMediaSystemSymptoms:(id)arg1 message:(id)arg2 ;
@end

