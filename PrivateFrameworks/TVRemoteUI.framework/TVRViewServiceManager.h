/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>

@class TVRViewServiceConfigContext, SBSRemoteAlertHandle, NSString;

@interface TVRViewServiceManager : NSObject <SBSRemoteAlertHandleObserver> {

	TVRViewServiceConfigContext* _viewServiceContext;
	SBSRemoteAlertHandle* _alertHandle;
	NSString* _lastActiveEndpointIdentifier;

}

@property (nonatomic,retain) TVRViewServiceConfigContext * viewServiceContext;              //@synthesize viewServiceContext=_viewServiceContext - In the implementation block
@property (nonatomic,retain) SBSRemoteAlertHandle * alertHandle;                            //@synthesize alertHandle=_alertHandle - In the implementation block
@property (nonatomic,copy) NSString * lastActiveEndpointIdentifier;                         //@synthesize lastActiveEndpointIdentifier=_lastActiveEndpointIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)prewarm;
-(void)dismiss;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(NSString *)lastActiveEndpointIdentifier;
-(void)setLastActiveEndpointIdentifier:(NSString *)arg1 ;
-(id)_actionForSetting:(unsigned long long)arg1 animationBlock:(/*^block*/id)arg2 ;
-(void)setAlertHandle:(SBSRemoteAlertHandle *)arg1 ;
-(SBSRemoteAlertHandle *)alertHandle;
-(void)_prewarmWithLaunchViewService:(BOOL)arg1 fetchActiveEndpoint:(BOOL)arg2 ;
-(void)_launchViewServiceSuspended;
-(void)_fetchActiveEndpointUID;
-(void)presentWithContext:(id)arg1 ;
-(id)_settingNameForValue:(unsigned long long)arg1 ;
-(TVRViewServiceConfigContext *)viewServiceContext;
-(void)setViewServiceContext:(TVRViewServiceConfigContext *)arg1 ;
@end

