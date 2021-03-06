/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCVoiceShortcutBlacklist : NSObject
+(id)defaults;
+(BOOL)isPhraseBlacklisted:(id)arg1 ;
+(void)populateBlacklistStatusOnVoiceShortcuts:(id)arg1 ;
+(unsigned long long)blacklistStatusOfVoiceShortcut:(id)arg1 ;
+(BOOL)isAppBlacklisted:(id)arg1 ;
+(BOOL)updateBlacklistFromDirectory:(id)arg1 ;
+(BOOL)updateBlacklistWithFile:(id)arg1 ;
+(void)clearBlacklist;
+(void)updatePhraseBlacklistFromBlacklist:(id)arg1 ;
+(void)updateAppBlacklistFromBlacklist:(id)arg1 ;
@end

