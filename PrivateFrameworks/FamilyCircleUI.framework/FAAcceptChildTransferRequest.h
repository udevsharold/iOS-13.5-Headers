/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAFamilyRequest.h>

@class NSString;

@interface FAAcceptChildTransferRequest : AAFamilyRequest {

	NSString* _requestCode;

}

@property (nonatomic,copy) NSString * requestCode;              //@synthesize requestCode=_requestCode - In the implementation block
-(BOOL)isUserInitiated;
-(id)urlRequest;
-(id)urlString;
-(NSString *)requestCode;
-(void)setRequestCode:(NSString *)arg1 ;
@end

