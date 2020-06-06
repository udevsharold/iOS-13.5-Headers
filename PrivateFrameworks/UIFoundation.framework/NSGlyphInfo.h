/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSGlyphInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _baseString;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)glyphInfoWithGlyph:(unsigned)arg1 forFont:(id)arg2 baseString:(id)arg3 ;
+(id)glyphInfoWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3 ;
+(id)glyphInfoWithGlyphName:(id)arg1 forFont:(id)arg2 baseString:(id)arg3 ;
+(id)glyphInfoWithCGGlyph:(unsigned short)arg1 forFont:(id)arg2 baseString:(id)arg3 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForKeyedArchiver;
-(id)baseString;
-(id)_baseString;
-(unsigned long long)characterIdentifier;
-(unsigned long long)characterCollection;
-(id)glyphName;
-(unsigned)_glyphForFont:(id)arg1 baseString:(id)arg2 ;
-(id)initWithBaseString:(id)arg1 ;
-(unsigned short)glyphID;
@end

