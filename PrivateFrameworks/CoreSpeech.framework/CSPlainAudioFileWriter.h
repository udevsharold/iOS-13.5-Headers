/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CoreSpeech-Structs.h>
#import <libobjc.A.dylib/CSAudioFileWriter.h>

@class NSURL, NSString;

@interface CSPlainAudioFileWriter : NSObject <CSAudioFileWriter> {

	BOOL isWriting;
	OpaqueExtAudioFileRef fFile;
	AudioStreamBasicDescription inASBD;
	AudioStreamBasicDescription outASBD;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) NSURL * fileURL;                     //@synthesize fileURL=_fileURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)fileURL;
-(id)initWithFilepath:(id)arg1 ;
-(BOOL)endAudio;
-(id)initWithURL:(id)arg1 inputFormat:(AudioStreamBasicDescription)arg2 outputFormat:(AudioStreamBasicDescription)arg3 ;
-(BOOL)addSamples:(const void*)arg1 numSamples:(long long)arg2 ;
@end

