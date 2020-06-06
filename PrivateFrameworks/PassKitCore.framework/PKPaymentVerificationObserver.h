/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, PKPaymentVerificationObserverDelegate;
@class NSObject, NSString, PKPaymentPass, PKVerificationChannel;

@interface PKPaymentVerificationObserver : NSObject {

	BOOL _observing;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_source> _timer;
	NSString* _identifier;
	PKPaymentPass* _pass;
	PKVerificationChannel* _verificationChannel;
	id<PKPaymentVerificationObserverDelegate> _delegate;

}

@property (nonatomic,retain,readonly) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain,readonly) PKPaymentPass * pass;                                     //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain,readonly) PKVerificationChannel * verificationChannel;              //@synthesize verificationChannel=_verificationChannel - In the implementation block
@property (assign,nonatomic) id<PKPaymentVerificationObserverDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<PKPaymentVerificationObserverDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentVerificationObserverDelegate>)arg1 ;
-(NSString *)identifier;
-(void)stop;
-(PKPaymentPass *)pass;
-(id)initWithPaymentPass:(id)arg1 verificationChannel:(id)arg2 identifier:(id)arg3 ;
-(void)startObservingVerificationSourceWithTimeout:(double)arg1 ;
-(PKVerificationChannel *)verificationChannel;
@end

