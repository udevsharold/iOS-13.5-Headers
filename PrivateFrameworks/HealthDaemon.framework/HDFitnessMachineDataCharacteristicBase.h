/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthServiceCharacteristic.h>
#import <libobjc.A.dylib/HDDatumRendering.h>
#import <libobjc.A.dylib/HDHealthServiceCharacteristic.h>

@class NSDate, NSString;

@interface HDFitnessMachineDataCharacteristicBase : HDHealthServiceCharacteristic <HDDatumRendering, HDHealthServiceCharacteristic>

@property (nonatomic,readonly) NSDate * updateTime; 
@property (nonatomic,readonly) BOOL elapsedTimeIsSet; 
@property (nonatomic,readonly) unsigned short elapsedTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)uuid;
+(unsigned char)flagFieldLength;
+(id)_buildWithBinaryValue:(id)arg1 error:(id*)arg2 ;
-(unsigned short)elapsedTime;
-(id)allFields;
-(BOOL)elapsedTimeIsSet;
-(id)generateDatums:(id)arg1 ;
-(id)getBinaryValueWithError:(id*)arg1 ;
@end

