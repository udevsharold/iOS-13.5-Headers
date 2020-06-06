/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface VCAudioStreamCodecConfig : NSObject {

	long long _codecType;
	BOOL _dtxEnabled;
	int _preferredMode;
	NSMutableArray* _supportedModes;
	BOOL _octetAligned;
	BOOL _dtmf;
	unsigned _networkPayload;
	unsigned short _evsChannelAwareOffset;
	BOOL _evsHeaderFullOnly;

}

@property (nonatomic,readonly) long long codecType;                                //@synthesize codecType=_codecType - In the implementation block
@property (assign,getter=isOctetAligned,nonatomic) BOOL octetAligned;              //@synthesize octetAligned=_octetAligned - In the implementation block
@property (assign,getter=isDTXEnabled,nonatomic) BOOL dtxEnabled;                  //@synthesize dtxEnabled=_dtxEnabled - In the implementation block
@property (assign,nonatomic) int preferredMode;                                    //@synthesize preferredMode=_preferredMode - In the implementation block
@property (nonatomic,retain) NSArray * supportedModes;                             //@synthesize supportedModes=_supportedModes - In the implementation block
@property (nonatomic,readonly) BOOL isComfortNoise; 
@property (assign,getter=isDTMF,nonatomic) BOOL dtmf;                              //@synthesize dtmf=_dtmf - In the implementation block
@property (assign,nonatomic) unsigned networkPayload;                              //@synthesize networkPayload=_networkPayload - In the implementation block
@property (assign,nonatomic) unsigned short evsChannelAwareOffset;                 //@synthesize evsChannelAwareOffset=_evsChannelAwareOffset - In the implementation block
@property (assign,nonatomic) BOOL evsHeaderFullOnly;                               //@synthesize evsHeaderFullOnly=_evsHeaderFullOnly - In the implementation block
-(void)dealloc;
-(int)preferredMode;
-(NSArray *)supportedModes;
-(void)setSupportedModes:(NSArray *)arg1 ;
-(long long)codecType;
-(void)setupAMRModesWithClientModeMask:(unsigned)arg1 ;
-(void)setupAMRWBModesWithClientModeMask:(unsigned)arg1 ;
-(void)setupEVSModesWithClientModeMask:(unsigned)arg1 ;
-(id)initWithCodecType:(long long)arg1 ;
-(BOOL)isComfortNoise;
-(void)setupModesWithClientModeMask:(unsigned)arg1 ;
-(void)setPreferredModeWithClientMode:(int)arg1 ;
-(BOOL)isDTXEnabled;
-(void)setDtxEnabled:(BOOL)arg1 ;
-(void)setPreferredMode:(int)arg1 ;
-(BOOL)isOctetAligned;
-(void)setOctetAligned:(BOOL)arg1 ;
-(BOOL)isDTMF;
-(void)setDtmf:(BOOL)arg1 ;
-(unsigned)networkPayload;
-(void)setNetworkPayload:(unsigned)arg1 ;
-(unsigned short)evsChannelAwareOffset;
-(void)setEvsChannelAwareOffset:(unsigned short)arg1 ;
-(BOOL)evsHeaderFullOnly;
-(void)setEvsHeaderFullOnly:(BOOL)arg1 ;
@end

