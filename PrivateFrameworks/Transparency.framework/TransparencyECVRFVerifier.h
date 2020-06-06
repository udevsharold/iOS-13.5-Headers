/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/Transparency-Structs.h>
#import <Transparency/TransparencyVRFVerifier.h>

@interface TransparencyECVRFVerifier : TransparencyVRFVerifier {

	ccvrf* vrf;

}
+(BOOL)verifyMessage:(id)arg1 salt:(id)arg2 output:(id)arg3 proof:(id)arg4 key:(id)arg5 error:(id*)arg6 ;
+(BOOL)verifyMessage:(id)arg1 output:(id)arg2 proof:(id)arg3 key:(id)arg4 error:(id*)arg5 ;
-(id)initWithKey:(id)arg1 ;
-(int)vrfType;
-(BOOL)verifyMessage:(id)arg1 salt:(id)arg2 output:(id)arg3 proof:(id)arg4 error:(id*)arg5 ;
-(BOOL)verifyMessage:(id)arg1 output:(id)arg2 proof:(id)arg3 error:(id*)arg4 ;
@end

