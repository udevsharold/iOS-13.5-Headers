/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ESDContainer, OADTable, OABReaderState, OABTableSortedIntArray;

@interface OABRTable : NSObject {

	ESDContainer* mSrcTable;
	OADTable* mTgtTable;
	OABReaderState* mState;
	CGPoint mScale;
	int mRowCount;
	int mColumnCount;
	OABTableSortedIntArray* mXCoords;
	OABTableSortedIntArray* mYCoords;
	OABTable2DArray<EshShape *>* mHorzLines;
	OABTable2DArray<EshShape *>* mVertLines;
	OABTable2DArray<OABTableCell>* mCells;

}
-(void)dealloc;
-(void)map;
-(id)readStrokeFromShape:(EshShape*)arg1 ;
-(void)readAnchor;
-(void)mapScale;
-(void)readCoordinates;
-(void)readCellsAndLines;
-(void)validateTable;
-(void)createTargetTableContents;
-(id)initWithSourceTable:(id)arg1 targetTable:(id)arg2 state:(id)arg3 ;
@end

