/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUImage.h>
#import <libobjc.A.dylib/NUMutableImage.h>
#import <libobjc.A.dylib/NUImageCopying.h>
#import <libobjc.A.dylib/NUPurgeableImage.h>
#import <libobjc.A.dylib/NUMutablePurgeableImage.h>

@protocol OS_dispatch_queue, NUStorageFactory;
@class NUImageLayout, NUPixelFormat, NUColorSpace, NURegion, NSObject, NSPointerArray, NSString;

@interface _NUImage : NSObject <NUImage, NUMutableImage, NUImageCopying, NUPurgeableImage, NUMutablePurgeableImage> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _writeQueue;
	NUImageLayout* _layout;
	NUPixelFormat* _format;
	NUColorSpace* _colorSpace;
	NURegion* _validRegion;
	NSPointerArray* _tiles;
	id<NUStorageFactory> _tileFactory;
	vector<unsigned char, std::__1::allocator<unsigned char> > _accessCount;

}

@property (readonly) NUImageLayout * layout;                        //@synthesize layout=_layout - In the implementation block
@property (readonly) NUPixelFormat * format;                        //@synthesize format=_format - In the implementation block
@property (readonly) NUColorSpace * colorSpace;                     //@synthesize colorSpace=_colorSpace - In the implementation block
@property (readonly) SCD_Struct_NU7 size; 
@property (copy) NURegion * validRegion;                            //@synthesize validRegion=_validRegion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(SCD_Struct_NU7)size;
-(NUPixelFormat *)format;
-(NUColorSpace *)colorSpace;
-(NUImageLayout *)layout;
-(id)tileAtIndex:(unsigned long long)arg1 ;
-(BOOL)beginAccess;
-(void)endAccess;
-(NURegion *)validRegion;
-(id)immutableImageCopy;
-(id)mutableImageCopy;
-(id)purgeableImageCopy;
-(id)mutablePurgeableImageCopy;
-(BOOL)copySurfaceStorage:(id)arg1 fromRect:(SCD_Struct_NU8)arg2 toPoint:(SCD_Struct_NU7)arg3 device:(id)arg4 ;
-(BOOL)copyBufferStorage:(id)arg1 fromRect:(SCD_Struct_NU8)arg2 toPoint:(SCD_Struct_NU7)arg3 ;
-(BOOL)beginAccessRegion:(id)arg1 ;
-(void)endAccessRegion:(id)arg1 ;
-(void)writeRegion:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)readRegion:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithLayout:(id)arg1 format:(id)arg2 colorSpace:(id)arg3 tileFactory:(id)arg4 ;
-(id)_tileAtIndex:(unsigned long long)arg1 ;
-(id)_createOrCopyTile:(id)arg1 tileInfo:(id)arg2 writeRegion:(id)arg3 ;
-(id)_purgeableCopy;
-(id)_nonPurgeableCopy;
-(void)setValidRegion:(NURegion *)arg1 ;
@end

