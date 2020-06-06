/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INBillPayee, INPaymentAccount, INPaymentAmount, INDateComponentsRange, NSString;


@protocol INPayBillIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INBillPayee * billPayee; 
@property (nonatomic,copy) INPaymentAccount * fromAccount; 
@property (nonatomic,copy) INPaymentAmount * transactionAmount; 
@property (nonatomic,copy) INDateComponentsRange * transactionScheduledDate; 
@property (nonatomic,copy) NSString * transactionNote; 
@property (assign,nonatomic) long long billType; 
@property (nonatomic,copy) INDateComponentsRange * dueDate; 
@required
-(id)init;
-(INPaymentAccount *)fromAccount;
-(void)setFromAccount:(id)arg1;
-(INPaymentAmount *)transactionAmount;
-(void)setTransactionAmount:(id)arg1;
-(INDateComponentsRange *)transactionScheduledDate;
-(void)setTransactionScheduledDate:(id)arg1;
-(NSString *)transactionNote;
-(void)setTransactionNote:(id)arg1;
-(INBillPayee *)billPayee;
-(void)setBillPayee:(id)arg1;
-(INDateComponentsRange *)dueDate;
-(void)setDueDate:(id)arg1;
-(long long)billType;
-(void)setBillType:(long long)arg1;

@end

