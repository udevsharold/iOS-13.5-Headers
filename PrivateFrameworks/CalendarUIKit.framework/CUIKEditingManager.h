/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EKEventStore, NSMutableSet, NSMutableDictionary;

@interface CUIKEditingManager : NSObject {

	EKEventStore* _eventStore;
	NSMutableSet* _editingContextGroups;
	NSMutableDictionary* _changeHistory;
	NSMutableDictionary* _changedObjectMap;

}

@property (__weak) EKEventStore * eventStore;                           //@synthesize eventStore=_eventStore - In the implementation block
@property (retain) NSMutableSet * editingContextGroups;                 //@synthesize editingContextGroups=_editingContextGroups - In the implementation block
@property (retain) NSMutableDictionary * changeHistory;                 //@synthesize changeHistory=_changeHistory - In the implementation block
@property (retain) NSMutableDictionary * changedObjectMap;              //@synthesize changedObjectMap=_changedObjectMap - In the implementation block
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(NSMutableDictionary *)changeHistory;
-(NSMutableSet *)editingContextGroups;
-(void)setEditingContextGroups:(NSMutableSet *)arg1 ;
-(void)setChangeHistory:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)changedObjectMap;
-(void)setChangedObjectMap:(NSMutableDictionary *)arg1 ;
@end

