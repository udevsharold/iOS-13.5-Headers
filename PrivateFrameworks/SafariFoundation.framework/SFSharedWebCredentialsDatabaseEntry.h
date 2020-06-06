/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SFSharedWebCredentialsDatabaseEntry : NSObject {

	BOOL _approved;
	NSString* _domain;
	NSString* _appID;
	long long _service;

}

@property (nonatomic,copy,readonly) NSString * domain;                       //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy,readonly) NSString * appID;                        //@synthesize appID=_appID - In the implementation block
@property (nonatomic,readonly) long long service;                            //@synthesize service=_service - In the implementation block
@property (getter=isApproved,nonatomic,readonly) BOOL approved;              //@synthesize approved=_approved - In the implementation block
-(id)description;
-(NSString *)domain;
-(BOOL)isApproved;
-(long long)service;
-(NSString *)appID;
-(id)_initWithDomain:(id)arg1 appID:(id)arg2 service:(long long)arg3 isApproved:(BOOL)arg4 ;
-(id)initWithServiceDetails:(id)arg1 ;
@end

