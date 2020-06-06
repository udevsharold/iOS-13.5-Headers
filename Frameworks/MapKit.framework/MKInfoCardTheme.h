/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIColor;


@protocol MKInfoCardTheme <NSObject>
@property (nonatomic,readonly) unsigned long long themeType; 
@property (nonatomic,readonly) NSString * javaScriptName; 
@property (nonatomic,readonly) BOOL isDarkTheme; 
@property (nonatomic,readonly) UIColor * textColor; 
@property (nonatomic,readonly) UIColor * lightTextColor; 
@property (nonatomic,readonly) UIColor * tertiaryTextColor; 
@property (nonatomic,readonly) UIColor * tintColor; 
@property (nonatomic,readonly) UIColor * highlightedTintColor; 
@property (nonatomic,readonly) UIColor * separatorLineColor; 
@property (nonatomic,readonly) UIColor * rowColor; 
@property (nonatomic,readonly) UIColor * selectedRowColor; 
@property (nonatomic,readonly) UIColor * highlightedActionRowTextColor; 
@property (nonatomic,readonly) UIColor * disabledActionRowTextColor; 
@property (nonatomic,readonly) UIColor * disabledActionRowBackgroundColor; 
@property (nonatomic,readonly) UIColor * normalActionRowBackgroundColor; 
@property (nonatomic,readonly) UIColor * normalActionRowBackgroundPressedColor; 
@property (nonatomic,readonly) UIColor * headerPrimaryButtonNormalColor; 
@property (nonatomic,readonly) UIColor * headerPrimaryButtonHighlightedColor; 
@property (nonatomic,readonly) UIColor * transitOntimeTextColor; 
@property (nonatomic,readonly) UIColor * transitDelayedTextColor; 
@property (nonatomic,readonly) UIColor * transitChevronBackgroundColor; 
@property (nonatomic,readonly) UIColor * normalBackgroundColor; 
@property (nonatomic,readonly) UIColor * buttonNormalColor; 
@property (nonatomic,readonly) UIColor * buttonHighlightedColor; 
@required
-(UIColor *)tintColor;
-(UIColor *)textColor;
-(UIColor *)lightTextColor;
-(UIColor *)normalBackgroundColor;
-(BOOL)isDarkTheme;
-(UIColor *)selectedRowColor;
-(UIColor *)rowColor;
-(UIColor *)separatorLineColor;
-(UIColor *)disabledActionRowTextColor;
-(UIColor *)buttonNormalColor;
-(UIColor *)highlightedActionRowTextColor;
-(UIColor *)buttonHighlightedColor;
-(NSString *)javaScriptName;
-(UIColor *)normalActionRowBackgroundColor;
-(UIColor *)transitOntimeTextColor;
-(UIColor *)transitDelayedTextColor;
-(UIColor *)transitChevronBackgroundColor;
-(UIColor *)highlightedTintColor;
-(UIColor *)tertiaryTextColor;
-(unsigned long long)themeType;
-(UIColor *)disabledActionRowBackgroundColor;
-(UIColor *)headerPrimaryButtonHighlightedColor;
-(UIColor *)normalActionRowBackgroundPressedColor;
-(UIColor *)headerPrimaryButtonNormalColor;

@end
