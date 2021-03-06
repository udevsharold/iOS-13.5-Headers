/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSUUID;

@interface DMFWebsitePolicyMonitor : NSObject {

	NSArray* _policyTypes;
	NSUUID* _identifier;

}

@property (nonatomic,copy) NSArray * policyTypes;                //@synthesize policyTypes=_policyTypes - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (getter=isEnabled,readonly) BOOL enabled; 
-(void)dealloc;
-(NSUUID *)identifier;
-(BOOL)isEnabled;
-(id)initWithPolicyChangeHandler:(/*^block*/id)arg1 ;
-(void)requestPoliciesForWebsites:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)policyTypes;
-(void)setPolicyTypes:(NSArray *)arg1 ;
-(void)_fetchCategoriesIfNeededForWebsiteURLs:(id)arg1 response:(/*^block*/id)arg2 ;
@end

