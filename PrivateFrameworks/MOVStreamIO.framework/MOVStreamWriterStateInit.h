/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MOVStreamIO/MOVStreamWriterState.h>

@class NSString;

@interface MOVStreamWriterStateInit : NSObject <MOVStreamWriterState>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) long long writerStatus; 
-(void)activateWithContext:(id)arg1 ;
-(id)prepareRecording:(id)arg1 ;
-(BOOL)canConfigure:(id)arg1 ;
-(BOOL)canAppendData:(id)arg1 ;
-(BOOL)canWriteData:(id)arg1 ;
-(BOOL)stopWriterWhenFifosAreEmpty:(id)arg1 ;
-(id)prepareFinished:(id)arg1 ;
-(id)finishRecording:(id)arg1 ;
-(id)forceFinishRecording:(id)arg1 ;
-(id)nextFinishStep:(id)arg1 ;
-(id)cancelRecording:(id)arg1 ;
-(id)finishedCancelRecording:(id)arg1 ;
-(id)criticalErrorOccurred:(id)arg1 context:(id)arg2 ;
-(long long)writerStatus;
@end

