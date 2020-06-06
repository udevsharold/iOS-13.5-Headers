/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class OADTable, CMDrawableStyle, CMTableGridInfo, OADOrientedBounds;

@interface PMTableMapper : CMMapper {

	OADTable* mTable;
	CMDrawableStyle* mStyle;
	CMTableGridInfo* mGrid;
	OADOrientedBounds* mBounds;

}
-(unsigned long long)rowCount;
-(id)cellStyle;
-(id)grid;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(float)columnWidthAtIndex:(unsigned long long)arg1 state:(id)arg2 ;
-(id)tableBorderStyle;
-(id)defaultCellFillForRow:(unsigned long long)arg1 withState:(id)arg2 ;
-(id)initWithOadTable:(id)arg1 bounds:(id)arg2 parent:(id)arg3 ;
-(void)mapTablePropertiesWithState:(id)arg1 ;
-(void)mapColumnGridAt:(id)arg1 withState:(id)arg2 ;
-(id)defaultCellFillWithState:(id)arg1 ;
@end

