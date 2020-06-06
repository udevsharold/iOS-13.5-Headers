/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDCurvedShadow.h>

@class TSUColor;

@interface TSDMutableCurvedShadow : TSDCurvedShadow

@property (assign,nonatomic) double curve; 
@property (assign,nonatomic) double offset; 
@property (assign,nonatomic) double angle; 
@property (assign,nonatomic) CGColorRef color; 
@property (assign,nonatomic) double radius; 
@property (assign,nonatomic) double opacity; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) TSUColor * TSUColor; 
-(void)setOffset:(double)arg1 ;
-(void)setColor:(CGColorRef)arg1 ;
-(void)setRadius:(double)arg1 ;
-(void)setAngle:(double)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(void)setCurve:(double)arg1 ;
-(void)setTSUColor:(TSUColor *)arg1 ;
@end

