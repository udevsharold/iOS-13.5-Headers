/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VoiceServices/VoiceServices-Structs.h>
@class NSArray, NSString;

@interface VSTextPreProcessor : NSObject {

	NSArray* _rules;
	NSString* _languageID;
	CFStringTokenizerRef _tokenizer;

}
-(void)dealloc;
-(id)initWithContentsOfPath:(id)arg1 languageIdentifier:(id)arg2 ;
-(id)processedTextFromString:(id)arg1 ;
@end

