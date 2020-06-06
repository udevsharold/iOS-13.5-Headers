/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <DoNotDisturb/DNDClientEventDetails.h>

@class NSString, DNDClientEventSource;

@interface DNDMutableClientEventDetails : DNDClientEventDetails

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) DNDClientEventSource * source; 
@property (assign,nonatomic) BOOL shouldAlwaysInterrupt; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(DNDClientEventSource *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setShouldAlwaysInterrupt:(BOOL)arg1 ;
@end

