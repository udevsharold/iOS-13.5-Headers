/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HMDDataStreamTransportSupportedConfiguration : NSObject <NSCopying> {

	NSMutableArray* _configurations;

}

@property (nonatomic,retain) NSMutableArray * configurations;              //@synthesize configurations=_configurations - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setConfigurations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)configurations;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithConfigurations:(id)arg1 ;
@end

