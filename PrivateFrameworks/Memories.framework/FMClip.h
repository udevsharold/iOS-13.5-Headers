/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@class NSURL;

@interface FMClip : NSObject {

	NSURL* _url;
	long long _position;
	long long _offset;
	long long _duration;
	long long _fadeInLength;
	long long _fadeOutLength;

}

@property (nonatomic,retain) NSURL * url;                          //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) long long position;                   //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) long long offset;                     //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) long long duration;                   //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long fadeInLength;               //@synthesize fadeInLength=_fadeInLength - In the implementation block
@property (assign,nonatomic) long long fadeOutLength;              //@synthesize fadeOutLength=_fadeOutLength - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)url;
-(long long)position;
-(long long)duration;
-(void)setOffset:(long long)arg1 ;
-(long long)offset;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setPosition:(long long)arg1 ;
-(void)setDuration:(long long)arg1 ;
-(long long)fadeInLength;
-(void)setFadeInLength:(long long)arg1 ;
-(long long)fadeOutLength;
-(void)setFadeOutLength:(long long)arg1 ;
@end

