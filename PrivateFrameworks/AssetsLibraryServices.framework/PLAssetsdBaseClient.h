/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLXPCProxyCreatingPLXPCAsyncProxyCreating;
@interface PLAssetsdBaseClient : NSObject {

	id<PLXPCProxyCreating><PLXPCAsyncProxyCreating> _proxyFactory;

}

@property (readonly) id<PLXPCProxyCreating><PLXPCAsyncProxyCreating> proxyFactory;              //@synthesize proxyFactory=_proxyFactory - In the implementation block
-(id)initWithQueue:(id)arg1 proxyCreating:(id)arg2 proxyGetter:(SEL)arg3 ;
-(id<PLXPCProxyCreating><PLXPCAsyncProxyCreating>)proxyFactory;
@end
