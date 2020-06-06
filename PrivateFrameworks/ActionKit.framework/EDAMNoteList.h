/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:39 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSArray;

@interface EDAMNoteList : FATObject {

	NSNumber* _startIndex;
	NSNumber* _totalNotes;
	NSArray* _notes;
	NSArray* _stoppedWords;
	NSArray* _searchedWords;
	NSNumber* _updateCount;

}

@property (nonatomic,retain) NSNumber * startIndex;                //@synthesize startIndex=_startIndex - In the implementation block
@property (nonatomic,retain) NSNumber * totalNotes;                //@synthesize totalNotes=_totalNotes - In the implementation block
@property (nonatomic,retain) NSArray * notes;                      //@synthesize notes=_notes - In the implementation block
@property (nonatomic,retain) NSArray * stoppedWords;               //@synthesize stoppedWords=_stoppedWords - In the implementation block
@property (nonatomic,retain) NSArray * searchedWords;              //@synthesize searchedWords=_searchedWords - In the implementation block
@property (nonatomic,retain) NSNumber * updateCount;               //@synthesize updateCount=_updateCount - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)startIndex;
-(void)setStartIndex:(NSNumber *)arg1 ;
-(NSNumber *)updateCount;
-(void)setUpdateCount:(NSNumber *)arg1 ;
-(NSArray *)notes;
-(void)setNotes:(NSArray *)arg1 ;
-(NSNumber *)totalNotes;
-(void)setTotalNotes:(NSNumber *)arg1 ;
-(NSArray *)stoppedWords;
-(void)setStoppedWords:(NSArray *)arg1 ;
-(NSArray *)searchedWords;
-(void)setSearchedWords:(NSArray *)arg1 ;
@end

