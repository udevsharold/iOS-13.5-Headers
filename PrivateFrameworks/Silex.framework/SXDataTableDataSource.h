/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXDataTableDataSource <NSObject>
@required
-(unsigned long long)numberOfColumns;
-(unsigned long long)numberOfRows;
-(unsigned long long)dataOrientation;
-(id)tableBorder;
-(id)backgroundColorForRowAtIndex:(unsigned long long)arg1;
-(id)backgroundColorForColumnAtIndex:(unsigned long long)arg1;
-(id)backgroundColorForCellAtIndexPath:(NSRange)arg1;
-(double)widthForCellAtIndexPath:(NSRange)arg1;
-(double)heightForCellAtIndexPath:(NSRange)arg1;
-(double)minimumWidthForCellAtIndexPath:(NSRange)arg1;
-(double)heightForCellndexPath:(NSRange)arg1 forWidth:(double)arg2;
-(id)cellBorderForCellAtIndexPath:(NSRange)arg1;
-(UIEdgeInsets*)paddingForCellAtIndexPath:(NSRange)arg1;
-(unsigned long long)verticalAlignmentForCellAtIndexPath:(NSRange)arg1;
-(unsigned long long)horizontalAlignmentForCellAtIndexPath:(NSRange)arg1;
-(id)rowDividerAtIndex:(unsigned long long)arg1;
-(id)columnDividerAtIndex:(unsigned long long)arg1;

@end

