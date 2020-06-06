/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXFontFamilyProvider.h>

@class NSArray, NSString;

@interface SXDocumentFontFamilyProvider : NSObject <SXFontFamilyProvider> {

	NSArray* _fonts;

}

@property (nonatomic,readonly) NSArray * fonts;                     //@synthesize fonts=_fonts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDocument:(id)arg1 ;
-(NSArray *)fonts;
-(id)fontFamilies;
-(id)fontsFromDocument:(id)arg1 ;
@end

