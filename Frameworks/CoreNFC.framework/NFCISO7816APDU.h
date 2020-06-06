/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreNFC/CoreNFC-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NFCISO7816APDU : NSObject <NSCopying> {

	NSRange _payloadOffset;
	long long _le;
	NSData* _fullPacket;

}

@property (nonatomic,readonly) unsigned char instructionClass; 
@property (nonatomic,readonly) unsigned char instructionCode; 
@property (nonatomic,readonly) unsigned char p1Parameter; 
@property (nonatomic,readonly) unsigned char p2Parameter; 
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,readonly) long long expectedResponseLength; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(id)asData;
-(id)initWithInstructionClass:(unsigned char)arg1 instructionCode:(unsigned char)arg2 p1Parameter:(unsigned char)arg3 p2Parameter:(unsigned char)arg4 data:(id)arg5 expectedResponseLength:(long long)arg6 ;
-(unsigned char)instructionClass;
-(unsigned char)instructionCode;
-(unsigned char)p1Parameter;
-(unsigned char)p2Parameter;
-(long long)expectedResponseLength;
@end

