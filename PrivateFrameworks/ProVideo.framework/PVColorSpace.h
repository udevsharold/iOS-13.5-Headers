/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PVColorSpace : NSObject {

	int _type;

}
+(id)sRGBColorSpace;
+(id)extendedSRGBColorSpace;
+(id)pvColorSpaceFromCGColorSpace:(CGColorSpaceRef)arg1 ;
+(id)p3d65GammaColorSpace;
+(id)rec601GammaColorSpace;
+(id)rec601LinearColorSpace;
+(id)rec709GammaColorSpace;
+(id)rec709LinearColorSpace;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)name;
-(id)initWithType:(int)arg1 ;
-(CGColorSpaceRef)cgColorSpace;
-(BOOL)isP3d65GammaColorSpace;
-(BOOL)isWideGamutSpace;
-(BOOL)isExtendedSRGBColorSpace;
-(BOOL)isSRGBColorSpace;
-(BOOL)isEqualToCGColorSpace:(CGColorSpaceRef)arg1 ;
-(BOOL)isRec601GammaColorSpace;
-(BOOL)isRec601LinearColorSpace;
-(BOOL)isRec709GammaColorSpace;
-(BOOL)isRec709LinearColorSpace;
@end

