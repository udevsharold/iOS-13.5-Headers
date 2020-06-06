/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface DNDSModeDetails : NSObject <NSCopying> {

	unsigned long long _interruptionSuppression;

}

@property (nonatomic,readonly) unsigned long long interruptionSuppression;              //@synthesize interruptionSuppression=_interruptionSuppression - In the implementation block
+(id)detailsForInactiveDoNotDisturb;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)interruptionSuppression;
-(id)restrictedDetailsWithDetails:(id)arg1 ;
-(id)initWithInterruptionSuppression:(unsigned long long)arg1 ;
@end
