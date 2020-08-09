/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/_SFAppleConnectExtensionHostProtocol.h>

@protocol _SFAppleConnectExtensionPageDelegate;
@class UIViewController;

@interface _SFAppleConnectExtensionHostContext : NSExtensionContext <_SFAppleConnectExtensionHostProtocol> {

	id<_SFAppleConnectExtensionPageDelegate> _delegate;
	UIViewController* _remoteViewController;

}

@property (assign,nonatomic,__weak) id<_SFAppleConnectExtensionPageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIViewController * remoteViewController;                               //@synthesize remoteViewController=_remoteViewController - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)dealloc;
-(id<_SFAppleConnectExtensionPageDelegate>)delegate;
-(void)setDelegate:(id<_SFAppleConnectExtensionPageDelegate>)arg1 ;
-(UIViewController *)remoteViewController;
-(void)setRemoteViewController:(UIViewController *)arg1 ;
-(void)dispatchMessageToContentScriptWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)presentExtensionUI;
-(void)dismissExtensionUI;
@end
