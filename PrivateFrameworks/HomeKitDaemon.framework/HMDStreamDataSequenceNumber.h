/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HMDStreamDataSequenceNumber : HMFObject <NSCopying> {

	unsigned long long _value;

}

@property (readonly) unsigned long long value;                   //@synthesize value=_value - In the implementation block
@property (getter=isInitial,readonly) BOOL initial; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)value;
-(id)initWithValue:(unsigned long long)arg1 ;
-(id)attributeDescriptions;
-(BOOL)isInitial;
-(id)initWithStreamDataDictionary:(id)arg1 ;
@end

