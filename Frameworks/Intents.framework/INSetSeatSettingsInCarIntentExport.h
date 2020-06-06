/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, INSpeakableString;


@protocol INSetSeatSettingsInCarIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSNumber * enableHeating; 
@property (nonatomic,copy) NSNumber * enableCooling; 
@property (nonatomic,copy) NSNumber * enableMassage; 
@property (assign,nonatomic) long long seat; 
@property (nonatomic,copy) NSNumber * level; 
@property (assign,nonatomic) long long relativeLevelSetting; 
@property (nonatomic,copy) INSpeakableString * carName; 
@required
-(id)init;
-(NSNumber *)level;
-(void)setLevel:(id)arg1;
-(INSpeakableString *)carName;
-(void)setCarName:(id)arg1;
-(NSNumber *)enableHeating;
-(void)setEnableHeating:(id)arg1;
-(NSNumber *)enableCooling;
-(void)setEnableCooling:(id)arg1;
-(NSNumber *)enableMassage;
-(void)setEnableMassage:(id)arg1;
-(long long)seat;
-(void)setSeat:(long long)arg1;
-(long long)relativeLevelSetting;
-(void)setRelativeLevelSetting:(long long)arg1;

@end

