/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:16 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSArray;

@interface CEMPredicateBudget_TimeBudgetItem : CEMPayloadBase {

	NSNumber* _payloadSeconds;
	NSArray* _payloadDays;

}

@property (nonatomic,copy) NSNumber * payloadSeconds;              //@synthesize payloadSeconds=_payloadSeconds - In the implementation block
@property (nonatomic,copy) NSArray * payloadDays;                  //@synthesize payloadDays=_payloadDays - In the implementation block
+(id)buildWithSeconds:(id)arg1 withDays:(id)arg2 ;
+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithSeconds:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadSeconds:(NSNumber *)arg1 ;
-(void)setPayloadDays:(NSArray *)arg1 ;
-(NSNumber *)payloadSeconds;
-(NSArray *)payloadDays;
@end

