/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSWPTextStatistics : NSObject <NSCopying> {

	unsigned long long _wordCount;
	unsigned long long _charactersNoWhiteSpace;
	unsigned long long _paragraphCount;
	BOOL _isAccurate;

}

@property (assign,nonatomic) unsigned long long wordCount;                           //@synthesize wordCount=_wordCount - In the implementation block
@property (assign,nonatomic) unsigned long long charactersNoWhiteSpace;              //@synthesize charactersNoWhiteSpace=_charactersNoWhiteSpace - In the implementation block
@property (assign,nonatomic) unsigned long long paragraphCount;                      //@synthesize paragraphCount=_paragraphCount - In the implementation block
@property (assign,nonatomic) BOOL isAccurate;                                        //@synthesize isAccurate=_isAccurate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)resetStatistics;
-(unsigned long long)wordCount;
-(unsigned long long)paragraphCount;
-(void)setWordCount:(unsigned long long)arg1 ;
-(BOOL)isAccurate;
-(void)setCharactersNoWhiteSpace:(unsigned long long)arg1 ;
-(void)setParagraphCount:(unsigned long long)arg1 ;
-(void)setIsAccurate:(BOOL)arg1 ;
-(unsigned long long)charactersNoWhiteSpace;
-(void)setTextStatistics:(id)arg1 ;
-(void)addTextStatistics:(id)arg1 ;
-(void)removeTextStatistics:(id)arg1 ;
@end

