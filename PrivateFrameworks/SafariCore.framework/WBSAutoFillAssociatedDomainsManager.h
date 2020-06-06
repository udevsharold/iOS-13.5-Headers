/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:14 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSArray;

@interface WBSAutoFillAssociatedDomainsManager : NSObject {

	NSMutableDictionary* _domainToDomainsWithAssociatedCredentials;
	NSMutableDictionary* _domainsToDomainsToConsiderIdentical;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSArray* _domainsWithAssociatedCredentials;
	NSArray* _domainsToConsiderIdentical;

}

@property (nonatomic,copy) NSArray * domainsWithAssociatedCredentials;              //@synthesize domainsWithAssociatedCredentials=_domainsWithAssociatedCredentials - In the implementation block
@property (nonatomic,copy) NSArray * domainsToConsiderIdentical;                    //@synthesize domainsToConsiderIdentical=_domainsToConsiderIdentical - In the implementation block
-(id)init;
-(id)domainsWithAssociatedCredentialsForDomain:(id)arg1 ;
-(NSArray *)domainsWithAssociatedCredentials;
-(NSArray *)domainsToConsiderIdentical;
-(id)initWithDomainsWithAssociatedCredentials:(id)arg1 domainsToConsiderIdentical:(id)arg2 ;
-(void)setDomainsWithAssociatedCredentials:(NSArray *)arg1 ;
-(void)setDomainsToConsiderIdentical:(NSArray *)arg1 ;
-(void)_updateDomainToDomainsWithAssociatedCredentials;
-(void)_updateDomainToDomainsToConsiderIdentical;
-(id)initWithDomainsWithAssociatedCredentials:(id)arg1 ;
-(id)domainsToConsiderIdenticalToDomain:(id)arg1 ;
@end

