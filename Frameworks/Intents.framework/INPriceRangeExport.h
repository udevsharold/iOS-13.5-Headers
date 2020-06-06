/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDecimalNumber, NSString;


@protocol INPriceRangeExport <NSObject,JSExport>
@property (nonatomic,copy) NSDecimalNumber * minimumPrice; 
@property (nonatomic,copy) NSDecimalNumber * maximumPrice; 
@property (nonatomic,copy) NSString * currencyCode; 
@required
+(id)_priceWithPriceRangeValue:(id)arg1;
-(id)init;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(id)arg1;
-(NSDecimalNumber *)maximumPrice;
-(void)setMaximumPrice:(id)arg1;
-(NSDecimalNumber *)minimumPrice;
-(void)setMinimumPrice:(id)arg1;

@end

