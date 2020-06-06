/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSNumber;

@interface ATXLazyOperator : NSObject {

	NSArray* _operands;
	NSNumber* _executedResult;

}

@property (nonatomic,retain) NSArray * operands;                     //@synthesize operands=_operands - In the implementation block
@property (nonatomic,retain) NSNumber * executedResult;              //@synthesize executedResult=_executedResult - In the implementation block
-(double)execute;
-(NSArray *)operands;
-(void)setOperands:(NSArray *)arg1 ;
-(double)opExecute;
-(NSNumber *)executedResult;
-(void)setExecutedResult:(NSNumber *)arg1 ;
@end

