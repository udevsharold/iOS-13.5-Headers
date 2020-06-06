/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DESRecordStore;

@interface TITypingDESRecordWriter : NSObject {

	DESRecordStore* _typingDataStore;

}

@property (nonatomic,retain) DESRecordStore * typingDataStore;              //@synthesize typingDataStore=_typingDataStore - In the implementation block
-(id)init;
-(void)storeTypingSession:(id)arg1 containsCP:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shouldRecordToDES;
-(void)storeAlignedSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchRecords:(/*^block*/id)arg1 ;
-(void)clearStoredRecordsWithCompletionHandler:(/*^block*/id)arg1 ;
-(DESRecordStore *)typingDataStore;
-(void)setTypingDataStore:(DESRecordStore *)arg1 ;
@end

