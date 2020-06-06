/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RBSLimitation.h>

@interface RBSCPUMaximumUsageLimitation : RBSLimitation {

	unsigned char _role;
	unsigned long long _percentage;
	double _duration;
	unsigned long long _violationPolicy;

}

@property (nonatomic,readonly) unsigned char role;                              //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) unsigned long long percentage;                   //@synthesize percentage=_percentage - In the implementation block
@property (nonatomic,readonly) double duration;                                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned long long violationPolicy;              //@synthesize violationPolicy=_violationPolicy - In the implementation block
+(id)limitationForRole:(unsigned char)arg1 withPercentage:(unsigned long long)arg2 duration:(double)arg3 violationPolicy:(unsigned long long)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned char)role;
-(double)duration;
-(id)succinctDescriptionBuilder;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)_initWithRole:(unsigned char)arg1 percentage:(unsigned long long)arg2 duration:(double)arg3 violationPolicy:(unsigned long long)arg4 ;
-(unsigned long long)percentage;
-(unsigned long long)violationPolicy;
@end

