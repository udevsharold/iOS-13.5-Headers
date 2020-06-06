/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTSettings.h>

@interface BSUIAnimationFactorySettings : PTSettings {

	BOOL _slowAnimations;
	double _slowDownFactor;

}

@property (assign,nonatomic) BOOL slowAnimations;                //@synthesize slowAnimations=_slowAnimations - In the implementation block
@property (assign,nonatomic) double slowDownFactor;              //@synthesize slowDownFactor=_slowDownFactor - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)effectiveSlowDownFactor;
-(void)setSlowAnimations:(BOOL)arg1 ;
-(void)setSlowDownFactor:(double)arg1 ;
-(BOOL)slowAnimations;
-(double)slowDownFactor;
@end

