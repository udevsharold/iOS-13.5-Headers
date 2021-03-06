/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMSBiometricsSignatureRequest, NSString;

@interface AMSBiometricsSignatureResult : NSObject {

	AMSBiometricsSignatureRequest* _originalRequest;
	NSString* _signature;

}

@property (nonatomic,retain) AMSBiometricsSignatureRequest * originalRequest;              //@synthesize originalRequest=_originalRequest - In the implementation block
@property (nonatomic,retain) NSString * signature;                                         //@synthesize signature=_signature - In the implementation block
-(AMSBiometricsSignatureRequest *)originalRequest;
-(NSString *)signature;
-(void)setOriginalRequest:(AMSBiometricsSignatureRequest *)arg1 ;
-(void)setSignature:(NSString *)arg1 ;
@end

