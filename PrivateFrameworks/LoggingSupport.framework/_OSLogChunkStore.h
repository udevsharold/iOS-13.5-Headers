/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <LoggingSupport/LoggingSupport-Structs.h>
@interface _OSLogChunkStore : NSObject {

	const void* _ptr;
	unsigned long long _sz;

}
-(id)initWithBytes:(const void*)arg1 size:(unsigned long long)arg2 ;
-(void)enumerateChunksInRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateChunksUsingBlock:(/*^block*/id)arg1 ;
@end

