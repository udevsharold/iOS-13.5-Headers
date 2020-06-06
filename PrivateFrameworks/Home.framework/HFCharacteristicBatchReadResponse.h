/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@protocol HFCharacteristicOperationContextProviding;
@class NSSet, NSDictionary, NSString;

@interface HFCharacteristicBatchReadResponse : NSObject <NAIdentifiable> {

	id<HFCharacteristicOperationContextProviding> _contextProvider;
	NSSet* _allReadResponses;
	NSDictionary* _responseKeyedByCharacteristicUUID;
	NSDictionary* _responsesKeyedByCharacteristicType;

}

@property (nonatomic,readonly) NSDictionary * responseKeyedByCharacteristicUUID;                           //@synthesize responseKeyedByCharacteristicUUID=_responseKeyedByCharacteristicUUID - In the implementation block
@property (nonatomic,readonly) NSDictionary * responsesKeyedByCharacteristicType;                          //@synthesize responsesKeyedByCharacteristicType=_responsesKeyedByCharacteristicType - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicOperationContextProviding> contextProvider;              //@synthesize contextProvider=_contextProvider - In the implementation block
@property (nonatomic,readonly) NSSet * allReadResponses;                                                   //@synthesize allReadResponses=_allReadResponses - In the implementation block
@property (nonatomic,readonly) NSSet * allCharacteristics; 
@property (nonatomic,readonly) NSSet * allCharacteristicTypes; 
@property (nonatomic,readonly) NSSet * allServices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
+(id)aggregatedMetadataForCharacteristics:(id)arg1 ;
+(id)aggregatedReadResponseFromResponses:(id)arg1 withAggregationPolicy:(unsigned long long)arg2 ;
+(id)_aggregatedValueForValues:(id)arg1 withAggregationPolicy:(unsigned long long)arg2 metadata:(id)arg3 ;
+(id)_mostAbnormalValueForValues:(id)arg1 ;
+(id)_averageValueForValues:(id)arg1 metadata:(id)arg2 ;
+(id)_mostCommonValueForValues:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSSet *)allServices;
-(id<HFCharacteristicOperationContextProviding>)contextProvider;
-(NSSet *)allCharacteristics;
-(id)responseForCharacteristicType:(id)arg1 ;
-(id)allResponsesForCharacteristicType:(id)arg1 ;
-(NSSet *)allCharacteristicTypes;
-(id)allResponsesForCharacteristicTypes:(id)arg1 ;
-(id)initWithReadResponses:(id)arg1 contextProvider:(id)arg2 ;
-(id)responseForCharacteristicRecipe:(id)arg1 ;
-(id)batchResponseForService:(id)arg1 ;
-(NSSet *)allReadResponses;
-(id)responseForCharacteristicType:(id)arg1 inService:(id)arg2 ;
-(id)servicesWithValuesPassingTest:(/*^block*/id)arg1 forCharacteristicType:(id)arg2 ;
-(id)servicesWithValue:(id)arg1 forCharacteristicType:(id)arg2 ;
-(id)responseForCharacteristicType:(id)arg1 inServicesOfTypes:(id)arg2 ;
-(NSDictionary *)responseKeyedByCharacteristicUUID;
-(unsigned long long)defaultAggregationPolicyForCharacteristicType:(id)arg1 ;
-(id)responseForCharacteristicType:(id)arg1 aggregationPolicy:(unsigned long long)arg2 ;
-(id)_responseForCharacteristicType:(id)arg1 aggregationPolicy:(unsigned long long)arg2 filter:(/*^block*/id)arg3 ;
-(NSDictionary *)responsesKeyedByCharacteristicType;
-(id)allResponsesForCharacteristicRecipe:(id)arg1 ;
-(id)_aggregatedMetadataForCharacteristicType:(id)arg1 ;
-(id)responseForCharacteristic:(id)arg1 ;
-(id)responseForCharacteristicType:(id)arg1 inService:(id)arg2 aggregationPolicy:(unsigned long long)arg3 ;
-(id)allResponsesForCharacteristicType:(id)arg1 inServicesOfTypes:(id)arg2 ;
-(id)servicesWithErrorForCharacteristicType:(id)arg1 ;
@end

