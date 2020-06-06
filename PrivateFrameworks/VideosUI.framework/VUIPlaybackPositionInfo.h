/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface VUIPlaybackPositionInfo : NSObject <NSCopying> {

	NSNumber* _bookmarkTime;
	NSNumber* _playCount;
	NSNumber* _hasBeenPlayed;

}

@property (nonatomic,retain) NSNumber * bookmarkTime;               //@synthesize bookmarkTime=_bookmarkTime - In the implementation block
@property (nonatomic,retain) NSNumber * playCount;                  //@synthesize playCount=_playCount - In the implementation block
@property (nonatomic,retain) NSNumber * hasBeenPlayed;              //@synthesize hasBeenPlayed=_hasBeenPlayed - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)playCount;
-(void)setPlayCount:(NSNumber *)arg1 ;
-(NSNumber *)bookmarkTime;
-(NSNumber *)hasBeenPlayed;
-(void)setHasBeenPlayed:(NSNumber *)arg1 ;
-(void)setBookmarkTime:(NSNumber *)arg1 ;
@end

