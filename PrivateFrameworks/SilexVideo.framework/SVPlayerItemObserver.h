/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVPlayerItemObserving.h>

@class AVPlayerItem, AVPlayer, SVKeyValueObserver, NSString;

@interface SVPlayerItemObserver : NSObject <SVPlayerItemObserving> {

	/*^block*/id _changeBlock;
	AVPlayerItem* _item;
	AVPlayer* _player;
	SVKeyValueObserver* _observer;

}

@property (nonatomic,readonly) AVPlayer * player;                          //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) SVKeyValueObserver * observer;              //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic,__weak) AVPlayerItem * item;                   //@synthesize item=_item - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onChange:,nonatomic,copy) id changeBlock;                //@synthesize changeBlock=_changeBlock - In the implementation block
-(SVKeyValueObserver *)observer;
-(AVPlayerItem *)item;
-(void)setItem:(AVPlayerItem *)arg1 ;
-(AVPlayer *)player;
-(id)initWithPlayer:(id)arg1 ;
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1 ;
@end

