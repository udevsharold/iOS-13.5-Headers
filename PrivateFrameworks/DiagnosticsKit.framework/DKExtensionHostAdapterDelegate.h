/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DKExtensionHostAdapterDelegate <NSObject>
@property (assign,nonatomic,__weak) id hostServicesDelegate; 
@required
-(void)cancelExtensionRequest;
-(void)completeWithPayload:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setHostServicesDelegate:(id)arg1;
-(id)hostServicesDelegate;

@end

