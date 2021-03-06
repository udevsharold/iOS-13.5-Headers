/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface _GEOConfigKeyHelper : NSObject <NSCopying> {

	id _lastValue;
	NSNumber* _keyNumber;
	NSString* _keyString;
	SCD_Struct_GE191* configKey;

}

@property (nonatomic,readonly) SCD_Struct_GE191* configKey; 
@property (nonatomic,readonly) NSNumber * keyNumber;                     //@synthesize keyNumber=_keyNumber - In the implementation block
@property (nonatomic,readonly) NSString * keyString;                     //@synthesize keyString=_keyString - In the implementation block
@property (nonatomic,readonly) BOOL valueChanged; 
+(id)helperForGEOConfigKey:(SCD_Struct_GE191*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_currentValue;
-(SCD_Struct_GE191*)configKey;
-(BOOL)isEqualTo_GEOConfigKeyHelper:(id)arg1 ;
-(NSNumber *)keyNumber;
-(NSString *)keyString;
-(BOOL)valueChanged;
@end

