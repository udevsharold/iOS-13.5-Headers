/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ADOptInStatus_XPC
@required
-(void)clearAdvertisingIdentifier;
-(void)refreshOptInStatusRefreshingWeakToken:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)advertisingIdentifierChanged:(/*^block*/id)arg1;
-(void)setOptInStatus:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)advertisingIdentifier:(/*^block*/id)arg1;

@end

