/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/TTMergeableString.h>

@interface TTMergeableUndoString : TTMergeableString
-(void)deleteSubstrings:(vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> >*)arg1 withCharacterRanges:(vector<_NSRange, std::__1::allocator<_NSRange> >Ref)arg2 ;
-(TopoIDRange)insertAttributedString:(id)arg1 after:(TopoSubstring*)arg2 before:(TopoSubstring*)arg3 ;
-(void)addUndoCommand:(id)arg1 ;
-(void)applyUndoCommand:(id)arg1 ;
-(void)undeleteSubstrings:(vector<std::__1::pair<TopoIDRange, NSAttributedString *>, std::__1::allocator<std::__1::pair<TopoIDRange, NSAttributedString *> > >*)arg1 ;
@end

