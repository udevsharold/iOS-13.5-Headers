/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor, _UIBackdropViewSettings;

@interface SBLockOverlayStyleProperties : NSObject {

	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	UIColor* _tintColor;
	double _tintAlpha;
	double _blurRadius;
	unsigned long long _style;
	long long _quality;
	_UIBackdropViewSettings* _settings;

}

@property (nonatomic,readonly) double tintAlpha;                       //@synthesize tintAlpha=_tintAlpha - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                    //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,readonly) double blurRadius;                      //@synthesize blurRadius=_blurRadius - In the implementation block
@property (nonatomic,readonly) unsigned long long style;               //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long graphicsQuality;              //@synthesize quality=_quality - In the implementation block
-(id)description;
-(unsigned long long)style;
-(UIColor *)tintColor;
-(long long)graphicsQuality;
-(double)blurRadius;
-(void)_configure;
-(double)tintAlpha;
-(id)initWithStyle:(unsigned long long)arg1 quality:(long long)arg2 ;
-(id)_stringForStyle;
-(id)_stringForQuality;
-(id)_settingsForStyle;
@end

