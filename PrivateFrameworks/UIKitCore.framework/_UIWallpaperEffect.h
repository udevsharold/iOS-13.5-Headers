/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIVisualEffect.h>

@class UIColor;

@interface _UIWallpaperEffect : UIVisualEffect {

	UIColor* _color;

}
+(id)wallpaperEffectWithStyle:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(long long)_expectedUsage;
-(id)_initWithStyle:(long long)arg1 ;
@end

