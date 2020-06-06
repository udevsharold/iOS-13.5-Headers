/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFPrimaryStateControlItem.h>
#import <libobjc.A.dylib/HFPrimaryStateWriter.h>

@class NSSet, NSString;

@interface HFPowerStateControlItem : HFPrimaryStateControlItem <HFPrimaryStateWriter> {

	NSSet* _auxiliaryTargetValueTuples;

}

@property (nonatomic,readonly) NSSet * auxiliaryTargetValueTuples;              //@synthesize auxiliaryTargetValueTuples=_auxiliaryTargetValueTuples - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)valueClass;
+(id)_powerStateTargetValues;
-(id)initWithValueSource:(id)arg1 displayResults:(id)arg2 ;
-(id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 displayResults:(id)arg3 ;
-(id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 additionalCharacteristicOptions:(id)arg3 displayResults:(id)arg4 ;
-(NSSet *)auxiliaryTargetValueTuples;
-(id)toggleValue;
-(id)writePrimaryState:(long long)arg1 ;
-(id)_allTargetValues;
-(id)togglePrimaryState;
-(id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3 ;
-(BOOL)canCopyWithCharacteristicOptions:(id)arg1 ;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(id)characteristicValuesForValue:(id)arg1 ;
-(BOOL)supportsItemRepresentingServices:(id)arg1 ;
@end

