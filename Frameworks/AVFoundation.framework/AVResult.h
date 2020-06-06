/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSError;

@interface AVResult : NSObject {

	OpaqueFigSimpleMutexRef _ivarAccessLock;
	long long _status;
	NSError* _error;

}

@property (getter=isFailed,readonly) BOOL failed; 
-(id)init;
-(void)dealloc;
-(BOOL)isFailed;
-(void)markAsFailedWithError:(id)arg1 ;
-(void)markAsCompleted;
-(void)getStatus:(long long*)arg1 error:(id*)arg2 ;
@end

