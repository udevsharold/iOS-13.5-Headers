/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber;


@protocol INStartCallIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSNumber * shouldDoEmergencyCountdown; 
@property (assign,nonatomic) long long confirmationReason; 
@required
-(long long)code;
-(long long)confirmationReason;
-(void)setConfirmationReason:(long long)arg1;
-(NSNumber *)shouldDoEmergencyCountdown;
-(void)setShouldDoEmergencyCountdown:(id)arg1;

@end

