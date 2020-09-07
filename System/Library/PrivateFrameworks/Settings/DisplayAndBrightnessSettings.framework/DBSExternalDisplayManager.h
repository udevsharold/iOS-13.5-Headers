/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BrightnessSystemClient, NSString, NSNumber;

@interface DBSExternalDisplayManager : NSObject {

	BrightnessSystemClient* _brightnessSystemClient;

}

@property (nonatomic,retain) BrightnessSystemClient * brightnessSystemClient;              //@synthesize brightnessSystemClient=_brightnessSystemClient - In the implementation block
@property (nonatomic,readonly) BOOL externalDisplayAvailable; 
@property (nonatomic,readonly) BOOL externalDisplayBrightnessAvailable; 
@property (nonatomic,readonly) BOOL externalDisplayAutoBrightnessAvailable; 
@property (nonatomic,retain) NSString * currentHDRMode; 
@property (assign,nonatomic) BOOL matchContent; 
@property (nonatomic,readonly) NSNumber * externalDisplayBrightness; 
@property (assign,nonatomic) BOOL autoBrightnessEnabled; 
+(id)defaultManager;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)supportedHDRModes;
-(id)preferredHDRModes;
-(BOOL)matchContent;
-(void)setMatchContent:(BOOL)arg1 ;
-(void)setAutoBrightnessEnabled:(BOOL)arg1 ;
-(BOOL)autoBrightnessEnabled;
-(BrightnessSystemClient *)brightnessSystemClient;
-(void)setBrightnessSystemClient:(BrightnessSystemClient *)arg1 ;
-(BOOL)externalDisplayBrightnessAvailable;
-(NSString *)currentHDRMode;
-(void)setCurrentHDRMode:(NSString *)arg1 ;
-(BOOL)externalDisplayAvailable;
-(BOOL)externalDisplayAutoBrightnessAvailable;
-(NSNumber *)externalDisplayBrightness;
-(void)setExternalDisplayBrightness:(id)arg1 shouldCommit:(BOOL)arg2 ;
-(id)externalDisplayName;
@end
