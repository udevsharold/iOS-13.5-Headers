/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCharacteristicEventBase.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>

@class NSNumber, NSString, NSUUID, NSSet;

@interface HMDCharacteristicThresholdRangeEvent : HMDCharacteristicEventBase <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver> {

	NSNumber* _min;
	NSNumber* _max;

}

@property (nonatomic,retain) NSNumber * min;                                                  //@synthesize min=_min - In the implementation block
@property (nonatomic,retain) NSNumber * max;                                                  //@synthesize max=_max - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMax:(NSNumber *)arg1 ;
-(NSNumber *)max;
-(void)setMin:(NSNumber *)arg1 ;
-(NSNumber *)min;
-(id)metricData;
-(id)emptyModelObject;
-(void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)_transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)createPayload;
-(id)initWithModel:(id)arg1 home:(id)arg2 ;
-(void)_handleUpdateRequest:(id)arg1 ;
-(BOOL)_evaluateNewValue:(id)arg1 ;
-(BOOL)_isValueInRange:(id)arg1 ;
@end

