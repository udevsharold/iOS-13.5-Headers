/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRTextInputMessage : MRProtocolMessage

@property (nonatomic,readonly) unsigned long long actionType; 
@property (nonatomic,readonly) NSString * text; 
-(unsigned long long)type;
-(NSString *)text;
-(unsigned long long)actionType;
-(id)initWithActionType:(unsigned long long)arg1 text:(id)arg2 ;
@end

