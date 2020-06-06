/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:42 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, ENAuthCacheEntry;

@interface ENAuthCache : NSObject {

	NSMutableDictionary* _linkedCache;
	ENAuthCacheEntry* _businessCache;

}

@property (nonatomic,retain) NSMutableDictionary * linkedCache;              //@synthesize linkedCache=_linkedCache - In the implementation block
@property (nonatomic,retain) ENAuthCacheEntry * businessCache;               //@synthesize businessCache=_businessCache - In the implementation block
-(id)init;
-(void)setAuthenticationResult:(id)arg1 forLinkedNotebookGuid:(id)arg2 ;
-(id)authenticationResultForLinkedNotebookGuid:(id)arg1 ;
-(void)setAuthenticationResultForBusiness:(id)arg1 ;
-(id)authenticationResultForBusiness;
-(NSMutableDictionary *)linkedCache;
-(void)setLinkedCache:(NSMutableDictionary *)arg1 ;
-(ENAuthCacheEntry *)businessCache;
-(void)setBusinessCache:(ENAuthCacheEntry *)arg1 ;
@end

