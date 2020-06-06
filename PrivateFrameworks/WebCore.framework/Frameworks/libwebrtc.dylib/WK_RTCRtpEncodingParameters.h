/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
@class NSString, NSNumber;

@interface WK_RTCRtpEncodingParameters : NSObject {

	BOOL _isActive;
	NSString* _rid;
	NSNumber* _maxBitrateBps;
	NSNumber* _minBitrateBps;
	NSNumber* _maxFramerate;
	NSNumber* _numTemporalLayers;
	NSNumber* _scaleResolutionDownBy;
	NSNumber* _ssrc;
	double _networkPriority;

}

@property (nonatomic,readonly) RtpEncodingParameters nativeParameters; 
@property (nonatomic,copy) NSString * rid;                                          //@synthesize rid=_rid - In the implementation block
@property (assign,nonatomic) BOOL isActive;                                         //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,copy) NSNumber * maxBitrateBps;                                //@synthesize maxBitrateBps=_maxBitrateBps - In the implementation block
@property (nonatomic,copy) NSNumber * minBitrateBps;                                //@synthesize minBitrateBps=_minBitrateBps - In the implementation block
@property (nonatomic,copy) NSNumber * maxFramerate;                                 //@synthesize maxFramerate=_maxFramerate - In the implementation block
@property (nonatomic,copy) NSNumber * numTemporalLayers;                            //@synthesize numTemporalLayers=_numTemporalLayers - In the implementation block
@property (nonatomic,copy) NSNumber * scaleResolutionDownBy;                        //@synthesize scaleResolutionDownBy=_scaleResolutionDownBy - In the implementation block
@property (nonatomic,readonly) NSNumber * ssrc;                                     //@synthesize ssrc=_ssrc - In the implementation block
@property (assign,nonatomic) double networkPriority;                                //@synthesize networkPriority=_networkPriority - In the implementation block
-(id)init;
-(BOOL)isActive;
-(void)setIsActive:(BOOL)arg1 ;
-(NSNumber *)ssrc;
-(NSNumber *)maxFramerate;
-(void)setMaxFramerate:(NSNumber *)arg1 ;
-(NSString *)rid;
-(void)setRid:(NSString *)arg1 ;
-(id)initWithNativeParameters:(const RtpEncodingParameters*)arg1 ;
-(RtpEncodingParameters)nativeParameters;
-(NSNumber *)maxBitrateBps;
-(void)setMaxBitrateBps:(NSNumber *)arg1 ;
-(NSNumber *)minBitrateBps;
-(void)setMinBitrateBps:(NSNumber *)arg1 ;
-(NSNumber *)numTemporalLayers;
-(void)setNumTemporalLayers:(NSNumber *)arg1 ;
-(NSNumber *)scaleResolutionDownBy;
-(void)setScaleResolutionDownBy:(NSNumber *)arg1 ;
-(double)networkPriority;
-(void)setNetworkPriority:(double)arg1 ;
@end
