/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NLLexiconEntry : NSObject {

	NSString* _string;
	unsigned _tokenID;
	unsigned long long _flags;
	double _probability;

}

@property (copy,readonly) NSString * string; 
@property (readonly) unsigned long long flags; 
@property (readonly) double probability; 
+(id)entryWithString:(id)arg1 tokenID:(unsigned)arg2 flags:(unsigned long long)arg3 probability:(double)arg4 ;
-(NSString *)string;
-(unsigned long long)flags;
-(unsigned)tokenID;
-(double)probability;
-(id)initWithString:(id)arg1 tokenID:(unsigned)arg2 flags:(unsigned long long)arg3 probability:(double)arg4 ;
@end

