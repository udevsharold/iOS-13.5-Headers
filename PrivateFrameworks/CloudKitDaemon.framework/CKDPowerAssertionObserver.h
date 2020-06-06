/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface CKDPowerAssertionObserver : NSObject {

	NSMapTable* _operationsHoldingPowerAssertionsByID;

}

@property (nonatomic,retain) NSMapTable * operationsHoldingPowerAssertionsByID;              //@synthesize operationsHoldingPowerAssertionsByID=_operationsHoldingPowerAssertionsByID - In the implementation block
+(id)sharedObserver;
-(id)init;
-(id)_init;
-(id)CKStatusReportArray;
-(void)operationDidReleasePowerAssertion:(id)arg1 ;
-(void)operationDidAcquirePowerAssertion:(id)arg1 ;
-(NSMapTable *)operationsHoldingPowerAssertionsByID;
-(void)setOperationsHoldingPowerAssertionsByID:(NSMapTable *)arg1 ;
@end

