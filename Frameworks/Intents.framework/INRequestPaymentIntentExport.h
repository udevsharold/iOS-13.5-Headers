/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INPerson, INCurrencyAmount, NSString;


@protocol INRequestPaymentIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INPerson * payer; 
@property (nonatomic,copy) INCurrencyAmount * currencyAmount; 
@property (nonatomic,copy) NSString * note; 
@required
-(id)init;
-(NSString *)note;
-(void)setNote:(id)arg1;
-(INCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(id)arg1;
-(INPerson *)payer;
-(void)setPayer:(id)arg1;

@end

