/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AUPasscodeDecoder, AUAudioUnitOfflineProcessor, NSMutableArray;

@interface APCDecoderProcessor : NSObject {

	AUPasscodeDecoder* _decoderAU;
	AUAudioUnitOfflineProcessor* _processor;
	NSMutableArray* _payloadsReceived;

}
-(id)run;
-(BOOL)getResultData:(id*)arg1 ;
-(id)initWithInputURL:(id)arg1 codecConfig:(id)arg2 resultData:(id)arg3 error:(id*)arg4 ;
-(id)initWithInputURL:(id)arg1 codecConfig:(id)arg2 error:(id*)arg3 ;
@end

