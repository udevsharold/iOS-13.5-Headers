/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDVideoCodec, HMDVideoCodecParameters, HMDVideoAttributes, HMDSelectedRTPParameters;

@interface HMDSelectedVideoParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	HMDVideoCodec* _codec;
	HMDVideoCodecParameters* _codecParameters;
	HMDVideoAttributes* _videoAttributes;
	HMDSelectedRTPParameters* _rtpParameters;

}

@property (nonatomic,copy,readonly) HMDVideoCodec * codec;                                  //@synthesize codec=_codec - In the implementation block
@property (nonatomic,copy,readonly) HMDVideoCodecParameters * codecParameters;              //@synthesize codecParameters=_codecParameters - In the implementation block
@property (nonatomic,copy,readonly) HMDVideoAttributes * videoAttributes;                   //@synthesize videoAttributes=_videoAttributes - In the implementation block
@property (nonatomic,copy,readonly) HMDSelectedRTPParameters * rtpParameters;               //@synthesize rtpParameters=_rtpParameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(HMDVideoCodec *)codec;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(HMDVideoCodecParameters *)codecParameters;
-(HMDVideoAttributes *)videoAttributes;
-(HMDSelectedRTPParameters *)rtpParameters;
-(id)initWithCodec:(id)arg1 codecParameter:(id)arg2 attribute:(id)arg3 rtpParameter:(id)arg4 ;
@end
