/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface TIUserModelMetricsDescriptor : NSObject {

	NSString* _name;
	NSArray* _counterNames;

}

@property (retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * counterNames;              //@synthesize counterNames=_counterNames - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithMetricName:(id)arg1 counterNames:(id)arg2 ;
-(NSArray *)counterNames;
@end

