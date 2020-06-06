/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OADFontReference, OADColor;

@interface OADTableTextStyle : NSObject {

	OADFontReference* mFontReference;
	OADColor* mColor;
	int mBold;
	int mItalic;

}
+(id)defaultStyle;
+(id)defaultColor;
+(id)defaultFontReference;
+(int)defaultBold;
+(int)defaultItalic;
-(id)init;
-(id)description;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void)setBold:(int)arg1 ;
-(id)shallowCopy;
-(int)bold;
-(int)italic;
-(void)setFontReference:(id)arg1 ;
-(void)setItalic:(int)arg1 ;
-(id)fontReference;
-(void)applyOverridesFrom:(id)arg1 ;
@end

