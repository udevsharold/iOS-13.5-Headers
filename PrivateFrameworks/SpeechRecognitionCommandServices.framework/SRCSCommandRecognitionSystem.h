/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpeechRecognitionCommandServices/SpeechRecognitionCommandServices-Structs.h>
@class NSString, NSMutableArray, NSMutableDictionary, NSArray;

@interface SRCSCommandRecognitionSystem : NSObject {

	NSString* _targetType;
	NSMutableArray* _recognizers;
	NSMutableDictionary* _resolvedBuiltInIdentifiers;
	NSString* _localeIdentifier;

}

@property (retain,readonly) NSString * localeIdentifier;              //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (retain,readonly) NSArray * recognizers;                    //@synthesize recognizers=_recognizers - In the implementation block
-(NSString *)localeIdentifier;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(id)targetType;
-(NSArray *)recognizers;
-(id)languageModelTreeForBuiltInLMIdentifier:(id)arg1 ;
-(void)_initalizeLanguageModelTree;
-(id)spokenCommandFromRecognizedAFSpeechPhrases:(id)arg1 ;
-(void)addRecognizer:(id)arg1 ;
-(id)spokenCommandFromRecognizedEARTokenSausage:(CFArrayRef)arg1 ;
-(void)_testWithPhrases:(id)arg1 ;
@end

