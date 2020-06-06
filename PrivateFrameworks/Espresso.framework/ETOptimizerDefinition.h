/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface ETOptimizerDefinition : NSObject {

	long long _type;
	NSDictionary* _optimizationParameters;

}

@property (readonly) long long type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDictionary * optimizationParameters;              //@synthesize optimizationParameters=_optimizationParameters - In the implementation block
-(long long)type;
-(id)initWithOptimizationAlgorithm:(long long)arg1 parameters:(id)arg2 error:(id*)arg3 ;
-(NSDictionary *)optimizationParameters;
@end

