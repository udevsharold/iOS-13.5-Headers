/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSSPropertyMap;

@interface TSWPLineStyling : NSObject <NSCopying> {

	long long _lineCount;
	unsigned long long _options;
	TSSPropertyMap* _additionalCharacterStylePropertyMap;
	TSSPropertyMap* _overrideCharacterStylePropertyMap;

}

@property (nonatomic,readonly) long long lineCount;                                                      //@synthesize lineCount=_lineCount - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                               //@synthesize options=_options - In the implementation block
@property (nonatomic,retain,readonly) TSSPropertyMap * additionalCharacterStylePropertyMap;              //@synthesize additionalCharacterStylePropertyMap=_additionalCharacterStylePropertyMap - In the implementation block
@property (nonatomic,retain,readonly) TSSPropertyMap * overrideCharacterStylePropertyMap;                //@synthesize overrideCharacterStylePropertyMap=_overrideCharacterStylePropertyMap - In the implementation block
+(id)lineStylingWithLineCount:(long long)arg1 options:(unsigned long long)arg2 additionalCharacterStylePropertyMap:(id)arg3 overrideCharacterStylePropertyMap:(id)arg4 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(long long)lineCount;
-(TSSPropertyMap *)overrideCharacterStylePropertyMap;
-(id)initWithLineCount:(long long)arg1 options:(unsigned long long)arg2 additionalCharacterStylePropertyMap:(id)arg3 overrideCharacterStylePropertyMap:(id)arg4 ;
-(TSSPropertyMap *)additionalCharacterStylePropertyMap;
-(id)_optionsDescription;
@end

