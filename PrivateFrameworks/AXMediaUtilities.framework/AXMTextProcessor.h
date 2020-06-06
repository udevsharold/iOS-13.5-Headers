/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXMSpellChecker, AXMLexiconManager, AXMTagger, AXMDataDetector, AXMSpeechFormatterCache, NSDictionary, NSMutableDictionary;

@interface AXMTextProcessor : NSObject {

	AXMSpellChecker* _spellChecker;
	AXMLexiconManager* _lexiconManager;
	AXMTagger* _tagger;
	AXMDataDetector* _dataDetector;
	AXMSpeechFormatterCache* _speechFormatterCache;
	NSDictionary* _globalWhitelistedWords;
	NSMutableDictionary* _localeWhitelistedWords;

}
-(id)init;
-(id)dataDetector;
-(id)lexiconManager;
-(id)tagger;
-(id)_preprocessText:(id)arg1 diagnostics:(id)arg2 ;
-(id)spellChecker;
-(id)processText:(id)arg1 withOperation:(id)arg2 ;
@end

