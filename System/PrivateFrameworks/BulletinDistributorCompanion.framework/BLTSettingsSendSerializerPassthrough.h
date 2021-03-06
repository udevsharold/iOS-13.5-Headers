/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BLTSettingsSendSerializerDelegate;
@interface BLTSettingsSendSerializerPassthrough : NSObject {

	id<BLTSettingsSendSerializerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BLTSettingsSendSerializerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<BLTSettingsSendSerializerDelegate>)delegate;
-(void)setDelegate:(id<BLTSettingsSendSerializerDelegate>)arg1 ;
-(void)handleFileURL:(id)arg1 ;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 onlyOneFor:(id)arg5 didSend:(/*^block*/id)arg6 andResponse:(/*^block*/id)arg7 spoolToFile:(BOOL)arg8 ;
-(void)sendNowWithSent:(/*^block*/id)arg1 withAcknowledgement:(/*^block*/id)arg2 withTimeout:(id)arg3 ;
@end

