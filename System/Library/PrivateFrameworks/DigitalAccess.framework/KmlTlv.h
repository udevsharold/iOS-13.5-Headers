/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DigitalAccess.framework/DigitalAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface KmlTlv : NSObject {

	unsigned short _tag;
	NSData* _value;

}

@property (nonatomic,readonly) unsigned short tag; 
@property (nonatomic,readonly) NSData * value; 
+(id)TLVsWithData:(id)arg1 ;
+(id)TLVWithTag:(unsigned short)arg1 value:(id)arg2 ;
+(id)_intToData:(unsigned)arg1 ;
+(id)_parseTLVs:(const char**)arg1 end:(const char*)arg2 ;
-(id)description;
-(NSData *)value;
-(unsigned short)tag;
-(id)asData;
-(id)valueAsString;
-(unsigned)valueAsUnsignedLong;
-(unsigned short)valueAsUnsignedShort;
-(unsigned long long)valueAsUnsignedLongLong;
@end
