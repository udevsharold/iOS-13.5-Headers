/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MetalTools/MetalTools-Structs.h>
@interface MTLCountersTraceCommandEncoder : NSObject {

	BinaryBuffer* _stream;
	unsigned long long _flags;
	NSRange _segment;

}

@property (nonatomic,readonly) unsigned long long flags;              //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSRange segment;                       //@synthesize segment=_segment - In the implementation block
-(unsigned long long)flags;
-(void)endEncoding;
-(void)setLabel:(id)arg1 ;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(NSRange)segment;
-(void)insertDebugSignpost:(id)arg1 ;
-(id)init:(BinaryBuffer*)arg1 flags:(unsigned long long)arg2 ;
@end

