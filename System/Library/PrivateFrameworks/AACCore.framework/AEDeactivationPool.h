/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AACCore.framework/AACCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AEPolicyStore, AEPerformancePrimitives;
@class NSArray;

@interface AEDeactivationPool : NSObject {

	NSArray* _persistentDeactivations;
	id<AEPolicyStore> _policyStore;
	id<AEPerformancePrimitives> _performancePrimitives;

}

@property (nonatomic,copy,readonly) NSArray * persistentDeactivations;                         //@synthesize persistentDeactivations=_persistentDeactivations - In the implementation block
@property (nonatomic,readonly) id<AEPolicyStore> policyStore;                                  //@synthesize policyStore=_policyStore - In the implementation block
@property (nonatomic,readonly) id<AEPerformancePrimitives> performancePrimitives;              //@synthesize performancePrimitives=_performancePrimitives - In the implementation block
-(id<AEPolicyStore>)policyStore;
-(void)deactivateWithCompletion:(/*^block*/id)arg1 ;
-(id<AEPerformancePrimitives>)performancePrimitives;
-(id)initWithPolicyStore:(id)arg1 performancePrimitives:(id)arg2 persistentDeactivations:(id)arg3 ;
-(NSArray *)persistentDeactivations;
@end

