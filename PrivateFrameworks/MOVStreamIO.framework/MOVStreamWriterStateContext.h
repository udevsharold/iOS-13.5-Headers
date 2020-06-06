/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSError;


@protocol MOVStreamWriterStateContext <NSObject>
@property (retain) NSArray * movMetadataItems; 
@property (retain) NSError * criticalError; 
@required
-(void)setCriticalError:(id)arg1;
-(void)processFinishRecording;
-(NSError *)criticalError;
-(void)setMovMetadataItems:(id)arg1;
-(void)finishAVWriter;
-(void)executePrepareToRecordWithMovieMetadata:(id)arg1;
-(void)finishAndDrainFifoFirst;
-(void)deleteMOVFile;
-(void)deleteFileOnCancel;
-(void)processCancelRecording;
-(void)processForceFinishRecording;
-(NSArray *)movMetadataItems;

@end

