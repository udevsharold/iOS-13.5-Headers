/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProximityUI/PRDataRecorderBase.h>
#import <libobjc.A.dylib/PRItemLocalizerDataRecorder.h>

@interface PRDataRecorder : PRDataRecorderBase <PRItemLocalizerDataRecorder>
-(id)init;
-(void)start;
-(void)stopAndDiscard;
-(id)stopAndSave;
-(id)writeToURL;
-(void)discardRecording;
-(void)saveScreenRecordingToURL:(id)arg1 ;
@end

