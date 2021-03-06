/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/NWEndpoint.h>

@class NSString;

@interface NWBonjourServiceEndpoint : NWEndpoint

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSString * domain; 
+(unsigned)endpointType;
+(id)endpointWithName:(id)arg1 type:(id)arg2 domain:(id)arg3 ;
-(NSString *)name;
-(NSString *)domain;
-(NSString *)type;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
@end

