/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BKSTouchDeliveryPolicy.h>

@protocol OS_xpc_object;
@class NSObject;

@interface _BKSCancelTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy {

	unsigned _contextId;
	NSObject*<OS_xpc_object> _assertionEndpoint;
	double _initialTouchTimestamp;

}

@property (nonatomic,readonly) unsigned contextId;                        //@synthesize contextId=_contextId - In the implementation block
@property (nonatomic,readonly) double initialTouchTimestamp;              //@synthesize initialTouchTimestamp=_initialTouchTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)contextId;
-(double)initialTouchTimestamp;
-(void)setAssertionEndpoint:(id)arg1 ;
-(id)matchSharingTouchesPolicy:(/*^block*/id)arg1 orCancelTouchesPolicy:(/*^block*/id)arg2 orCombinedPolicy:(/*^block*/id)arg3 ;
-(id)assertionEndpoint;
-(id)initWithContextId:(unsigned)arg1 initialTouchTimestamp:(double)arg2 ;
@end

