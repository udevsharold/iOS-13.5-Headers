/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/TTMergeableStringUndoCommand.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface TTMergeableStringUndoGroup : NSObject <TTMergeableStringUndoCommand> {

	NSMutableDictionary* _seen;
	NSMutableArray* _commands;

}

@property (nonatomic,retain) NSMutableDictionary * seen;              //@synthesize seen=_seen - In the implementation block
@property (nonatomic,retain) NSMutableArray * commands;               //@synthesize commands=_commands - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(void)applyToString:(id)arg1 ;
-(NSMutableArray *)commands;
-(void)setCommands:(NSMutableArray *)arg1 ;
-(void)updateTopoIDRange:(TopoIDRange)arg1 toNewRangeID:(TopoIDRange)arg2 ;
-(BOOL)hasTopoIDsThatCanChange;
-(void)setSeen:(NSMutableDictionary *)arg1 ;
-(BOOL)addToGroup:(id)arg1 ;
-(NSMutableDictionary *)seen;
-(void)closeGroup;
-(void)addCommand:(id)arg1 ;
-(BOOL)addSeenRange:(TopoIDRange)arg1 ;
@end

