/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Cards/CRBundleManager.h>

@class NSMutableSet;

@interface _CRKProviderBundleManager : CRBundleManager {

	NSMutableSet* _providerBundles;

}
+(id)sharedInstance;
+(Class)bundleClass;
+(id)bundleDirectoryName;
-(void)getProviderBundlesWithCompletion:(/*^block*/id)arg1 ;
@end

