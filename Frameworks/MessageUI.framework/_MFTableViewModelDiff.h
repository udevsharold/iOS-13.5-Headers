/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSIndexSet;

@interface _MFTableViewModelDiff : NSObject {

	NSIndexSet* _changedRows;
	NSIndexSet* _deletedRows;
	NSIndexSet* _insertedRows;

}

@property (nonatomic,retain) NSIndexSet * changedRows;               //@synthesize changedRows=_changedRows - In the implementation block
@property (nonatomic,retain) NSIndexSet * deletedRows;               //@synthesize deletedRows=_deletedRows - In the implementation block
@property (nonatomic,retain) NSIndexSet * insertedRows;              //@synthesize insertedRows=_insertedRows - In the implementation block
-(NSIndexSet *)changedRows;
-(void)setChangedRows:(NSIndexSet *)arg1 ;
-(NSIndexSet *)deletedRows;
-(void)setDeletedRows:(NSIndexSet *)arg1 ;
-(NSIndexSet *)insertedRows;
-(void)setInsertedRows:(NSIndexSet *)arg1 ;
@end

