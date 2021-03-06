/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVAudioUnitEffect.h>

@class NSArray;

@interface AVAudioUnitEQ : AVAudioUnitEffect

@property (nonatomic,readonly) NSArray * bands; 
@property (assign,nonatomic) float globalGain; 
-(id)init;
-(id)initWithNumberOfBands:(unsigned long long)arg1 ;
-(NSArray *)bands;
-(float)globalGain;
-(void)setGlobalGain:(float)arg1 ;
@end

