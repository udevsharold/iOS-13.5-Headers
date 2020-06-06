/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PKPaymentTransactionDetailAmountLineItem <NSObject>
@property (nonatomic,readonly) unsigned long long lineItemType; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) NSString * value; 
@property (nonatomic,readonly) BOOL isEmphasized; 
@property (nonatomic,readonly) BOOL hasTrailingLineSeperator; 
@required
-(NSString *)value;
-(NSString *)label;
-(BOOL)isEmphasized;
-(BOOL)hasTrailingLineSeperator;
-(unsigned long long)lineItemType;

@end

