/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/STAceObjectHandler.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject;

@interface STAceRecorder : NSObject <STAceObjectHandler> {

	NSMutableDictionary* _timestampToAceObjs;
	NSMutableArray* _speechLogs;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(void)_startRecording;
-(void)_finishRecording;
-(void)handleClientCommand:(id)arg1 ;
-(void)handleServerCommand:(id)arg1 ;
-(BOOL)_createDirectoryIfNeededWithBaseURL:(id)arg1 ;
-(id)_libraryURLWithBaseURL:(id)arg1 date:(id)arg2 fileName:(id)arg3 ;
@end

