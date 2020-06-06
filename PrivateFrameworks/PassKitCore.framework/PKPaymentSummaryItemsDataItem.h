/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class NSString, NSArray;

@interface PKPaymentSummaryItemsDataItem : PKPaymentDataItem

@property (nonatomic,readonly) NSString * currencyCode; 
@property (nonatomic,readonly) NSArray * paymentSummaryItems; 
+(long long)dataType;
-(NSString *)currencyCode;
-(NSArray *)paymentSummaryItems;
-(BOOL)isValidWithError:(id*)arg1 ;
@end

