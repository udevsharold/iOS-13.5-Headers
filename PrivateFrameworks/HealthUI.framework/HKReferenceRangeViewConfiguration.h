/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor, UIFont, NSString;

@interface HKReferenceRangeViewConfiguration : NSObject {

	BOOL _hideReferenceRangeValues;
	double _currentValueToReferenceValuePadding;
	double _horizontalPadding;
	double _referenceRangeViewHeight;
	UIColor* _referenceRangeViewColor;
	UIColor* _referenceRangeViewBorderColor;
	UIFont* _currentValueValueFontWithRange;
	UIFont* _currentValueValueFontWithoutRange;
	UIFont* _currentValueUnitFont;
	UIFont* _dynamicTypeAnchorFont;
	UIColor* _currentValueTextColor;
	UIColor* _currentValueUnitTextColor;
	UIColor* _referenceValueTextColor;
	double _referenceValueYOffset;
	double _currentValueTextSize;
	NSString* _currentValueUnitTextStyle;
	long long _currentValueNumLinesIfNoRange;
	NSString* _referenceRangeTextStyle;
	Class _labelClass;

}

@property (assign,nonatomic) double currentValueToReferenceValuePadding;              //@synthesize currentValueToReferenceValuePadding=_currentValueToReferenceValuePadding - In the implementation block
@property (assign,nonatomic) double horizontalPadding;                                //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
@property (assign,nonatomic) double referenceRangeViewHeight;                         //@synthesize referenceRangeViewHeight=_referenceRangeViewHeight - In the implementation block
@property (nonatomic,retain) UIColor * referenceRangeViewColor;                       //@synthesize referenceRangeViewColor=_referenceRangeViewColor - In the implementation block
@property (nonatomic,retain) UIColor * referenceRangeViewBorderColor;                 //@synthesize referenceRangeViewBorderColor=_referenceRangeViewBorderColor - In the implementation block
@property (nonatomic,retain) UIFont * currentValueValueFontWithRange;                 //@synthesize currentValueValueFontWithRange=_currentValueValueFontWithRange - In the implementation block
@property (nonatomic,retain) UIFont * currentValueValueFontWithoutRange;              //@synthesize currentValueValueFontWithoutRange=_currentValueValueFontWithoutRange - In the implementation block
@property (nonatomic,retain) UIFont * currentValueUnitFont;                           //@synthesize currentValueUnitFont=_currentValueUnitFont - In the implementation block
@property (nonatomic,retain) UIFont * dynamicTypeAnchorFont;                          //@synthesize dynamicTypeAnchorFont=_dynamicTypeAnchorFont - In the implementation block
@property (nonatomic,retain) UIColor * currentValueTextColor;                         //@synthesize currentValueTextColor=_currentValueTextColor - In the implementation block
@property (nonatomic,retain) UIColor * currentValueUnitTextColor;                     //@synthesize currentValueUnitTextColor=_currentValueUnitTextColor - In the implementation block
@property (nonatomic,retain) UIColor * referenceValueTextColor;                       //@synthesize referenceValueTextColor=_referenceValueTextColor - In the implementation block
@property (assign,nonatomic) double referenceValueYOffset;                            //@synthesize referenceValueYOffset=_referenceValueYOffset - In the implementation block
@property (assign,nonatomic) double currentValueTextSize;                             //@synthesize currentValueTextSize=_currentValueTextSize - In the implementation block
@property (nonatomic,copy) NSString * currentValueUnitTextStyle;                      //@synthesize currentValueUnitTextStyle=_currentValueUnitTextStyle - In the implementation block
@property (assign,nonatomic) long long currentValueNumLinesIfNoRange;                 //@synthesize currentValueNumLinesIfNoRange=_currentValueNumLinesIfNoRange - In the implementation block
@property (nonatomic,copy) NSString * referenceRangeTextStyle;                        //@synthesize referenceRangeTextStyle=_referenceRangeTextStyle - In the implementation block
@property (assign,nonatomic) BOOL hideReferenceRangeValues;                           //@synthesize hideReferenceRangeValues=_hideReferenceRangeValues - In the implementation block
@property (assign,nonatomic) Class labelClass;                                        //@synthesize labelClass=_labelClass - In the implementation block
+(id)defaultConfiguration;
+(id)annotationEmbeddedConfiguration;
-(void)setHorizontalPadding:(double)arg1 ;
-(double)horizontalPadding;
-(Class)labelClass;
-(UIFont *)dynamicTypeAnchorFont;
-(UIFont *)currentValueValueFontWithRange;
-(UIFont *)currentValueValueFontWithoutRange;
-(UIFont *)currentValueUnitFont;
-(BOOL)hideReferenceRangeValues;
-(UIColor *)referenceRangeViewBorderColor;
-(double)referenceRangeViewHeight;
-(double)currentValueToReferenceValuePadding;
-(double)referenceValueYOffset;
-(UIColor *)referenceRangeViewColor;
-(NSString *)referenceRangeTextStyle;
-(UIColor *)referenceValueTextColor;
-(UIColor *)currentValueTextColor;
-(long long)currentValueNumLinesIfNoRange;
-(UIColor *)currentValueUnitTextColor;
-(void)setDynamicTypeAnchorFont:(UIFont *)arg1 ;
-(void)setCurrentValueToReferenceValuePadding:(double)arg1 ;
-(void)setReferenceRangeViewColor:(UIColor *)arg1 ;
-(void)setReferenceRangeViewBorderColor:(UIColor *)arg1 ;
-(void)setReferenceRangeViewHeight:(double)arg1 ;
-(void)setCurrentValueTextColor:(UIColor *)arg1 ;
-(void)setCurrentValueUnitTextColor:(UIColor *)arg1 ;
-(void)setReferenceValueTextColor:(UIColor *)arg1 ;
-(void)setCurrentValueTextSize:(double)arg1 ;
-(void)setCurrentValueUnitTextStyle:(NSString *)arg1 ;
-(void)setCurrentValueNumLinesIfNoRange:(long long)arg1 ;
-(void)setReferenceRangeTextStyle:(NSString *)arg1 ;
-(void)setReferenceValueYOffset:(double)arg1 ;
-(void)setLabelClass:(Class)arg1 ;
-(void)setCurrentValueValueFontWithoutRange:(UIFont *)arg1 ;
-(void)setCurrentValueValueFontWithRange:(UIFont *)arg1 ;
-(void)setCurrentValueUnitFont:(UIFont *)arg1 ;
-(void)setHideReferenceRangeValues:(BOOL)arg1 ;
-(double)currentValueTextSize;
-(NSString *)currentValueUnitTextStyle;
@end

