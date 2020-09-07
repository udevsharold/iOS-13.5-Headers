/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EDImmutableObject.h>

@class EDResources, NSString, EDCollection;

@interface EDPhoneticInfo : NSObject <NSCopying, EDImmutableObject> {

	EDResources* mResources;
	unsigned long long mFontIndex;
	NSString* mString;
	int mType;
	int mAlign;
	EDCollection* mRuns;
	BOOL mDoNotModify;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)phoneticInfoWithResources:(id)arg1 ;
-(id)string;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)appendString:(id)arg1 ;
-(void)setString:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)font;
-(int)align;
-(void)setAlign:(int)arg1 ;
-(void)prependString:(id)arg1 ;
-(unsigned long long)fontIndex;
-(id)initWithResources:(id)arg1 ;
-(void)setFontIndex:(unsigned long long)arg1 ;
-(id)runs;
-(void)setDoNotModify:(BOOL)arg1 ;
-(BOOL)isEqualToEDPhoneticInfo:(id)arg1 ;
@end
