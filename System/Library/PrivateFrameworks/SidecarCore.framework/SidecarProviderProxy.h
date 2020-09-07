/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SidecarCore/SidecarSessionDelegate.h>

@protocol SidecarServiceProviderDelegate;
@interface SidecarProviderProxy : NSObject <SidecarSessionDelegate> {

	id<SidecarServiceProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SidecarServiceProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)defaultProxy;
-(id)init;
-(id<SidecarServiceProviderDelegate>)delegate;
-(void)setDelegate:(id<SidecarServiceProviderDelegate>)arg1 ;
-(void)sidecarSessionStarted:(id)arg1 ;
-(void)sidecarSession:(id)arg1 receivedMessage:(id)arg2 ;
-(void)sidecarSession:(id)arg1 closedWithError:(id)arg2 ;
-(void)sidecarServiceTerminate;
@end
