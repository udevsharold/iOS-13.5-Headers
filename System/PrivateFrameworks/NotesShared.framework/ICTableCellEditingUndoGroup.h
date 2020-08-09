/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/TTMergeableStringUndoGroup.h>

@class NSUUID, ICTableAttachmentSelection, ICTableUndoTarget;

@interface ICTableCellEditingUndoGroup : TTMergeableStringUndoGroup {

	NSUUID* _columnID;
	NSUUID* _rowID;
	ICTableAttachmentSelection* _tableSelection;
	ICTableUndoTarget* _undoTarget;

}

@property (nonatomic,readonly) NSUUID * columnID;                                        //@synthesize columnID=_columnID - In the implementation block
@property (nonatomic,readonly) NSUUID * rowID;                                           //@synthesize rowID=_rowID - In the implementation block
@property (nonatomic,readonly) ICTableAttachmentSelection * tableSelection;              //@synthesize tableSelection=_tableSelection - In the implementation block
@property (nonatomic,readonly) ICTableUndoTarget * undoTarget;                           //@synthesize undoTarget=_undoTarget - In the implementation block
-(id)init;
-(NSUUID *)rowID;
-(id)initWithColumn:(id)arg1 row:(id)arg2 selection:(id)arg3 undoTarget:(id)arg4 ;
-(NSUUID *)columnID;
-(ICTableAttachmentSelection *)tableSelection;
-(ICTableUndoTarget *)undoTarget;
@end
