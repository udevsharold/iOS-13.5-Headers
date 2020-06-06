/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSDictionary, NSString;


@protocol NUImageProperties <NSObject>
@property (readonly) NSURL * url; 
@property (readonly) NSDictionary * metadata; 
@property (readonly) CGColorSpaceRef colorSpace; 
@property (readonly) SCD_Struct_NU7 size; 
@property (readonly) long long orientation; 
@property (readonly) NSString * fileUTI; 
@property (readonly) long long alphaInfo; 
@property (readonly) long long componentInfo; 
@property (readonly) BOOL isFusedOvercapture; 
@property (readonly) NSDictionary * auxiliaryImagesProperties; 
@property (readonly) id<NURAWImageProperties> rawProperties; 
@required
-(SCD_Struct_NU7)size;
-(NSURL *)url;
-(long long)orientation;
-(CGColorSpaceRef)colorSpace;
-(NSDictionary *)metadata;
-(NSString *)fileUTI;
-(id<NURAWImageProperties>)rawProperties;
-(BOOL)isFusedOvercapture;
-(long long)alphaInfo;
-(long long)componentInfo;
-(NSDictionary *)auxiliaryImagesProperties;

@end

