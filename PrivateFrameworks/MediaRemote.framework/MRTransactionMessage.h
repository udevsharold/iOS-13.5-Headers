/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSMutableArray, NSArray, _MRNowPlayingPlayerPathProtobuf;

@interface MRTransactionMessage : MRProtocolMessage {

	NSMutableArray* _packets;

}

@property (nonatomic,readonly) unsigned long long name; 
@property (nonatomic,readonly) NSArray * packets; 
@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath; 
-(unsigned long long)name;
-(unsigned long long)type;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(id)initWithContentItems:(id)arg1 forPlayerPath:(id)arg2 ;
-(NSArray *)packets;
-(id)initWithName:(unsigned long long)arg1 packets:(id)arg2 playerPath:(id)arg3 ;
-(id)initWithPlaybackQueue:(id)arg1 forPlayerPath:(id)arg2 ;
@end

