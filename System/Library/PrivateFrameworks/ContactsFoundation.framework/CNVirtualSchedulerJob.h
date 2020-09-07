/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNVirtualSchedulerJob : NSObject {

	unsigned long long _time;
	/*^block*/id _block;

}

@property (assign) unsigned long long time;              //@synthesize time=_time - In the implementation block
@property (copy,readonly) id block;                      //@synthesize block=_block - In the implementation block
+(id)jobWithTime:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)description;
-(id)block;
-(unsigned long long)time;
-(void)setTime:(unsigned long long)arg1 ;
-(id)initWithTime:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
@end
