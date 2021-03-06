/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BKMatchEvent : NSObject {

	BOOL _result;
	unsigned long long _timeStamp;

}

@property (assign,nonatomic) BOOL result;                               //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) unsigned long long timeStamp;              //@synthesize timeStamp=_timeStamp - In the implementation block
+(id)matchEventWithDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)result;
-(void)setResult:(BOOL)arg1 ;
-(unsigned long long)timeStamp;
-(void)setTimeStamp:(unsigned long long)arg1 ;
@end

