/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFCharacteristicReadPolicy.h>

@class NSString;

@interface HFStaticReadPolicy : NSObject <HFCharacteristicReadPolicy> {

	unsigned long long _decision;

}

@property (nonatomic,readonly) unsigned long long decision;              //@synthesize decision=_decision - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)policyWithDecision:(unsigned long long)arg1 ;
-(id)init;
-(NSString *)description;
-(unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id*)arg2 ;
-(id)initWithDecision:(unsigned long long)arg1 ;
-(unsigned long long)decision;
@end

