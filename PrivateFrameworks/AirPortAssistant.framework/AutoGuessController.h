/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/AssistantCallbackController.h>

@class NSString, NSDictionary, NSTimer, NSMutableDictionary, NSArray, NSThread;

@interface AutoGuessController : AssistantCallbackController {

	int _lastAutoGuessUISelector;
	int _currentAutoGuessUISelector;
	NSString* _lastParamString;
	NSString* _currentParamString;
	BOOL _onShortTimer;
	ACPBrowserSessionRef _acpBrowserSession;
	AutoGuessContextRef _guessContext;
	NSDictionary* _lastInstrumentation;
	NSTimer* _browseReadyTimer;
	int _wifiScanStatus;
	int _bonjourBrowseStatus;
	BOOL _autoJoinState;
	BOOL _updatedTargetInfo;
	NSString* _targetMACAddress;
	NSDictionary* _targetScanRecord;
	NSDictionary* _targetBrowseRecord;
	NSMutableDictionary* _browsedBases;
	NSArray* _wifiScanInfos;
	id _delegate;
	NSDictionary* unconfiguredDeviceThatIsBeingSetup;
	NSDictionary* _guessCompletionDict;
	NSThread* _autoGuessThread;

}

@property (retain) NSTimer * _browseReadyTimer;                                    //@synthesize browseReadyTimer=_browseReadyTimer - In the implementation block
@property (retain) NSString * targetMACAddress;                                    //@synthesize targetMACAddress=_targetMACAddress - In the implementation block
@property (retain) NSDictionary * targetScanRecord;                                //@synthesize targetScanRecord=_targetScanRecord - In the implementation block
@property (retain) NSDictionary * targetBrowseRecord;                              //@synthesize targetBrowseRecord=_targetBrowseRecord - In the implementation block
@property (retain) NSMutableDictionary * _browsedBases;                            //@synthesize browsedBases=_browsedBases - In the implementation block
@property (retain) NSArray * _wifiScanInfos;                                       //@synthesize wifiScanInfos=_wifiScanInfos - In the implementation block
@property (assign) id<AutoGuessUIDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign) int lastAutoGuessUISelector;                                    //@synthesize lastAutoGuessUISelector=_lastAutoGuessUISelector - In the implementation block
@property (assign) int currentAutoGuessUISelector;                                 //@synthesize currentAutoGuessUISelector=_currentAutoGuessUISelector - In the implementation block
@property (retain) NSString * lastParamString;                                     //@synthesize lastParamString=_lastParamString - In the implementation block
@property (retain) NSString * currentParamString;                                  //@synthesize currentParamString=_currentParamString - In the implementation block
@property (retain) NSDictionary * unconfiguredDeviceThatIsBeingSetup; 
@property (retain) NSDictionary * lastInstrumentation;                             //@synthesize lastInstrumentation=_lastInstrumentation - In the implementation block
@property (nonatomic,retain) NSDictionary * guessCompletionDict;                   //@synthesize guessCompletionDict=_guessCompletionDict - In the implementation block
+(id)shortProductNameFromBaseStationDictionary:(id)arg1 ;
+(id)restoreRecommendationDictionaryFromCompletionDict:(id)arg1 ;
+(id)recommendationToActionChoice:(id)arg1 ;
+(BOOL)isRestoreAnOptionForTheRecommendations:(id)arg1 ;
+(id)shortProductNameForUnconfiguredDeviceFromAutoGuessResults:(id)arg1 ;
+(id)sourceBaseStationFromRecommendation:(id)arg1 ;
+(id)sourceNetworkFromRecommendation:(id)arg1 ;
+(id)unconfiguredBaseStationFromGuessCompleteDict:(id)arg1 ;
+(id)unconfiguredBaseStationFromRecommendation:(id)arg1 ;
+(BOOL)shouldShowPasswordUIForRecommendation:(id)arg1 ;
+(id)restoreOfferFromCompletionDict:(id)arg1 ;
+(id)recommendationStringFromCompletionDict:(id)arg1 ;
+(id)unconfiguredBaseStationCanBeConfiguredFromCompletionDict:(id)arg1 ;
+(id)primaryRecommendationDictionaryFromCompletionDict:(id)arg1 ;
+(id)fullAutoGuessDictionaryFromCompletionDict:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<AutoGuessUIDelegate>)delegate;
-(void)setDelegate:(id<AutoGuessUIDelegate>)arg1 ;
-(void)set_browsedBases:(NSMutableDictionary *)arg1 ;
-(void)setWiFiScanStatus:(int)arg1 ;
-(void)setBonjourBrowseStatus:(int)arg1 ;
-(void)wirelessScanDone:(id)arg1 ;
-(NSString *)targetMACAddress;
-(NSDictionary *)targetScanRecord;
-(NSDictionary *)targetBrowseRecord;
-(void)uiAssetsUpdated:(id)arg1 ;
-(void)setTargetScanRecord:(NSDictionary *)arg1 ;
-(id)targetInfo;
-(void)setTargetMACAddress:(NSString *)arg1 ;
-(void)setGuessCompletionDict:(NSDictionary *)arg1 ;
-(int)startAutoGuessForUnconfiguredMACAddress:(id)arg1 withWifiScanInfos:(id)arg2 ;
-(int)wifiScanStatus;
-(void)cancelWiFiScanner;
-(int)bonjourBrowseStatus;
-(void)cancelBonjourBrowser;
-(int)startWiFiScanner;
-(int)runAutoGuessWithWifiScanInfos:(id)arg1 ;
-(int)cancelAutoGuess;
-(void)setTargetBrowseRecord:(NSDictionary *)arg1 ;
-(NSTimer *)_browseReadyTimer;
-(void)set_browseReadyTimer:(NSTimer *)arg1 ;
-(NSMutableDictionary *)_browsedBases;
-(NSArray *)_wifiScanInfos;
-(void)set_wifiScanInfos:(NSArray *)arg1 ;
-(NSString *)lastParamString;
-(void)setLastParamString:(NSString *)arg1 ;
-(NSString *)currentParamString;
-(void)setCurrentParamString:(NSString *)arg1 ;
-(int)lastAutoGuessUISelector;
-(void)setLastAutoGuessUISelector:(int)arg1 ;
-(int)currentAutoGuessUISelector;
-(void)setCurrentAutoGuessUISelector:(int)arg1 ;
-(NSDictionary *)unconfiguredDeviceThatIsBeingSetup;
-(void)setUnconfiguredDeviceThatIsBeingSetup:(NSDictionary *)arg1 ;
-(NSDictionary *)lastInstrumentation;
-(void)setLastInstrumentation:(NSDictionary *)arg1 ;
-(NSDictionary *)guessCompletionDict;
-(int)startBonjourBrowser;
-(void)startAutoGuessIfReady;
-(void)updateTargetInfo:(BOOL)arg1 ;
-(void)runAutoGuessThread:(id)arg1 ;
-(void)stopBonjourBrowser;
-(void)bonjourTXTUpdated:(id)arg1 ;
-(void)bonjourTXTRemoved:(id)arg1 ;
-(void)browseReadyTimerCallback:(id)arg1 ;
-(void)stopWiFiScanner;
-(BOOL)okToSwitchToShortBonjourTimeout:(id)arg1 ;
-(void)autoGuessEngineComplete;
-(id)createCompletionDictFromAutoGuessResults:(id)arg1 ;
@end

