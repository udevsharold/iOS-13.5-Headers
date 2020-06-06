/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLNamed.h>

@class NSString, NSData;

@interface MDLTexture : NSObject <MDLNamed> {

	NSString* _name;
	MDLTextureData _textureData;
	long long _channelEncoding;
	NSData* _topLeftOriginData[14];
	NSData* _bottomLeftOriginData[14];
	BOOL _selfCreating;
	BOOL _alphaValuesSet;
	BOOL _hasAlphaValues;

}

@property (nonatomic,readonly)  dimensions; 
@property (nonatomic,readonly) long long rowStride; 
@property (nonatomic,readonly) unsigned long long channelCount; 
@property (nonatomic,readonly) unsigned long long mipLevelCount; 
@property (nonatomic,readonly) long long channelEncoding;                     //@synthesize channelEncoding=_channelEncoding - In the implementation block
@property (assign,nonatomic) BOOL isCube; 
@property (assign,nonatomic) BOOL hasAlphaValues; 
@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
+(id)textureNamed:(id)arg1 ;
+(id)textureNamed:(id)arg1 assetResolver:(id)arg2 ;
+(id)textureWithURL:(id)arg1 ;
+(id)irradianceTextureCubeWithTexture:(id)arg1 name:(id)arg2 dimensions:(float)arg3 ;
+(id)textureWithURL:(id)arg1 offset:(unsigned long long)arg2 size:(unsigned long long)arg3 ;
+(id)textureNamed:(id)arg1 bundle:(id)arg2 ;
+(id)_textureCubeWithSingleImageNamed:(id)arg1 bundle:(id)arg2 ;
+(id)textureCubeWithImagesNamed:(id)arg1 bundle:(id)arg2 ;
+(id)textureResourceNamed:(id)arg1 assetResolver:(id)arg2 ;
+(id)textureFromResource:(id)arg1 ;
+(id)textureCubeWithImagesNamed:(id)arg1 ;
+(id)irradianceTextureCubeWithTexture:(id)arg1 name:(id)arg2 ;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-()dimensions;
-(unsigned long long)channelCount;
-(BOOL)writeToURL:(id)arg1 ;
-(id)initWithData:(id)arg1 topLeftOrigin:(BOOL)arg2 name:(id)arg3 dimensions:(long long)arg4 rowStride:(unsigned long long)arg5 channelCount:(long long)arg6 channelEncoding:(BOOL)arg7 ;
-(id)texelDataWithBottomLeftOrigin;
-(MDLTextureData*)textureData;
-(id)allocateDataAtLevel:(long long)arg1 ;
-(void)clearTexelData;
-(id)texelDataWithTopLeftOriginAtMipLevel:(long long)arg1 create:(BOOL)arg2 ;
-(id)generateDataAtLevel:(long long)arg1 ;
-(id)texelDataWithBottomLeftOriginAtMipLevel:(long long)arg1 create:(BOOL)arg2 ;
-(void)loadDataWithTopLeftOriginAtMipLevel:(long long)arg1 create:(BOOL)arg2 ;
-(void)loadDataWithBottomLeftOriginAtMipLevel:(long long)arg1 create:(BOOL)arg2 ;
-(BOOL)writeToURL:(id)arg1 level:(unsigned long long)arg2 ;
-(BOOL)writeToURL:(id)arg1 type:(CFStringRef)arg2 ;
-(BOOL)writeToURL:(id)arg1 type:(CFStringRef)arg2 level:(unsigned long long)arg3 ;
-(CGImageRef)imageFromTextureAtLevel:(unsigned long long)arg1 ;
-(id)texelDataWithTopLeftOrigin:(unsigned long long)arg1 ;
-(id)texelDataWithTopLeftOrigin;
-(void)setTexelDataWithTopLeftOrigin:(id)arg1 atMipLevel:(long long)arg2 ;
-(long long)rowStride;
-(BOOL)isCube;
-(void)setIsCube:(BOOL)arg1 ;
-(BOOL)hasAlphaValues;
-(void)setHasAlphaValues:(BOOL)arg1 ;
-(unsigned long long)mipLevelCount;
-(void)setTexelDataWithBottomLeftOrigin:(id)arg1 atMipLevel:(long long)arg2 ;
-(CGImageRef)imageFromTexture;
-(long long)channelEncoding;
@end

