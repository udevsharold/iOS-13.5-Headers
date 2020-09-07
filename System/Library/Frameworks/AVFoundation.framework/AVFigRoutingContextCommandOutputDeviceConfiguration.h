/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOutputDeviceConfigurationRetrieval.h>

@class NSString, NSData, NSArray;

@interface AVFigRoutingContextCommandOutputDeviceConfiguration : NSObject <AVOutputDeviceConfigurationRetrieval> {

	CFDictionaryRef _response;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) NSString * devicePassword; 
@property (nonatomic,readonly) NSString * deviceID; 
@property (nonatomic,readonly) NSData * devicePublicKey; 
@property (nonatomic,readonly) BOOL automaticallyAllowsConnectionsFromPeersInHomeGroup; 
@property (nonatomic,readonly) BOOL onlyAllowsConnectionsFromPeersInHomeGroup; 
@property (nonatomic,readonly) NSArray * peersInHomeGroup; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(NSString *)deviceID;
-(NSString *)deviceName;
-(NSData *)devicePublicKey;
-(BOOL)automaticallyAllowsConnectionsFromPeersInHomeGroup;
-(BOOL)onlyAllowsConnectionsFromPeersInHomeGroup;
-(id)initWithRoutingContextComandResponse:(CFDictionaryRef)arg1 ;
-(NSString *)devicePassword;
-(NSArray *)peersInHomeGroup;
@end
