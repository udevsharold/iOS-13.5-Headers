/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCharacteristicEventBase.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDCharacteristicEvent : HMDCharacteristicEventBase <NSSecureCoding> {

	id _eventValue;

}

@property (nonatomic,retain) id eventValue;              //@synthesize eventValue=_eventValue - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEventValue:(id)arg1 ;
-(id)eventValue;
-(id)dumpState;
-(id)metricData;
-(id)emptyModelObject;
-(void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)_transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)createPayload;
-(id)initWithModel:(id)arg1 home:(id)arg2 ;
-(void)_handleUpdateRequest:(id)arg1 ;
-(BOOL)_compareEventValue:(id)arg1 ;
-(BOOL)_evaluateNewValue:(id)arg1 ;
@end

