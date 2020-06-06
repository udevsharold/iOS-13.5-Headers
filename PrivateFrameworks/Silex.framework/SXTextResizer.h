/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SXColumnLayout, SXComponentTextStyle;

@interface SXTextResizer : NSObject {

	BOOL _fontScalingEnabled;
	SXColumnLayout* _columnLayout;
	SXComponentTextStyle* _defaultTextStyle;

}

@property (nonatomic,readonly) SXColumnLayout * columnLayout;                        //@synthesize columnLayout=_columnLayout - In the implementation block
@property (nonatomic,readonly) SXComponentTextStyle * defaultTextStyle;              //@synthesize defaultTextStyle=_defaultTextStyle - In the implementation block
@property (nonatomic,readonly) BOOL fontScalingEnabled;                              //@synthesize fontScalingEnabled=_fontScalingEnabled - In the implementation block
-(SXColumnLayout *)columnLayout;
-(id)initWithColumnLayout:(id)arg1 defaultTextStyle:(id)arg2 fontScalingEnabled:(BOOL)arg3 ;
-(SXComponentTextStyle *)defaultTextStyle;
-(BOOL)fontScalingEnabled;
-(long long)resizeTextSize:(long long)arg1 fontResizingThreshold:(double)arg2 fontSizeConstant:(double)arg3 contentSizeCategory:(id)arg4 fontTextStyle:(id)arg5 ;
-(double)normalizedFontSizeForSize:(double)arg1 ;
-(unsigned long long)resizeDropCapNumberOfLines:(long long)arg1 ;
@end

