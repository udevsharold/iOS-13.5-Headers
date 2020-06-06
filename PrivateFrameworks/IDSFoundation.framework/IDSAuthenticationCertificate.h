/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IDSServerCertificate, NSData;

@interface IDSAuthenticationCertificate : NSObject {

	IDSServerCertificate* _backingCertificate;

}

@property (nonatomic,readonly) IDSServerCertificate * backingCertificate;              //@synthesize backingCertificate=_backingCertificate - In the implementation block
@property (nonatomic,readonly) NSData * dataRepresentation; 
-(id)description;
-(NSData *)dataRepresentation;
-(id)initWithDataRepresentation:(id)arg1 ;
-(id)initWithBackingCertificate:(id)arg1 ;
-(IDSServerCertificate *)backingCertificate;
@end

