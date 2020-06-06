/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BKSHIDEventDescriptor.h>

@interface BKSHIDEventBiometricDescriptor : BKSHIDEventDescriptor {

	unsigned _biometricEventType;

}

@property (nonatomic,readonly) unsigned biometricEventType;              //@synthesize biometricEventType=_biometricEventType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)descriptorWithBiometricEventType:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)describes:(id)arg1 ;
-(id)initWithBiometricEventType:(unsigned)arg1 ;
-(unsigned)biometricEventType;
@end

