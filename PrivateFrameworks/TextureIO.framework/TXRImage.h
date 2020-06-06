/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextureIO/TextureIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol TXRBuffer, TXRDataSourceProvider;
@class NSError;

@interface TXRImage : NSObject <NSCopying> {

	id<TXRBuffer> _buffer;
	unsigned long long _offset;
	unsigned long long _bytesPerImage;
	unsigned long long _bytesPerRow;
	NSError* _error;
	long long _face;
	unsigned long long _element;
	unsigned long long _level;
	id<TXRDataSourceProvider> _dataSourceProvider;

}

@property (readonly) unsigned long long offset;                     //@synthesize offset=_offset - In the implementation block
@property (readonly) id<TXRBuffer> buffer;                          //@synthesize buffer=_buffer - In the implementation block
@property (readonly) unsigned long long bytesPerRow; 
@property (readonly) unsigned long long bytesPerImage; 
@property (readonly) NSError * error;                               //@synthesize error=_error - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSError *)error;
-(unsigned long long)bytesPerRow;
-(id<TXRBuffer>)buffer;
-(unsigned long long)offset;
-(unsigned long long)bytesPerImage;
-(void)deferredProvide;
-(id)initWithBytesPerRow:(unsigned long long)arg1 bytesPerImage:(unsigned long long)arg2 buffer:(id)arg3 offset:(unsigned long long)arg4 ;
-(id)initAsLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3 dataSourceProvider:(id)arg4 ;
@end

