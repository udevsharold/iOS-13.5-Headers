/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TUVideoEffect, NSArray;


@protocol TUVideoEffectsProvider <NSObject>
@property (nonatomic,retain) TUVideoEffect * currentVideoEffect; 
@property (nonatomic,readonly) NSArray * availableVideoEffects; 
@required
-(void)setCurrentVideoEffect:(id)arg1;
-(TUVideoEffect *)currentVideoEffect;
-(NSArray *)availableVideoEffects;
-(id)thumbnailImageForVideoEffectName:(id)arg1;

@end

