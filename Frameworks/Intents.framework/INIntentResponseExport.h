/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _INPBIntentResponse;


@protocol INIntentResponseExport <NSObject,JSExport>
@property (nonatomic,copy,readonly) _INPBIntentResponse * backingStore; 
@property (nonatomic,readonly) long long code; 
@required
-(id)init;
-(long long)code;
-(_INPBIntentResponse *)backingStore;
-(long long)_intentHandlingStatus;
-(id)_payloadResponseMessageData;
-(void)_setPayloadResponseMessageData:(id)arg1;

@end

