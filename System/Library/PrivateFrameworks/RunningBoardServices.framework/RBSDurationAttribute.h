/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSDurationAttribute : RBSAttribute {

	double _invalidationDuration;
	double _warningDuration;
	unsigned long long _startPolicy;
	unsigned long long _endPolicy;

}

@property (assign,nonatomic) double invalidationDuration;                 //@synthesize invalidationDuration=_invalidationDuration - In the implementation block
@property (assign,nonatomic) double warningDuration;                      //@synthesize warningDuration=_warningDuration - In the implementation block
@property (assign,nonatomic) unsigned long long startPolicy;              //@synthesize startPolicy=_startPolicy - In the implementation block
@property (assign,nonatomic) unsigned long long endPolicy;                //@synthesize endPolicy=_endPolicy - In the implementation block
+(id)invalidateAfterInterval:(double)arg1 ;
+(id)attributeWithDuration:(double)arg1 warningDuration:(double)arg2 startPolicy:(unsigned long long)arg3 endPolicy:(unsigned long long)arg4 ;
+(id)attributeWithDuration:(double)arg1 ;
+(id)terminateAfterInterval:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)_initWithInvalidationDuration:(double)arg1 warningDuration:(double)arg2 startPolicy:(unsigned long long)arg3 endPolicy:(unsigned long long)arg4 ;
-(double)invalidationDuration;
-(double)warningDuration;
-(unsigned long long)startPolicy;
-(unsigned long long)endPolicy;
-(void)setInvalidationDuration:(double)arg1 ;
-(void)setWarningDuration:(double)arg1 ;
-(void)setStartPolicy:(unsigned long long)arg1 ;
-(void)setEndPolicy:(unsigned long long)arg1 ;
@end

