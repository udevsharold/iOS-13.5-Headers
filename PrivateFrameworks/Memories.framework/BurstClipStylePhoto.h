/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/BurstClipStyle.h>

@class NSString;

@interface BurstClipStylePhoto : BurstClipStyle {

	int _transitionFrameDuration;
	NSString* _transitionName;

}

@property (nonatomic,copy) NSString * transitionName;                  //@synthesize transitionName=_transitionName - In the implementation block
@property (assign,nonatomic) int transitionFrameDuration;              //@synthesize transitionFrameDuration=_transitionFrameDuration - In the implementation block
-(double)maximumDuration;
-(BOOL)isSupported;
-(NSString *)transitionName;
-(double)minimumDuration;
-(double)idealDuration;
-(void)setTransitionName:(NSString *)arg1 ;
-(unsigned long long)numberOfAvailableClips;
-(unsigned long long)_minimumNumberOfContainedClips;
-(unsigned long long)_idealNumberOfContainedClips;
-(double)idealContainedClipDuration;
-(double)maximumContainedClipDuration;
-(id)containedClipsWithoutTransitions;
-(unsigned long long)_maximumNumberOfContainedClips;
-(double)minimumContainedClipDuration;
-(id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2 ;
-(int)transitionFrameDuration;
-(void)adjustDurationsOfClips:(id)arg1 withInTransition:(id)arg2 outTransition:(id)arg3 ;
-(void)setTransitionFrameDuration:(int)arg1 ;
@end

