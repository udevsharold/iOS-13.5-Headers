/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentBrowseableBankAppsRequest : PKPaymentWebServiceRequest {

	NSString* _region;

}

@property (nonatomic,copy) NSString * region;              //@synthesize region=_region - In the implementation block
-(NSString *)region;
-(void)setRegion:(NSString *)arg1 ;
-(id)initWithRegion:(id)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
@end

