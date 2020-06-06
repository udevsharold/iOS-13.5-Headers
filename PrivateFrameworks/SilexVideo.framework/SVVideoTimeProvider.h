/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoTimeProviding.h>

@protocol SVTimeConverting;
@class AVPlayer, NSString;

@interface SVVideoTimeProvider : NSObject <SVVideoTimeProviding> {

	AVPlayer* _player;
	id<SVTimeConverting> _timeConverter;

}

@property (nonatomic,readonly) AVPlayer * player;                               //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) id<SVTimeConverting> timeConverter;              //@synthesize timeConverter=_timeConverter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double time; 
-(double)time;
-(AVPlayer *)player;
-(id<SVTimeConverting>)timeConverter;
-(id)initWithPlayer:(id)arg1 timeConverter:(id)arg2 ;
@end

