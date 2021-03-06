/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRGetVoiceInputDevicesResponseMessage : MRProtocolMessage

@property (nonatomic,readonly) NSArray * deviceIDs; 
@property (nonatomic,readonly) long long errorCode; 
-(unsigned long long)type;
-(NSArray *)deviceIDs;
-(long long)errorCode;
-(id)initWithDeviceIDs:(id)arg1 errorCode:(long long)arg2 ;
@end

