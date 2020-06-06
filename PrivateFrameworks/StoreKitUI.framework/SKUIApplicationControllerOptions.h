/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface SKUIApplicationControllerOptions : NSObject <NSCopying, NSMutableCopying> {

	BOOL _supportsFullApplicationReload;
	long long _tabBarControllerStyle;
	BOOL _pageRenderMetricsEnabled;
	BOOL _requiresLocalBootstrapScript;
	BOOL _bootstrapScriptFallbackEnabled;
	double _bootstrapScriptFallbackMaximumAge;
	double _bootstrapScriptTimeoutInterval;
	BOOL _useTransientStorageForTests;

}

@property (nonatomic,readonly) BOOL supportsFullApplicationReload; 
@property (nonatomic,readonly) long long tabBarControllerStyle; 
@property (nonatomic,readonly) BOOL pageRenderMetricsEnabled; 
@property (nonatomic,readonly) BOOL requiresLocalBootstrapScript; 
@property (getter=isBootstrapScriptFallbackEnabled,nonatomic,readonly) BOOL bootstrapScriptFallbackEnabled; 
@property (nonatomic,readonly) double bootstrapScriptFallbackMaximumAge; 
@property (nonatomic,readonly) double bootstrapScriptTimeoutInterval; 
@property (nonatomic,readonly) BOOL useTransientStorageForTests; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)supportsFullApplicationReload;
-(long long)tabBarControllerStyle;
-(BOOL)pageRenderMetricsEnabled;
-(BOOL)requiresLocalBootstrapScript;
-(BOOL)isBootstrapScriptFallbackEnabled;
-(double)bootstrapScriptFallbackMaximumAge;
-(double)bootstrapScriptTimeoutInterval;
-(BOOL)useTransientStorageForTests;
@end

