/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class NSString;

@interface _HKOSBuildOriginFilter : _HKFilter {

	NSString* _comparisonOSBuild;
	unsigned long long _operatorType;

}

@property (nonatomic,readonly) NSString * comparisonOSBuild;                 //@synthesize comparisonOSBuild=_comparisonOSBuild - In the implementation block
@property (nonatomic,readonly) unsigned long long operatorType;              //@synthesize operatorType=_operatorType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(id)filterWithOperatorType:(unsigned long long)arg1 comparisonOSBuild:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)operatorType;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(NSString *)comparisonOSBuild;
@end

