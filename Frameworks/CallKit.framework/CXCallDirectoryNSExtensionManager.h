/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CXCallDirectoryNSExtensionManagerDelegate;
@class NSObject;

@interface CXCallDirectoryNSExtensionManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<CXCallDirectoryNSExtensionManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id _extensionMatchingContext;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                         //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<CXCallDirectoryNSExtensionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                                 //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) id extensionMatchingContext;                                                //@synthesize extensionMatchingContext=_extensionMatchingContext - In the implementation block
+(id)baseExtensionMatchingAttributes;
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<CXCallDirectoryNSExtensionManagerDelegate>)delegate;
-(void)setDelegate:(id<CXCallDirectoryNSExtensionManagerDelegate>)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)extensionMatchingContext;
-(void)setExtensionMatchingContext:(id)arg1 ;
-(void)_beginMatchingExtensionsIfNecessary;
-(void)_extensionForIdentifier:(id)arg1 containingAppBundleURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)beginMatchingExtensions;
-(void)extensionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)extensionWithIdentifier:(id)arg1 inContainingAppWithProcessIdentifier:(int)arg2 completion:(/*^block*/id)arg3 ;
@end

