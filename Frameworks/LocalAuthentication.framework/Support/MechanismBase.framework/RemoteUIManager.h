/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>
#import <libobjc.A.dylib/LARemoteUIHost.h>

@protocol LAUIMechanismLARemoteUIHost;
@class MechanismBase, NSString;

@interface RemoteUIManager : NSObject <SBSRemoteAlertHandleObserver, LARemoteUIHost> {

	MechanismBase*<LAUIMechanism>*<LARemoteUIHost> _uiMechanism;
	/*^block*/id _pendingShowUiReply;
	/*^block*/id _pendingUiActivationBlock;
	id _pendingUiMechanism;
	id _dismissingUi;
	BOOL _uiDismissedBeforeConnection;
	BOOL _usingSBRemoteAlert;
	int _showUiCounter;
	int _dismissUiCounter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(void)connectRemoteUI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)disconnectRemoteUI;
-(void)_assignPendingMechanism:(id)arg1 usingSBRemoteAlert:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)_activateUi;
-(void)_replyOnceToShowUi:(BOOL)arg1 error:(id)arg2 ;
-(void)showUiForMechanism:(id)arg1 auditToken:(id)arg2 undimScreen:(BOOL)arg3 forSiri:(BOOL)arg4 pid:(int)arg5 uid:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)prepareForRemoteViewControllerWithMechanism:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)connectionToViewServiceInvalidated;
-(void)dismissRemoteUI:(id)arg1 uiMechanism:(id)arg2 uiDisappeared:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
@end

