/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIBarBackgroundLayout.h>

@class _UIBarBackgroundAppearanceData;

@interface _UIBarBackgroundLayoutModern : _UIBarBackgroundLayout {

	BOOL _backgroundsAreSame;
	_UIBarBackgroundAppearanceData* _backgroundData1;
	_UIBarBackgroundAppearanceData* _backgroundData2;

}

@property (nonatomic,retain) _UIBarBackgroundAppearanceData * backgroundData1;              //@synthesize backgroundData1=_backgroundData1 - In the implementation block
@property (nonatomic,retain) _UIBarBackgroundAppearanceData * backgroundData2;              //@synthesize backgroundData2=_backgroundData2 - In the implementation block
-(void)describeInto:(id)arg1 ;
-(BOOL)shouldUseExplicitGeometry;
-(BOOL)bg2Enabled;
-(BOOL)bg1HasShadow;
-(id)bg1ShadowImage;
-(BOOL)bg2HasShadow;
-(id)bg2ShadowImage;
-(id)bg1Effects;
-(id)bg1Image;
-(id)bg1Color;
-(id)bg2Effects;
-(id)bg2Image;
-(id)bg2Color;
-(double)bg1Alpha;
-(long long)bg1ImageMode;
-(id)bg1ShadowEffect;
-(id)bg1ShadowColor;
-(id)bg1ShadowTint;
-(double)bg1ShadowAlpha;
-(double)bg2Alpha;
-(long long)bg2ImageMode;
-(id)bg2ShadowEffect;
-(id)bg2ShadowColor;
-(id)bg2ShadowTint;
-(double)bg2ShadowAlpha;
-(id)initWithLayout:(id)arg1 ;
-(void)setBackgroundData1:(_UIBarBackgroundAppearanceData *)arg1 ;
-(void)setBackgroundData2:(_UIBarBackgroundAppearanceData *)arg1 ;
-(_UIBarBackgroundAppearanceData *)backgroundData1;
-(_UIBarBackgroundAppearanceData *)backgroundData2;
@end

