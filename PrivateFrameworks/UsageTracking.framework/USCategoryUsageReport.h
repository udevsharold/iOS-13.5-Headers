/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface USCategoryUsageReport : NSObject <NSSecureCoding> {

	NSString* _categoryIdentifier;
	double _totalUsageTime;
	NSArray* _applicationUsage;
	NSArray* _webUsage;

}

@property (copy) NSArray * applicationUsage;                          //@synthesize applicationUsage=_applicationUsage - In the implementation block
@property (copy,readonly) NSString * categoryIdentifier;              //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (readonly) double totalUsageTime;                           //@synthesize totalUsageTime=_totalUsageTime - In the implementation block
@property (copy,readonly) NSArray * webUsage;                         //@synthesize webUsage=_webUsage - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)categoryIdentifier;
-(id)initWithCategoryIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsage:(id)arg3 webUsage:(id)arg4 ;
-(NSArray *)applicationUsage;
-(void)setApplicationUsage:(NSArray *)arg1 ;
-(void)_usCategoryUsageReportCommonInitWithTotalUsageTime:(double)arg1 applicationUsage:(id)arg2 webUsage:(id)arg3 ;
-(double)totalUsageTime;
-(NSArray *)webUsage;
@end

