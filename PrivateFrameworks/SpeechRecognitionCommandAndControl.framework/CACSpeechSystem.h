/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
@class NSTimer;

@interface CACSpeechSystem : NSObject {

	RXRecognitionSystemRef _recognitionSystemRef;
	CFLocaleRef _currentLocaleRef;
	NSTimer* _setLeadingContextStringDelayTimer;
	NSTimer* _setAdditionalContextStringsDelayTimer;

}
+(void)initialize;
+(id)supportedLanguages;
+(id)speechSystem;
+(void)closeSpeechSystem;
+(void)recognizeString:(id)arg1 ;
+(void)stopPreventingDisplayDimming;
+(void)startPreventingDisplayDimming;
+(id)rxContextDictionaryForLanguageModel:(id)arg1 ;
+(id)valueFromRXContextKey:(id)arg1 rxLanguageObject:(RXLanguageObjectRef)arg2 ;
+(BOOL)isSpeechSystemServerRunning;
-(void)_close;
-(void)setLeadingContextString:(id)arg1 ;
-(void)setAdditionalContextStrings:(id)arg1 ;
-(RXLanguageObjectRef)createRXLanguageObjectRefFromCACLanguageModel:(id)arg1 ignoreBuiltInLMTable:(BOOL)arg2 ;
-(RXRecognitionSystemRef)recognitionSystemRef;
-(id)initLocaleIdentifer:(id)arg1 microphoneIdentifier:(id)arg2 ;
-(id)recognitionLocaleIdentifier;
-(CFLocaleRef)currentLocaleRef;
-(id)resultLanguageModelFromRXLanguageObject:(RXLanguageObjectRef)arg1 ;
-(RXLanguageObjectRef)createRXLanguageObjectRefFromCACLanguageModel:(id)arg1 ;
@end

