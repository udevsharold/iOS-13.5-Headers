/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RCConfigurationSettings, RCDeviceInfo, NSURL, RCAsyncSerialQueue, RCKeyValueStore, NSMutableDictionary;

@interface RCConfigurationManager : NSObject {

	RCConfigurationSettings* _configurationSettings;
	RCDeviceInfo* _deviceInfo;
	NSURL* _contentDirectoryURL;
	RCAsyncSerialQueue* _configRequestSerialQueue;
	RCKeyValueStore* _localStore;
	NSMutableDictionary* _configResourceByRequestKey;

}

@property (nonatomic,retain) RCConfigurationSettings * configurationSettings;               //@synthesize configurationSettings=_configurationSettings - In the implementation block
@property (nonatomic,retain) RCDeviceInfo * deviceInfo;                                     //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,retain) NSURL * contentDirectoryURL;                                   //@synthesize contentDirectoryURL=_contentDirectoryURL - In the implementation block
@property (nonatomic,retain) RCAsyncSerialQueue * configRequestSerialQueue;                 //@synthesize configRequestSerialQueue=_configRequestSerialQueue - In the implementation block
@property (nonatomic,retain) RCKeyValueStore * localStore;                                  //@synthesize localStore=_localStore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * configResourceByRequestKey;              //@synthesize configResourceByRequestKey=_configResourceByRequestKey - In the implementation block
-(RCDeviceInfo *)deviceInfo;
-(void)setDeviceInfo:(RCDeviceInfo *)arg1 ;
-(RCKeyValueStore *)localStore;
-(id)initWithContentDirectoryURL:(id)arg1 ;
-(void)fetchSingleConfigurationWithSettings:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(RCConfigurationSettings *)configurationSettings;
-(void)setConfigurationSettings:(RCConfigurationSettings *)arg1 ;
-(void)_loadConfigurationResourcesFromStore;
-(void)fetchMultiConfigurationWithSettings:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fetchConfigurationFromFallbackURLWithSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)configResourceByRequestKey;
-(id)_endpointURLForEnvironment:(unsigned long long)arg1 requestKey:(id)arg2 ;
-(BOOL)_isAllowedToReachEndpointWithSettings:(id)arg1 configurationResource:(id)arg2 endpointURL:(id)arg3 ;
-(BOOL)_areAllConfigurationResourcesAvailable:(id)arg1 requestKeys:(id)arg2 ;
-(BOOL)_areAllConfigurationResourcesInvalid:(id)arg1 allowedToReachEndpoint:(BOOL)arg2 useBackgroundRefreshRate:(BOOL)arg3 requestKeys:(id)arg4 ;
-(void)_fetchMultiConfigurationFromEndpointURL:(id)arg1 settings:(id)arg2 changeTagsByRequestKey:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_isValidConfigurationResource:(id)arg1 allowedToReachEndpoint:(BOOL)arg2 useBackgroundRefreshRate:(BOOL)arg3 ;
-(RCAsyncSerialQueue *)configRequestSerialQueue;
-(void)_saveConfigurationResource:(id)arg1 ;
-(void)_removeConfigurationResourceForRequestKey:(id)arg1 ;
-(void)setConfigResourceByRequestKey:(NSMutableDictionary *)arg1 ;
-(id)_decodeConfigurationResource:(id)arg1 ;
-(id)_encodeConfigurationResource:(id)arg1 ;
-(void)fetchConfigurationWithSettings:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSURL *)contentDirectoryURL;
-(void)setContentDirectoryURL:(NSURL *)arg1 ;
-(void)setConfigRequestSerialQueue:(RCAsyncSerialQueue *)arg1 ;
-(void)setLocalStore:(RCKeyValueStore *)arg1 ;
@end

