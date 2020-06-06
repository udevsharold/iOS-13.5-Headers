/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class NSString;

@interface HMDNetworkRouterRuleDirection : NSObject <NSCopying, HMDTLVProtocol> {

	long long _direction;

}

@property (assign,nonatomic) long long direction;                   //@synthesize direction=_direction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
+(id)directionFromLANDirection:(unsigned char)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(id)initWithDirection:(long long)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
@end

