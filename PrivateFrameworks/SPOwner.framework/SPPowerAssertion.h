/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface SPPowerAssertion : NSObject {

	unsigned _powerAssertionId;
	NSString* _reason;
	double _timeout;
	unsigned long long _type;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) NSString * reason;                                 //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) double timeout;                                  //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned powerAssertionId;                       //@synthesize powerAssertionId=_powerAssertionId - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)reason;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)hold;
-(id)assertionName;
-(id)assertionType;
-(void)drop;
-(void)setPowerAssertionId:(unsigned)arg1 ;
-(unsigned)powerAssertionId;
-(void)_drop;
-(id)powerAssertionOption;
-(id)initWithReason:(id)arg1 type:(unsigned long long)arg2 timeout:(double)arg3 ;
@end

