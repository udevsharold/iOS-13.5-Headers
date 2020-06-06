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

@interface _HKStringFilter : _HKFilter {

	NSString* _value;
	unsigned long long _operatorType;

}

@property (nonatomic,copy,readonly) NSString * value;                        //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned long long operatorType;              //@synthesize operatorType=_operatorType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(BOOL)_supportsOperatorType:(unsigned long long)arg1 ;
+(id)_acceptedKeyPath;
+(BOOL)_acceptsDataType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)operatorType;
-(NSString *)value;
-(id)initWithOperatorType:(unsigned long long)arg1 value:(id)arg2 ;
@end

