/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray;

@interface FCCKPrivateSaveRecordZonesOperation : FCCKPrivateDatabaseOperation {

	NSArray* _recordZonesToSave;
	/*^block*/id _saveRecordZonesCompletionBlock;
	NSArray* _resultSavedRecordZones;

}

@property (nonatomic,retain) NSArray * resultSavedRecordZones;              //@synthesize resultSavedRecordZones=_resultSavedRecordZones - In the implementation block
@property (nonatomic,copy) NSArray * recordZonesToSave;                     //@synthesize recordZonesToSave=_recordZonesToSave - In the implementation block
@property (nonatomic,copy) id saveRecordZonesCompletionBlock;               //@synthesize saveRecordZonesCompletionBlock=_saveRecordZonesCompletionBlock - In the implementation block
-(NSArray *)recordZonesToSave;
-(void)setRecordZonesToSave:(NSArray *)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setSaveRecordZonesCompletionBlock:(id)arg1 ;
-(void)setResultSavedRecordZones:(NSArray *)arg1 ;
-(id)saveRecordZonesCompletionBlock;
-(NSArray *)resultSavedRecordZones;
@end
