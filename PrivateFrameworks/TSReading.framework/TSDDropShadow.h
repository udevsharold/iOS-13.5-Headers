/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDShadow.h>

@interface TSDDropShadow : TSDShadow
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)initWithAngle:(double)arg1 offset:(double)arg2 radius:(double)arg3 opacity:(double)arg4 color:(CGColorRef)arg5 enabled:(BOOL)arg6 ;
-(unsigned long long)shadowType;
-(id)newShadowClampedForSwatches;
-(CGRect)boundsInNaturalSpaceForRep:(id)arg1 ;
-(CGRect)boundsForRep:(id)arg1 ;
-(CGImageRef)newShadowImageForRep:(id)arg1 withSize:(CGSize)arg2 drawSelector:(SEL)arg3 unflipped:(BOOL)arg4 ;
@end

