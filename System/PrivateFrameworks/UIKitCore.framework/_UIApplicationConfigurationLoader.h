/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UISApplicationInitializationContext;

@interface _UIApplicationConfigurationLoader : NSObject {

	UISApplicationInitializationContext* _applicationInitializationContext;
	AB _hasRequestedPreload;

}

@property (nonatomic,readonly) UISApplicationInitializationContext * applicationInitializationContext; 
@property (nonatomic,readonly) BOOL isFrontBoard; 
@property (nonatomic,readonly) BOOL usesLocalInitializationContext; 
+(id)sharedLoader;
-(void)dealloc;
-(id)_init;
-(BOOL)isFrontBoard;
-(void)startPreloadInitializationContext;
-(UISApplicationInitializationContext *)applicationInitializationContext;
-(id)_appInitializationContextFactoryClass;
-(BOOL)usesLocalInitializationContext;
-(id)_loadInitializationContext;
@end

