/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _MRNowPlayingPlayerPathProtobuf, NSObject;

@interface MRNowPlayingPlayerPathInvalidationHandler : NSObject {

	_MRNowPlayingPlayerPathProtobuf* _playerPath;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _callback;

}

@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id callback;                                               //@synthesize callback=_callback - In the implementation block
-(id)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)callback;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(id)initWithPlayerPath:(id)arg1 queue:(id)arg2 invalidationCallback:(/*^block*/id)arg3 ;
@end

