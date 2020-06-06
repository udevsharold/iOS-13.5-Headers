/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceServices/VoiceServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface VSPresynthesizedAudioRequest : NSObject <NSCopying, NSSecureCoding> {

	BOOL _enqueue;
	unsigned _audioSessionID;
	NSData* _audioData;
	NSString* _text;
	NSString* _identifier;
	unsigned long long _requestCreatedTimestamp;
	NSString* _clientBundleIdentifier;
	unsigned long long _pcmDataSize;
	/*^block*/id _stopHandler;
	AudioStreamBasicDescription _decoderStreamDescription;
	AudioStreamBasicDescription _playerStreamDescription;

}

@property (nonatomic,copy) NSString * clientBundleIdentifier;                                     //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long pcmDataSize;                                      //@synthesize pcmDataSize=_pcmDataSize - In the implementation block
@property (nonatomic,copy) id stopHandler;                                                        //@synthesize stopHandler=_stopHandler - In the implementation block
@property (assign,nonatomic) unsigned audioSessionID;                                             //@synthesize audioSessionID=_audioSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSData * audioData;                                           //@synthesize audioData=_audioData - In the implementation block
@property (nonatomic,readonly) AudioStreamBasicDescription decoderStreamDescription;              //@synthesize decoderStreamDescription=_decoderStreamDescription - In the implementation block
@property (nonatomic,readonly) AudioStreamBasicDescription playerStreamDescription;               //@synthesize playerStreamDescription=_playerStreamDescription - In the implementation block
@property (assign,nonatomic) BOOL enqueue;                                                        //@synthesize enqueue=_enqueue - In the implementation block
@property (nonatomic,retain) NSString * text;                                                     //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long requestCreatedTimestamp;                          //@synthesize requestCreatedTimestamp=_requestCreatedTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)enqueue;
-(NSString *)clientBundleIdentifier;
-(void)setEnqueue:(BOOL)arg1 ;
-(unsigned)audioSessionID;
-(void)setAudioSessionID:(unsigned)arg1 ;
-(NSData *)audioData;
-(AudioStreamBasicDescription)decoderStreamDescription;
-(AudioStreamBasicDescription)playerStreamDescription;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)requestCreatedTimestamp;
-(void)setRequestCreatedTimestamp:(unsigned long long)arg1 ;
-(id)initWithAudioData:(id)arg1 decoderStreamDescription:(AudioStreamBasicDescription)arg2 playerStreamDescription:(AudioStreamBasicDescription)arg3 ;
-(id)initWithAudioData:(id)arg1 playerStreamDescription:(AudioStreamBasicDescription)arg2 ;
-(unsigned long long)pcmDataSize;
-(void)setPcmDataSize:(unsigned long long)arg1 ;
-(id)stopHandler;
-(void)setStopHandler:(id)arg1 ;
@end

