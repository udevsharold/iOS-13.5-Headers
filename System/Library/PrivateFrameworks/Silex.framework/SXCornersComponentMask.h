/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentMask.h>

@class NSString;

@interface SXCornersComponentMask : SXComponentMask

@property (nonatomic,readonly) SXConvertibleValue radius; 
@property (nonatomic,readonly) BOOL topLeft; 
@property (nonatomic,readonly) BOOL topRight; 
@property (nonatomic,readonly) BOOL bottomRight; 
@property (nonatomic,readonly) BOOL bottomLeft; 
@property (nonatomic,readonly) unsigned long long cornerMask; 
@property (nonatomic,readonly) NSString * curve; 
-(NSString *)curve;
-(BOOL)bottomLeft;
-(BOOL)bottomRight;
-(BOOL)topRight;
-(BOOL)topLeft;
-(SXConvertibleValue)radius;
-(unsigned long long)cornerMask;
-(BOOL)cornerWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)topLeftWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)topRightWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)bottomRightWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)bottomLeftWithValue:(id)arg1 withType:(int)arg2 ;
-(id)curveWithValue:(id)arg1 withType:(int)arg2 ;
@end
