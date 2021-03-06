/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/HMSetupRemoteHost.h>

@protocol HMSetupRemoteHost;
@interface HMSetupRemoteViewController : _UIRemoteViewController <HMSetupRemoteHost> {

	id<HMSetupRemoteHost> _delegate;

}

@property (assign,nonatomic,__weak) id<HMSetupRemoteHost> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(id<HMSetupRemoteHost>)delegate;
-(void)setDelegate:(id<HMSetupRemoteHost>)arg1 ;
-(void)viewDidLoad;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)accessorySetupDidFinishWithError:(id)arg1 ;
-(void)accessorySetupDidLoad;
-(void)accessorySetupDidFinishWithInfo:(id)arg1 error:(id)arg2 ;
-(void)accessorySetupDidBeginPairing;
-(void)accessorySetupDidFinishPairing;
@end

