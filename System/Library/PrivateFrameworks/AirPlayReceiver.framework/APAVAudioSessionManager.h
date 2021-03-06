/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
@class AVAudioSession;

@interface APAVAudioSessionManager : NSObject {

	OpaqueFigSimpleMutexRef _mutex;
	AVAudioSession* _session;
	unsigned long long _type;
	BOOL _isSetUp;

}

@property (nonatomic,readonly) AVAudioSession * session;              //@synthesize session=_session - In the implementation block
+(id)mediaSessionManager;
+(id)ambientSessionManager;
-(void)dealloc;
-(id)initWithType:(unsigned long long)arg1 ;
-(AVAudioSession *)session;
-(BOOL)setActive:(BOOL)arg1 error:(id*)arg2 ;
-(void)resetSession;
-(void)setUpSession;
-(BOOL)setSessionMode:(id)arg1 error:(id*)arg2 ;
@end

