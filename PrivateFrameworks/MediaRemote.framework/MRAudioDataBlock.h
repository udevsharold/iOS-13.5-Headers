/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class MRAudioBuffer, _MRAudioDataBlockProtobuf, NSData;

@interface MRAudioDataBlock : NSObject <NSMutableCopying> {

	MRAudioBuffer* _buffer;
	SCD_Struct_MR19 _time;
	float _gain;

}

@property (nonatomic,readonly) MRAudioBuffer * buffer;                            //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MR19 time;                              //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) float gain;                                        //@synthesize gain=_gain - In the implementation block
@property (nonatomic,readonly) _MRAudioDataBlockProtobuf * protobuf; 
@property (nonatomic,readonly) NSData * data; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(SCD_Struct_MR19)time;
-(MRAudioBuffer *)buffer;
-(float)gain;
-(_MRAudioDataBlockProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
-(void)_parseBuffer:(id)arg1 ;
-(void)_parseTimestamp:(id)arg1 ;
-(void)_parseGain:(id)arg1 ;
@end

