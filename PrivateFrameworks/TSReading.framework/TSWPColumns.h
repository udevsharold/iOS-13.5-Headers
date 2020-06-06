/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSWPColumns : NSObject {

	unsigned long long _columnCount;
	BOOL _equalWidth;
	double _widthArray[10];
	double _gapArray[9];

}

@property (assign,nonatomic) unsigned long long columnCount;              //@synthesize columnCount=_columnCount - In the implementation block
@property (assign,nonatomic) BOOL equalWidth;                             //@synthesize equalWidth=_equalWidth - In the implementation block
+(id)columns;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)columnCount;
-(void)setColumnCount:(unsigned long long)arg1 ;
-(double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double*)arg3 outGap:(double*)arg4 ;
-(BOOL)equalWidth;
-(id)initWithColumnCount:(unsigned long long)arg1 ;
-(void)p_setColumnCount:(unsigned long long)arg1 gapFraction:(double)arg2 ;
-(id)initWithColumnCount:(unsigned long long)arg1 equalWidth:(BOOL)arg2 widthArray:(double*)arg3 gapArray:(double*)arg4 ;
-(void)p_setEqualWidth:(double)arg1 equalGap:(double)arg2 ;
-(double)p_equalGapForEqualWidth:(double)arg1 ;
-(double)p_maxEqualGapForBodyWidth:(double)arg1 ;
-(double)p_equalWidthForEqualGap:(double)arg1 ;
-(id)initWithEqualColumnCount:(unsigned long long)arg1 gapFraction:(double)arg2 ;
-(void)setEqualWidth:(BOOL)arg1 ;
-(void)setWidth:(double)arg1 forColumnIndex:(unsigned long long)arg2 bodyWidth:(double)arg3 ;
-(void)setGap:(double)arg1 forColumnIndex:(unsigned long long)arg2 bodyWidth:(double)arg3 ;
@end
