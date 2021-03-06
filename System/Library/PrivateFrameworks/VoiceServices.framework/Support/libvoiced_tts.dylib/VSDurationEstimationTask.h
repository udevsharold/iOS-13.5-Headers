/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/VSSpeechTaskProtocol.h>

@class VSSpeechRequest, NSError, VSDeviceTTSCore, NSString;

@interface VSDurationEstimationTask : NSOperation <VSSpeechTaskProtocol> {

	VSSpeechRequest* _request;
	NSError* _error;
	double _estimatedDuration;
	VSDeviceTTSCore* _deviceCore;

}

@property (nonatomic,retain) VSDeviceTTSCore * deviceCore;              //@synthesize deviceCore=_deviceCore - In the implementation block
@property (nonatomic,retain) VSSpeechRequest * request;                 //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSError * error;                           //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) double estimatedDuration;                //@synthesize estimatedDuration=_estimatedDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortTermCachedEngines;
+(id)shortTermCachedEngineForVoice:(id)arg1 voiceResource:(id)arg2 ;
-(id)init;
-(id)delegate;
-(NSError *)error;
-(void)cancel;
-(void)resume;
-(void)main;
-(void)setError:(NSError *)arg1 ;
-(void)suspend;
-(void)setRequest:(VSSpeechRequest *)arg1 ;
-(VSSpeechRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(double)estimatedDuration;
-(id)md5hash;
-(VSDeviceTTSCore *)deviceCore;
-(void)setDeviceCore:(VSDeviceTTSCore *)arg1 ;
@end

