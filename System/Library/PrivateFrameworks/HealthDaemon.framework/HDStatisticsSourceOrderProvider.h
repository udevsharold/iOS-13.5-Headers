/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDStatisticsSourceOrderProvider <NSObject>
@required
-(id)sourceForSourceID:(long long)arg1;
-(void)orderSourceIDs:(vector<long long, std::__1::allocator<long long> >*)arg1;
-(id)bundleIdentifierForSourceID:(long long)arg1;

@end
