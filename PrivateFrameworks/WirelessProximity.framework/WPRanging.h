/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WPClient.h>

@protocol WPRangingDelegate;
@interface WPRanging : WPClient {

	id<WPRangingDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WPRangingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)invalidate;
-(id<WPRangingDelegate>)delegate;
-(void)setDelegate:(id<WPRangingDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)stateDidChange:(long long)arg1 ;
-(id)clientAsString;
-(void)rangingEnabled:(BOOL)arg1 withError:(id)arg2 ;
-(void)enableRanging:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)isRangingEnabledReply:(/*^block*/id)arg1 ;
-(void)enableRanging:(BOOL)arg1 ;
@end
