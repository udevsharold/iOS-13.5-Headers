/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIVibrancyEffectImpl.h>

@class UIVibrancyEffect;

@interface _UIVibrancyEffectLegacyImpl : _UIVibrancyEffectImpl {

	long long _style;
	BOOL _invertAutomaticStyle;
	BOOL _ignoreSimpleVibrancy;
	UIVibrancyEffect* _effect;

}

@property (assign,nonatomic) UIVibrancyEffect * effect;              //@synthesize effect=_effect - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)style;
-(void)setEffect:(UIVibrancyEffect *)arg1 ;
-(BOOL)invertAutomaticStyle;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(id)implementationForUserInterfaceStyle:(long long)arg1 ;
-(void)appendDescriptionTo:(id)arg1 ;
-(UIVibrancyEffect *)effect;
-(id)initWithStyle:(long long)arg1 invertAutomaticStyle:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 invertAutomaticStyle:(BOOL)arg2 ignoreSimpleVibrancy:(BOOL)arg3 ;
@end

