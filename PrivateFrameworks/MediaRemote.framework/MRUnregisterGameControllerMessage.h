/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@interface MRUnregisterGameControllerMessage : MRProtocolMessage

@property (nonatomic,readonly) unsigned long long controllerID; 
-(unsigned long long)type;
-(unsigned long long)controllerID;
-(id)initWithControllerID:(unsigned long long)arg1 ;
@end

