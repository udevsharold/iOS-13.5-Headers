/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMTranscoderTelemetry : NSObject {

	unsigned char _signpostId;

}
-(id)init;
-(long long)_telemetryImageTypeForUTI:(id)arg1 ;
-(void)_emitSignpostTranscodeRange:(long long)arg1 begin:(BOOL)arg2 ;
-(void)_emitSignpostPreviewGenerationRange:(long long)arg1 begin:(BOOL)arg2 ;
-(void)emitTranscodeBeginFromUTI:(id)arg1 ;
-(void)emitTranscodeEndFromUTI:(id)arg1 ;
-(void)emitPreviewGenerationBeginFromUTI:(id)arg1 ;
-(void)emitPreviewGenerationEndFromUTI:(id)arg1 ;
-(void)emitSignpostNoTranscodeFromUTI:(id)arg1 ;
-(void)emitSignpostTranscodeStepForDestinationUTI:(id)arg1 ;
-(void)emitSignpostTranscodeFinalForDestinationUTI:(id)arg1 ;
-(void)emitSignpostTranscodeSkipSourceUTI:(id)arg1 ;
@end

