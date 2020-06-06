/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/SVVideoDurationObserving.h>

@protocol SVPlayerItemObserving;
@class SVKeyValueObserver, NSString;

@interface SVVideoDurationObserver : NSObject <SVVideoDurationObserving> {

	/*^block*/id changeBlock;
	id<SVPlayerItemObserving> _playerItemObserver;
	SVKeyValueObserver* _playerItemDurationObserver;
	double _duration;

}

@property (nonatomic,readonly) id<SVPlayerItemObserving> playerItemObserver;               //@synthesize playerItemObserver=_playerItemObserver - In the implementation block
@property (nonatomic,retain) SVKeyValueObserver * playerItemDurationObserver;              //@synthesize playerItemDurationObserver=_playerItemDurationObserver - In the implementation block
@property (assign,nonatomic) double duration;                                              //@synthesize duration=_duration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1 ;
-(id)initWithPlayerItemObserver:(id)arg1 ;
-(id<SVPlayerItemObserving>)playerItemObserver;
-(void)updateDuration:(SCD_Struct_SV4)arg1 ;
-(void)setPlayerItemDurationObserver:(SVKeyValueObserver *)arg1 ;
-(SVKeyValueObserver *)playerItemDurationObserver;
@end

