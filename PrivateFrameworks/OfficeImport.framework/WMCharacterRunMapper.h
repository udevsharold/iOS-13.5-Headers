/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class WDCharacterRun, WMStyle, NSString;

@interface WMCharacterRunMapper : CMMapper {

	WDCharacterRun* wdCharacterRun;
	WMStyle* mStyle;
	float mFontSizeBumpFactor;
	NSString* mText;
	BOOL mIsDeleted;

}
+(void)addNonCollapsableSpanAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithText:(id)arg1 ;
-(BOOL)isDeleted;
-(id)baseStyle;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(int)defaultTabWidth;
-(id)copyCharacterStyle;
-(unsigned)countAndStripLeadingTabs;
-(void)mapSubstring:(id)arg1 at:(id)arg2 ;
-(void)mapTabs:(unsigned)arg1 at:(id)arg2 afterText:(id)arg3 ;
-(id)initWithWDCharacterRun:(id)arg1 parent:(id)arg2 ;
-(void)map1At:(id)arg1 withState:(id)arg2 ;
-(id)boldStyle;
@end

