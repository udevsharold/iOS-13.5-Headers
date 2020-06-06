/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPHTMLComponent.h>

@class LPImageViewStyle, NSString, NSArray;

@interface LPHTMLMultipleImageComponent : LPHTMLComponent {

	LPImageViewStyle* _style;
	NSString* _themePath;
	NSArray* _images;

}
+(id)ruleDictionaryForStyle:(id)arg1 ;
+(id)styleSet;
+(id)ruleDictionaryForStyleWithDarkInterface:(id)arg1 ;
+(id)additionalGlobalOutOfLineStyleDeclarations;
+(id)baseRules;
+(id)additionalRulesForStyle:(id)arg1 ;
-(void)buildComponents;
-(id)initWithImages:(id)arg1 style:(id)arg2 themePath:(id)arg3 generator:(id)arg4 constrainHeight:(BOOL)arg5 ;
-(void)_computeRowAndColumnSpecificationsForImages:(id)arg1 ;
@end

