/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary, DMFDevice;

@interface DMFFetchDevicePropertiesResultObject : CATTaskResultObject {

	NSDictionary* _valuesByPropertyKey;
	NSDictionary* _errorsByPropertyKey;

}

@property (nonatomic,copy,readonly) NSDictionary * valuesByPropertyKey;              //@synthesize valuesByPropertyKey=_valuesByPropertyKey - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * errorsByPropertyKey;              //@synthesize errorsByPropertyKey=_errorsByPropertyKey - In the implementation block
@property (nonatomic,readonly) DMFDevice * device; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(DMFDevice *)device;
-(NSDictionary *)errorsByPropertyKey;
-(NSDictionary *)valuesByPropertyKey;
-(id)initWithValuesByPropertyKey:(id)arg1 errorsByPropertyKey:(id)arg2 ;
-(id)valueForPropertyKey:(id)arg1 error:(id*)arg2 ;
@end

