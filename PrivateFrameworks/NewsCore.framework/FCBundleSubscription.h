/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet;

@interface FCBundleSubscription : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isPurchaser;
	BOOL _isAmplifyUser;
	NSString* _bundlePurchaseID;
	NSSet* _bundleChannelIDs;
	unsigned long long _unprotectedSubscriptionState;

}

@property (nonatomic,copy) NSString * bundlePurchaseID;                                    //@synthesize bundlePurchaseID=_bundlePurchaseID - In the implementation block
@property (assign,nonatomic) unsigned long long unprotectedSubscriptionState;              //@synthesize unprotectedSubscriptionState=_unprotectedSubscriptionState - In the implementation block
@property (assign,nonatomic) BOOL isPurchaser;                                             //@synthesize isPurchaser=_isPurchaser - In the implementation block
@property (assign,nonatomic) BOOL isAmplifyUser;                                           //@synthesize isAmplifyUser=_isAmplifyUser - In the implementation block
@property (nonatomic,copy) NSSet * bundleChannelIDs;                                       //@synthesize bundleChannelIDs=_bundleChannelIDs - In the implementation block
@property (nonatomic,readonly) BOOL isSubscribed; 
@property (nonatomic,readonly) unsigned long long subscriptionState; 
+(BOOL)supportsSecureCoding;
+(id)subscriptionWithSubscriptionState:(unsigned long long)arg1 bundleChannelIDs:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isSubscribed;
-(BOOL)isPurchaser;
-(BOOL)containsTagID:(id)arg1 ;
-(BOOL)containsHeadline:(id)arg1 ;
-(NSSet *)bundleChannelIDs;
-(void)setBundleChannelIDs:(NSSet *)arg1 ;
-(NSString *)bundlePurchaseID;
-(BOOL)isAmplifyUser;
-(void)setIsPurchaser:(BOOL)arg1 ;
-(id)initWithBundlePurchaseID:(id)arg1 bundleChannelIDs:(id)arg2 inTrialPeriod:(BOOL)arg3 isPurchaser:(BOOL)arg4 isAmplifyUser:(BOOL)arg5 ;
-(unsigned long long)unprotectedSubscriptionState;
-(void)setUnprotectedSubscriptionState:(unsigned long long)arg1 ;
-(void)setBundlePurchaseID:(NSString *)arg1 ;
-(void)setIsAmplifyUser:(BOOL)arg1 ;
-(unsigned long long)subscriptionState;
@end

