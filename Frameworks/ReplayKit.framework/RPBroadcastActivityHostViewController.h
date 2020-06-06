/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReplayKit/ReplayKit-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/RPBroadcastActivityCommunicationHostProtocol.h>

@class RPBroadcastActivityViewController;

@interface RPBroadcastActivityHostViewController : _UIRemoteViewController <RPBroadcastActivityCommunicationHostProtocol> {

	RPBroadcastActivityViewController* _broadcastActivityViewController;

}

@property (assign,nonatomic,__weak) RPBroadcastActivityViewController * broadcastActivityViewController;              //@synthesize broadcastActivityViewController=_broadcastActivityViewController - In the implementation block
-(void)viewDidLoad;
-(unsigned long long)popoverArrowDirection;
-(long long)modalPresentationStyle;
-(oneway void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 cancelled:(BOOL)arg4 ;
-(CGRect)popoverControllerSourceRect;
-(oneway void)presentationInfoWithCompletion:(/*^block*/id)arg1 ;
-(RPBroadcastActivityViewController *)broadcastActivityViewController;
-(void)setBroadcastActivityViewController:(RPBroadcastActivityViewController *)arg1 ;
@end

