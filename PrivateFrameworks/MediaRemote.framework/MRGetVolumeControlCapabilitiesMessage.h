/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRGetVolumeControlCapabilitiesMessage : MRProtocolMessage

@property (nonatomic,readonly) NSString * outputDeviceUID; 
-(unsigned long long)type;
-(NSString *)outputDeviceUID;
-(id)initWithOutputDeviceUID:(id)arg1 ;
@end

