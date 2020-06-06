/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@class NSDictionary, NSSet, NSString;

@interface HFControlItemCharacteristicOptions : NSObject <NAIdentifiable> {

	NSDictionary* _characteristicTypesByUsage;

}

@property (nonatomic,copy,readonly) NSSet * allCharacteristicTypes; 
@property (nonatomic,copy,readonly) NSSet * allRequiredCharacteristicTypes; 
@property (nonatomic,copy,readonly) NSDictionary * characteristicTypesByUsage;              //@synthesize characteristicTypesByUsage=_characteristicTypesByUsage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
+(id)optionsWithReadWriteCharacteristicTypes:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)initWithCharacteristicTypesByUsage:(id)arg1 ;
-(id)optionsByAddingCharacteristicOptions:(id)arg1 ;
-(NSSet *)allCharacteristicTypes;
-(id)optionsByAddingCharacteristicTypes:(id)arg1 forUsage:(unsigned long long)arg2 ;
-(id)characteristicTypesForUsage:(unsigned long long)arg1 ;
-(NSSet *)allRequiredCharacteristicTypes;
-(id)_characteristicTypesForUsagesPassingTest:(/*^block*/id)arg1 ;
-(NSDictionary *)characteristicTypesByUsage;
-(id)_optionsByReducingWithOptions:(id)arg1 reducer:(/*^block*/id)arg2 ;
-(id)optionsByIntersectingWithOptions:(id)arg1 ;
@end

