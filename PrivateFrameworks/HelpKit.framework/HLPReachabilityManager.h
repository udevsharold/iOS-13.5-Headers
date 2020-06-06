/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HLPReachabilityManagerDelegate;
@class HLPReachability, NSString;

@interface HLPReachabilityManager : NSObject {

	BOOL _notifying;
	BOOL _hostActive;
	BOOL _reachabilityInitialized;
	BOOL _connected;
	BOOL _internetActive;
	id<HLPReachabilityManagerDelegate> _delegate;
	HLPReachability* _internetReachability;
	HLPReachability* _hostReachability;
	NSString* _hostName;

}

@property (assign,nonatomic) BOOL reachabilityInitialized;                                    //@synthesize reachabilityInitialized=_reachabilityInitialized - In the implementation block
@property (assign,nonatomic) BOOL connected;                                                  //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) BOOL internetActive;                                             //@synthesize internetActive=_internetActive - In the implementation block
@property (assign,nonatomic,__weak) id<HLPReachabilityManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) HLPReachability * internetReachability;                          //@synthesize internetReachability=_internetReachability - In the implementation block
@property (nonatomic,retain) HLPReachability * hostReachability;                              //@synthesize hostReachability=_hostReachability - In the implementation block
@property (nonatomic,retain) NSString * hostName;                                             //@synthesize hostName=_hostName - In the implementation block
-(id)init;
-(void)dealloc;
-(id<HLPReachabilityManagerDelegate>)delegate;
-(void)setDelegate:(id<HLPReachabilityManagerDelegate>)arg1 ;
-(NSString *)hostName;
-(void)setInternetActive:(BOOL)arg1 ;
-(void)setConnected:(BOOL)arg1 ;
-(BOOL)connected;
-(void)setHostName:(NSString *)arg1 ;
-(void)stopNotifier;
-(void)startNotifier;
-(void)reachabilityChanged:(id)arg1 ;
-(void)setReachabilityInitialized:(BOOL)arg1 ;
-(BOOL)isNetworkError:(id)arg1 ;
-(BOOL)reachabilityInitialized;
-(BOOL)internetActive;
-(HLPReachability *)internetReachability;
-(void)setInternetReachability:(HLPReachability *)arg1 ;
-(HLPReachability *)hostReachability;
-(void)setHostReachability:(HLPReachability *)arg1 ;
@end

