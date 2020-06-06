/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFeedbackGeneratorConfiguration.h>

@class NSDictionary;

@interface _UIKeyboardFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration {

	NSDictionary* _feedbacks;
	double _slowTypingTime;
	double _fastTypingTime;
	double _fastTypingVolumeMultiplier;

}

@property (nonatomic,retain) NSDictionary * feedbacks;                       //@synthesize feedbacks=_feedbacks - In the implementation block
@property (assign,nonatomic) double slowTypingTime;                          //@synthesize slowTypingTime=_slowTypingTime - In the implementation block
@property (assign,nonatomic) double fastTypingTime;                          //@synthesize fastTypingTime=_fastTypingTime - In the implementation block
@property (assign,nonatomic) double fastTypingVolumeMultiplier;              //@synthesize fastTypingVolumeMultiplier=_fastTypingVolumeMultiplier - In the implementation block
+(id)defaultConfiguration;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)feedbackKeyPaths;
-(long long)requiredSupportLevel;
-(NSDictionary *)feedbacks;
-(void)setFeedbacks:(NSDictionary *)arg1 ;
-(BOOL)defaultEnabled;
-(double)slowTypingTime;
-(double)fastTypingTime;
-(double)fastTypingVolumeMultiplier;
-(void)setSlowTypingTime:(double)arg1 ;
-(void)setFastTypingTime:(double)arg1 ;
-(void)setFastTypingVolumeMultiplier:(double)arg1 ;
@end

