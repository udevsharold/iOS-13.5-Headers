/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:44 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface WFSSHKeyDecoder : NSObject {

	NSData* _data;
	unsigned long long _offset;
	unsigned long long _length;

}

@property (nonatomic,readonly) NSData * data;                        //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned long long length;              //@synthesize length=_length - In the implementation block
-(unsigned long long)length;
-(void)setLength:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(void)advanceBy:(unsigned long long)arg1 ;
-(const char*)currentPointer;
-(unsigned)decodeInteger;
-(id)decodeStringWithLength:(unsigned long long)arg1 ;
-(id)decodeStringWithPrecedingLength;
-(id)decodeDataWithLength:(unsigned long long)arg1 ;
-(id)decodeDataWithPrecedingLength;
@end

