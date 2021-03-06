/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSMutableDictionary;


@protocol MPAssistantLogEvent <NSObject>
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) long long eventCode; 
@property (nonatomic,readonly) NSMutableDictionary * eventPayload; 
@required
-(NSString *)eventName;
-(long long)eventCode;
-(NSMutableDictionary *)eventPayload;

@end

