/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSPObject.h>

@class NSMutableArray, NSArray;

@interface TSTTableTile : TSPObject {

	unsigned char mMaxColumn;
	unsigned short mMaxRow;
	unsigned short mNumCells;
	NSMutableArray* mRowInfos;
	unsigned short mNumRows;
	unsigned char mStorageVersion;

}

@property (nonatomic,readonly) unsigned char maxColumn; 
@property (nonatomic,readonly) unsigned short maxRow; 
@property (nonatomic,readonly) unsigned short numCells; 
@property (nonatomic,readonly) unsigned short numRows; 
@property (nonatomic,readonly) NSArray * rowInfos; 
-(void)dealloc;
-(id)description;
-(void)debugDump;
-(id)initWithContext:(id)arg1 ;
-(void)validate;
-(id)packageLocator;
-(unsigned long long)flushableSize;
-(id)initWithRows:(id)arg1 context:(id)arg2 ;
-(unsigned char)maxColumn;
-(unsigned short)maxRow;
-(unsigned short)numCells;
-(unsigned short)numRows;
-(NSArray *)rowInfos;
-(void)debugListRows;
-(void)i_upgradeTileRowInfosWithDataStore:(id)arg1 ;
@end

