/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFAWDEvent.h>

@class PBCodable, NSString;

@interface WFUserConfigureEvent : NSObject <WFAWDEvent> {

	unsigned _metricIdentifier;
	PBCodable* _metric;

}

@property (assign,nonatomic) unsigned metricIdentifier;              //@synthesize metricIdentifier=_metricIdentifier - In the implementation block
@property (nonatomic,retain) PBCodable * metric;                     //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configureEventWithType:(long long)arg1 new:(long long)arg2 old:(long long)arg3 ;
-(PBCodable *)metric;
-(void)setMetric:(PBCodable *)arg1 ;
-(id)initWithType:(long long)arg1 new:(long long)arg2 old:(long long)arg3 ;
-(unsigned)_metricIdForType:(long long)arg1 ;
-(unsigned)metricIdentifier;
-(void)setMetricIdentifier:(unsigned)arg1 ;
@end

