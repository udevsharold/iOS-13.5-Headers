/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFMessageDestination.h>
#import <libobjc.A.dylib/HMDRemoteAddressable.h>

@class NSString;

@interface HMDRemoteMessageDestination : HMFMessageDestination <HMDRemoteAddressable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)allMessageDestinations;
-(id)remoteDestinationString;
@end

