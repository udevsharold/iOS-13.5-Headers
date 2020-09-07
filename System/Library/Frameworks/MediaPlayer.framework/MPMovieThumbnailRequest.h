/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MPMovieThumbnailRequest : NSObject {

	NSArray* _times;
	long long _timeOption;

}

@property (nonatomic,retain) NSArray * times;                   //@synthesize times=_times - In the implementation block
@property (assign,nonatomic) long long timeOption;              //@synthesize timeOption=_timeOption - In the implementation block
-(void)setTimeOption:(long long)arg1 ;
-(void)setTimes:(NSArray *)arg1 ;
-(NSArray *)times;
-(long long)timeOption;
@end
