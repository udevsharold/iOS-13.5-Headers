/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PPXPCClientHelper;

@interface PPConfigClient : NSObject {

	PPXPCClientHelper* _clientHelper;

}
+(id)sharedInstance;
-(id)init;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(unsigned long long)assetVersionWithError:(id*)arg1 ;
-(id)variantNameWithError:(id*)arg1 ;
@end
