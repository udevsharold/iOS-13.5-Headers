/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAssetResourceLoadingContentInformationRequestInternal, NSString, NSArray, NSDate;

@interface AVAssetResourceLoadingContentInformationRequest : NSObject {

	AVAssetResourceLoadingContentInformationRequestInternal* _contentInformationRequest;

}

@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,readonly) NSArray * allowedContentTypes; 
@property (assign,nonatomic) long long contentLength; 
@property (assign,getter=isByteRangeAccessSupported,nonatomic) BOOL byteRangeAccessSupported; 
@property (nonatomic,copy) NSDate * renewalDate; 
-(id)init;
-(void)dealloc;
-(id)description;
-(id)propertyList;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(long long)contentLength;
-(void)setContentLength:(long long)arg1 ;
-(void)setByteRangeAccessSupported:(BOOL)arg1 ;
-(NSArray *)allowedContentTypes;
-(NSDate *)renewalDate;
-(id)initWithLoadingRequest:(id)arg1 allowedContentTypes:(id)arg2 ;
-(BOOL)isByteRangeAccessSupported;
-(BOOL)isDiskCachingPermitted;
-(void)setRenewalDate:(NSDate *)arg1 ;
-(void)setDiskCachingPermitted:(BOOL)arg1 ;
@end
