/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSData, ICNote;

@interface ICNoteData : NSManagedObject {

	BOOL needsToBeSaved;
	BOOL settingNoteData;

}

@property (assign,getter=isSettingNoteData,nonatomic) BOOL settingNoteData; 
@property (nonatomic,retain) NSData * cryptoInitializationVector; 
@property (nonatomic,retain) NSData * cryptoTag; 
@property (assign) BOOL needsToBeSaved; 
@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) ICNote * note; 
@property (nonatomic,readonly) NSData * primitiveData; 
-(void)willAccessValueForKey:(id)arg1 ;
-(void)willSave;
-(void)saveNoteDataIfNeeded;
-(BOOL)needsToBeSaved;
-(BOOL)isSettingNoteData;
-(void)setSettingNoteData:(BOOL)arg1 ;
-(void)setNeedsToBeSaved:(BOOL)arg1 ;
@end

