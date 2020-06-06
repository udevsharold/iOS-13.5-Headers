/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, LPLinkHTMLGenerator, DOMElement, NSString;

@interface LPHTMLComponent : NSObject {

	NSMutableArray* _children;
	LPLinkHTMLGenerator* _generator;
	DOMElement* _element;
	NSString* _themePath;

}

@property (nonatomic,__weak,readonly) LPLinkHTMLGenerator * generator;              //@synthesize generator=_generator - In the implementation block
@property (nonatomic,readonly) DOMElement * element;                                //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) NSString * themePath;                                //@synthesize themePath=_themePath - In the implementation block
+(id)ruleDictionaryForStyle:(id)arg1 ;
+(id)styleSet;
+(id)ruleDictionaryForStyleWithDarkInterface:(id)arg1 ;
+(id)additionalGlobalOutOfLineStyleDeclarations;
-(void)addChild:(id)arg1 ;
-(DOMElement *)element;
-(LPLinkHTMLGenerator *)generator;
-(id)initWithTagName:(id)arg1 themePath:(id)arg2 generator:(id)arg3 ;
-(id)childThemePathWithName:(id)arg1 ;
-(NSString *)themePath;
@end

