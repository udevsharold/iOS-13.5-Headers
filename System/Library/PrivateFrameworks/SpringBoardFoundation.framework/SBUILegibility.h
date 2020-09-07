/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _UILegibilitySettings;


@protocol SBUILegibility <SBUIOptionalLegibility>
@property (assign,nonatomic) double strength; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@required
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(id)arg1;
-(void)setStrength:(double)arg1;
-(double)strength;

@end
