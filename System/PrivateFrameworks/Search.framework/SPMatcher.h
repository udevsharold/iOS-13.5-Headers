/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SPMatcher : NSObject {

	void* _matcher;

}
+(id)transcriptionForString:(id)arg1 withLanguage:(id)arg2 ;
-(void)dealloc;
-(BOOL)matches:(id)arg1 ;
-(BOOL)matchesUTF8String:(const char*)arg1 ;
-(id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(unsigned long long)arg3 ;
-(unsigned long long)wordCount;
-(BOOL)matches:(id)arg1 outMatchBits:(unsigned long long*)arg2 ;
-(BOOL)matchesUTF8String:(const char*)arg1 outMatchBits:(unsigned long long*)arg2 ;
@end
