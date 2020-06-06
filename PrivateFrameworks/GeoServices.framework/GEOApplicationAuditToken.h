/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, geo_isolater;

@interface GEOApplicationAuditToken : NSObject <NSSecureCoding> {

	NSData* _tokenData;
	NSString* _proxiedBundleId;
	NSString* _resolvedBundleId;
	NSString* _resolvedNetworkAttributionBundleId;
	geo_isolater* _isolater;
	BOOL _proxiedExternalBundleId;
	NSString* _secondaryIdentifier;

}

@property (getter=_secondaryIdentifier,nonatomic,copy,readonly) NSString * secondaryIdentifier;              //@synthesize secondaryIdentifier=_secondaryIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * proxiedBundleId;                                                   //@synthesize proxiedBundleId=_proxiedBundleId - In the implementation block
@property (getter=isProxiedExternalBundleId,nonatomic,readonly) BOOL proxiedExternalBundleId;                //@synthesize proxiedExternalBundleId=_proxiedExternalBundleId - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 ;
-(id)bundleId;
-(NSString *)proxiedBundleId;
-(id)initWithSecondaryIdentifier:(id)arg1 ;
-(id)publicLogDescription;
-(id)_bundleIdForAuditToken;
-(id)initWithAuditTokenData:(id)arg1 ;
-(id)initWithProxiedApplicationBundleId:(id)arg1 ;
-(id)initWithProxiedExternalApplicationBundleId:(id)arg1 ;
-(id)backingTokenData;
-(id)bundleIdForNetworkAttribution;
-(BOOL)isProxiedExternalBundleId;
-(id)_secondaryIdentifier;
@end

