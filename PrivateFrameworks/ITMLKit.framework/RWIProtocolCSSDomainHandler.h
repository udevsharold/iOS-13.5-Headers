/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RWIProtocolCSSDomainHandler <NSObject>
@optional
-(void)enableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)disableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)getMatchedStylesForNodeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 includePseudo:(BOOL*)arg4 includeInherited:(BOOL*)arg5;
-(void)getInlineStylesForNodeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3;
-(void)getComputedStyleForNodeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3;
-(void)getAllStyleSheetsWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)getStyleSheetWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 styleSheetId:(id)arg3;
-(void)getStyleSheetTextWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 styleSheetId:(id)arg3;
-(void)setStyleSheetTextWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 styleSheetId:(id)arg3 text:(id)arg4;
-(void)setStyleTextWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 styleId:(id)arg3 text:(id)arg4;
-(void)setRuleSelectorWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ruleId:(id)arg3 selector:(id)arg4;
-(void)createStyleSheetWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 frameId:(id)arg3;
-(void)addRuleWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 styleSheetId:(id)arg3 selector:(id)arg4;
-(void)getSupportedCSSPropertiesWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)getSupportedSystemFontFamilyNamesWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)forcePseudoStateWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 forcedPseudoClasses:(id)arg4;

@end

