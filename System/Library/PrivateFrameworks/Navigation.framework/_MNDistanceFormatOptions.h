/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _MNDistanceFormatOptions : NSObject {

	BOOL metric;
	BOOL yards;
	BOOL abbreviateUnits;
	BOOL spoken;
	unsigned long long maximumFractionDigits;
	long long rounding;
	unsigned long long _minimumFractionDigits;

}

@property (assign,nonatomic) unsigned long long minimumFractionDigits;              //@synthesize minimumFractionDigits=_minimumFractionDigits - In the implementation block
@property (assign,nonatomic) unsigned long long maximumFractionDigits; 
@property (assign,nonatomic) BOOL metric; 
@property (assign,nonatomic) BOOL yards; 
@property (assign,nonatomic) BOOL abbreviateUnits; 
@property (assign,nonatomic) BOOL spoken; 
@property (assign,nonatomic) long long rounding; 
-(BOOL)yards;
-(unsigned long long)minimumFractionDigits;
-(void)setMinimumFractionDigits:(unsigned long long)arg1 ;
-(unsigned long long)maximumFractionDigits;
-(void)setMaximumFractionDigits:(unsigned long long)arg1 ;
-(BOOL)metric;
-(void)setMetric:(BOOL)arg1 ;
-(void)setYards:(BOOL)arg1 ;
-(BOOL)abbreviateUnits;
-(void)setAbbreviateUnits:(BOOL)arg1 ;
-(BOOL)spoken;
-(void)setSpoken:(BOOL)arg1 ;
-(long long)rounding;
-(void)setRounding:(long long)arg1 ;
@end
