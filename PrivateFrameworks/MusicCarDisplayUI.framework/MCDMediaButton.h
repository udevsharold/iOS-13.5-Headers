/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <MusicCarDisplayUI/MCDButton.h>

@interface MCDMediaButton : MCDButton {

	double _cornerRadius;

}

@property (assign,nonatomic) double cornerRadius;              //@synthesize cornerRadius=_cornerRadius - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(BOOL)canShowHighlight;
-(double)focusLayerCornerRadius;
-(id)colorForKnobFocusLayer;
@end

