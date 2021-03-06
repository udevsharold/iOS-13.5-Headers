/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary;

@interface WK_RTCVideoCodecInfo : NSObject <NSCoding> {

	NSString* _name;
	NSDictionary* _parameters;

}

@property (nonatomic,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSDictionary *)parameters;
-(id)initWithName:(id)arg1 parameters:(id)arg2 ;
-(SdpVideoFormat*)nativeSdpVideoFormat;
-(id)initWithNativeSdpVideoFormat:(SdpVideoFormat*)arg1 ;
-(BOOL)isEqualToCodecInfo:(id)arg1 ;
@end

