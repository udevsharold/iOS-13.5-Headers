/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OSAConcreteReport <NSObject>
@optional
-(BOOL)isActionable;
-(id)additionalIPSMetadata;

@required
-(id)problemType;
-(id)appleCareDetails;
-(id)reportNamePrefix;
-(void)generateLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2;

@end
