/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIFeedbackData.h>
@class _UIFeedbackParameters;


@protocol _UIFeedbackData <NSObject>
@property (nonatomic,readonly) unsigned long long effectiveEventType; 
@property (nonatomic,readonly) double effectiveDelay; 
@property (nonatomic,readonly) _UIFeedbackParameters * hapticParameters; 
@property (nonatomic,readonly) _UIFeedbackParameters * audioParameters; 
@property (nonatomic,readonly) unsigned long long effectiveEnabledFeedbackTypes; 
@property (nonatomic,readonly) unsigned effectiveSystemSoundID; 
@required
-(_UIFeedbackParameters *)hapticParameters;
-(_UIFeedbackParameters *)audioParameters;
-(unsigned long long)effectiveEventType;
-(double)effectiveDelay;
-(unsigned long long)effectiveEnabledFeedbackTypes;
-(unsigned)effectiveSystemSoundID;

@end


@class _UIFeedbackParameters, NSString;

@interface _UIFeedbackData : NSObject <_UIFeedbackData> {

	unsigned _effectiveSystemSoundID;
	unsigned long long _effectiveEventType;
	double _effectiveDelay;
	_UIFeedbackParameters* _hapticParameters;
	_UIFeedbackParameters* _audioParameters;
	unsigned long long _effectiveEnabledFeedbackTypes;

}

@property (assign,setter=_setEffectiveEventType:,nonatomic) unsigned long long effectiveEventType;                                    //@synthesize effectiveEventType=_effectiveEventType - In the implementation block
@property (assign,setter=_setEffectiveDelay:,nonatomic) double effectiveDelay;                                                        //@synthesize effectiveDelay=_effectiveDelay - In the implementation block
@property (setter=_setHapticParameters:,nonatomic,retain) _UIFeedbackParameters * hapticParameters;                                   //@synthesize hapticParameters=_hapticParameters - In the implementation block
@property (setter=_setAudioParameters:,nonatomic,retain) _UIFeedbackParameters * audioParameters;                                     //@synthesize audioParameters=_audioParameters - In the implementation block
@property (assign,setter=_setEffectiveEnabledFeedbackTypes:,nonatomic) unsigned long long effectiveEnabledFeedbackTypes;              //@synthesize effectiveEnabledFeedbackTypes=_effectiveEnabledFeedbackTypes - In the implementation block
@property (assign,setter=_setEffectiveSystemSoundID:,nonatomic) unsigned effectiveSystemSoundID;                                      //@synthesize effectiveSystemSoundID=_effectiveSystemSoundID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_UIFeedbackParameters *)hapticParameters;
-(_UIFeedbackParameters *)audioParameters;
-(unsigned long long)effectiveEventType;
-(double)effectiveDelay;
-(unsigned long long)effectiveEnabledFeedbackTypes;
-(unsigned)effectiveSystemSoundID;
-(void)_setEffectiveEventType:(unsigned long long)arg1 ;
-(void)_setEffectiveDelay:(double)arg1 ;
-(void)_setHapticParameters:(id)arg1 ;
-(void)_setAudioParameters:(id)arg1 ;
-(void)_setEffectiveEnabledFeedbackTypes:(unsigned long long)arg1 ;
-(void)_setEffectiveSystemSoundID:(unsigned)arg1 ;
@end

