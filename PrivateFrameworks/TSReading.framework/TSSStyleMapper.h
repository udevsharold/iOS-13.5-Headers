/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSKStyleMapper.h>

@class TSSStylesheet, TSKAddedToDocumentContext, TSURetainedPointerKeyDictionary, NSMutableArray, NSString;

@interface TSSStyleMapper : NSObject <TSKStyleMapper> {

	TSSStylesheet* _targetStylesheet;
	TSSStylesheet* _targetThemeStylesheet;
	TSKAddedToDocumentContext* _dolcContext;
	TSURetainedPointerKeyDictionary* _styleMap;
	NSMutableArray* _mappingContext;
	BOOL _forceMatchStyle;
	BOOL _varyInThemeStylesheet;

}

@property (nonatomic,readonly) TSSStylesheet * targetStylesheet; 
@property (assign,nonatomic) BOOL forceMatchStyle;                            //@synthesize forceMatchStyle=_forceMatchStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)_mappedStyleForStyle:(id)arg1 depth:(unsigned long long)arg2 ;
-(id)pTargetParentForStyle:(id)arg1 withParentIdentifier:(id)arg2 ;
-(id)pCascadedFindExistingRootlessStyle:(id)arg1 propertyMap:(id)arg2 ;
-(id)createStyleForStyle:(id)arg1 withPropertyMap:(id)arg2 ;
-(id)mappedStyleForStyle:(id)arg1 ;
-(void)varyInThemeStylesheetForDurationOfBlock:(/*^block*/id)arg1 ;
-(TSSStylesheet *)targetStylesheet;
-(void)pushMappingContext:(id)arg1 ;
-(void)popMappingContext:(id)arg1 ;
-(id)mappedStyleForStyle:(id)arg1 inThemeStylesheet:(BOOL)arg2 ;
-(void)varyInThemeStylesheetIf:(BOOL)arg1 forDurationOfBlock:(/*^block*/id)arg2 ;
-(id)initWithTargetStylesheet:(id)arg1 newStyleDOLCContext:(id)arg2 ;
-(BOOL)forceMatchStyle;
-(void)setForceMatchStyle:(BOOL)arg1 ;
@end

