/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Speech.framework/Speech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFDictationDelegate <NSObject>
@optional
-(void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(BOOL)arg4 final:(BOOL)arg5;
-(void)dictationConnection:(id)arg1 didRecognizePartialResult:(id)arg2;
-(void)dictationConnection:(id)arg1 didBeginLocalRecognitionWithModelInfo:(id)arg2;
-(void)dictationConnnectionDidChangeAvailability:(id)arg1;
-(void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;
-(void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
-(void)dictationConnection:(id)arg1 speechRecordingDidBeginWithOptions:(id)arg2;
-(void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
-(void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
-(void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
-(void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
-(void)dictationConnection:(id)arg1 didDetectLanguage:(id)arg2 confidenceScores:(id)arg3;
-(void)dictationConnection:(id)arg1 didDetectLanguage:(id)arg2 confidenceScores:(id)arg3 isConfident:(BOOL)arg4;
-(void)dictationConnection:(id)arg1 didRecognizeMultilingualSpeech:(id)arg2;
-(void)dictationConnection:(id)arg1 languageDetectorFailedWithError:(id)arg2;
-(void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4;
-(void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4 replacingPreviousPhrasesCount:(unsigned long long)arg5;
-(void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
-(void)dictationConnection:(id)arg1 didProcessAudioDuration:(double)arg2;
-(void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;
-(void)dictationConnection:(id)arg1 didRecognizeTranscriptionObjects:(id)arg2 languageModel:(id)arg3;
-(void)dictationConnection:(id)arg1 didFinishWritingAudioFile:(id)arg2 error:(id)arg3;
-(void)dictationConnection:(id)arg1 didRecognizePackage:(id)arg2;

@end

