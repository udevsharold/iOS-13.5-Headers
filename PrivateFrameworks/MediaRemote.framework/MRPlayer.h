/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _MRNowPlayingPlayerProtobuf, NSData;

@interface MRPlayer : NSObject {

	NSString* _identifier;
	NSString* _displayName;
	long long _audioSessionType;

}

@property (nonatomic,readonly) _MRNowPlayingPlayerProtobuf * protobuf; 
@property (nonatomic,copy) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                  //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) long long audioSessionType;                            //@synthesize audioSessionType=_audioSessionType - In the implementation block
@property (nonatomic,readonly) BOOL hasAuxiliaryProperties; 
@property (nonatomic,copy,readonly) NSData * data; 
+(id)defaultPlayer;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(_MRNowPlayingPlayerProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(BOOL)hasAuxiliaryProperties;
-(void)setAudioSessionType:(long long)arg1 ;
-(long long)audioSessionType;
-(id)initWithIdentifier:(id)arg1 displayName:(id)arg2 ;
@end

