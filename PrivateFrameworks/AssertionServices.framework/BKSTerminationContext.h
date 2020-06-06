/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssertionServices/AssertionServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BKSTerminationContext : NSObject <NSCopying> {

	long long _exceptionCode;
	unsigned long long _reportType;
	NSString* _explanation;

}

@property (assign,nonatomic) long long exceptionCode;                    //@synthesize exceptionCode=_exceptionCode - In the implementation block
@property (assign,nonatomic) unsigned long long reportType;              //@synthesize reportType=_reportType - In the implementation block
@property (nonatomic,copy) NSString * explanation;                       //@synthesize explanation=_explanation - In the implementation block
+(id)context;
+(id)terminationAssertionContext;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)explanation;
-(void)setExplanation:(NSString *)arg1 ;
-(void)setReportType:(unsigned long long)arg1 ;
-(void)setExceptionCode:(long long)arg1 ;
-(long long)exceptionCode;
-(unsigned long long)reportType;
-(BOOL)isEqualToTerminationContext:(id)arg1 ;
@end

