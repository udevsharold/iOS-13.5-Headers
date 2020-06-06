/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoBufferObserverFactory.h>

@protocol SVVideoBufferObserverFactory <NSObject>
@required
-(id)createBufferObserverForVideo:(id)arg1;

@end


@protocol SVPlayerItemObserverFactory;
@class NSString;

@interface SVVideoBufferObserverFactory : NSObject <SVVideoBufferObserverFactory> {

	id<SVPlayerItemObserverFactory> _playerItemObserverFactory;

}

@property (nonatomic,readonly) id<SVPlayerItemObserverFactory> playerItemObserverFactory;              //@synthesize playerItemObserverFactory=_playerItemObserverFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVPlayerItemObserverFactory>)playerItemObserverFactory;
-(id)initWithPlayerItemObserverFactory:(id)arg1 ;
-(id)createBufferObserverForVideo:(id)arg1 ;
@end

