/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface ADRemoteSigningService : NSObject {

	BOOL _didLeaveGroup;
	NSObject*<OS_dispatch_queue> _signingQueue;
	NSObject*<OS_dispatch_group> _signingGroup;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> signingQueue;              //@synthesize signingQueue=_signingQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> signingGroup;              //@synthesize signingGroup=_signingGroup - In the implementation block
@property (assign,nonatomic) BOOL didLeaveGroup;                                     //@synthesize didLeaveGroup=_didLeaveGroup - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)signedCredentialForRequest:(id)arg1 withPersistence:(unsigned long long)arg2 ;
-(id)signedCredentialForUrl:(id)arg1 userAgent:(id)arg2 withPersistence:(unsigned long long)arg3 ;
-(void)setDidLeaveGroup:(BOOL)arg1 ;
-(BOOL)didLeaveGroup;
-(NSObject*<OS_dispatch_queue>)signingQueue;
-(void)setSigningQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_group>)signingGroup;
-(void)setSigningGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

