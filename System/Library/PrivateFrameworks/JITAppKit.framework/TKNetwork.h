/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TKNetwork : NSObject {

	double _timeoutInterval;

}

@property (nonatomic,readonly) double timeoutInterval;              //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
+(id)shared;
+(void)setShared:(id)arg1 ;
-(double)timeoutInterval;
-(void)updateNetworkActivity:(long long)arg1 ;
-(id)loadRequest:(id)arg1 priority:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)downloadRequest:(id)arg1 priority:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)downloadImage:(id)arg1 priority:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end
