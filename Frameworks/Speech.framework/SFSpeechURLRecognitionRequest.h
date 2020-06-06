/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Speech.framework/Speech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Speech/SFSpeechRecognitionRequest.h>

@class NSURL;

@interface SFSpeechURLRecognitionRequest : SFSpeechRecognitionRequest {

	NSURL* _URL;

}

@property (nonatomic,copy,readonly) NSURL * URL;              //@synthesize URL=_URL - In the implementation block
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(id)_startedConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(long long)arg3 requestIdentifier:(id)arg4 ;
@end

