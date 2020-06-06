/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IOAccelerator.framework/IOAccelerator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IOAccelerator/IOAccelerator-Structs.h>
@interface IOAccelMTLEvent : NSObject {

	_IOAccelShared* _sharedRef;
	unsigned _eventName;
	unsigned long long _globalTraceObjectID;

}
-(void)dealloc;
-(unsigned)encodeKernelSignalEventCommandArgs:(IOAccelKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 ;
-(unsigned)encodeKernelWaitEventCommandArgs:(IOAccelKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 ;
-(unsigned)encodeKernelWaitEventCommandArgs:(IOAccelKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 timeout:(unsigned)arg3 ;
-(id)initWithShared:(_IOAccelShared*)arg1 ;
@end

