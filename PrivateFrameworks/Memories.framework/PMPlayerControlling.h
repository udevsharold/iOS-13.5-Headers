/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PMPlayerControlling <NSObject>
@property (assign,getter=isPlaying,nonatomic) BOOL playing; 
@property (nonatomic,readonly) int currentFrameTime; 
@required
-(BOOL)isPlaying;
-(void)setPlaying:(BOOL)arg1;
-(int)currentFrameTime;

@end

