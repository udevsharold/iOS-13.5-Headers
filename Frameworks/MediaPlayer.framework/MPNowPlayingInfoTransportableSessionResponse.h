/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface MPNowPlayingInfoTransportableSessionResponse : NSObject {

	NSString* _identifier;
	NSString* _sessionType;
	NSData* _data;

}

@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * sessionType;              //@synthesize sessionType=_sessionType - In the implementation block
@property (nonatomic,readonly) NSData * data;                       //@synthesize data=_data - In the implementation block
+(id)responseWithIdentifier:(id)arg1 sessionType:(id)arg2 data:(id)arg3 ;
-(id)_init;
-(NSData *)data;
-(NSString *)identifier;
-(NSString *)sessionType;
@end

