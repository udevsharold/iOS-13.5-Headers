/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:41 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, HKQuantityType;

@interface WFHealthQuantityAdditionalPickerParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	HKQuantityType* _quantityType;

}

@property (nonatomic,retain) HKQuantityType * quantityType;              //@synthesize quantityType=_quantityType - In the implementation block
-(BOOL)isHidden;
-(HKQuantityType *)quantityType;
-(void)setQuantityType:(HKQuantityType *)arg1 ;
-(id)possibleStates;
-(id)localizedLabel;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)defaultSerializedRepresentation;
-(BOOL)supportsImportQuestions;
-(void)updatePossibleStates;
@end

