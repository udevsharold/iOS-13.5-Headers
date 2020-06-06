/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Transparency/Transparency-Structs.h>
@class NSDictionary;

@interface TransparencySignatureVerifier : NSObject {

	BOOL _needsRefresh;
	NSDictionary* _trustedKeys;

}

@property (retain) NSDictionary * trustedKeys;              //@synthesize trustedKeys=_trustedKeys - In the implementation block
@property (assign) BOOL needsRefresh;                       //@synthesize needsRefresh=_needsRefresh - In the implementation block
+(BOOL)verifyMessage:(id)arg1 signature:(id)arg2 spkiHash:(id)arg3 trustedKeys:(id)arg4 algorithm:(CFStringRef)arg5 error:(id*)arg6 ;
+(const CFStringRef)secKeyAlgorithmForProtoAlgorithm:(int)arg1 ;
+(int)protoAlgorithmForSecKeyAlgorithm:(CFStringRef)arg1 ;
-(BOOL)needsRefresh;
-(void)setNeedsRefresh:(BOOL)arg1 ;
-(void)setTrustedKeys:(NSDictionary *)arg1 ;
-(id)initWithTrustedKeys:(id)arg1 ;
-(NSDictionary *)trustedKeys;
-(BOOL)verifyMessage:(id)arg1 signature:(id)arg2 spkiHash:(id)arg3 algorithm:(CFStringRef)arg4 error:(id*)arg5 ;
@end

