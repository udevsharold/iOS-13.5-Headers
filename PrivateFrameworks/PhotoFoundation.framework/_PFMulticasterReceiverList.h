/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface _PFMulticasterReceiverList : NSObject {

	id _inlineReceivers[12];
	NSMutableArray* _extraReceivers;
	SEL _selector;
	unsigned long long _count;

}

@property (readonly) SEL selector;                          //@synthesize selector=_selector - In the implementation block
@property (readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SEL)selector;
-(unsigned long long)count;
-(id)initWithSelector:(SEL)arg1 receivers:(id)arg2 ;
-(id)initWithSelector:(SEL)arg1 receiversHash:(id)arg2 ;
-(BOOL)hasReceivers;
-(void)enumerateReceiversWithBlock:(/*^block*/id)arg1 ;
@end

