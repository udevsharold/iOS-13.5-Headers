/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INTimer;


@protocol INCreateTimerIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INTimer * createdTimer; 
@required
-(long long)code;
-(INTimer *)createdTimer;
-(void)setCreatedTimer:(id)arg1;

@end
