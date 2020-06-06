/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFStringSubstitutableState.h>

@class NSNumber, NSDecimalNumber;

@interface WFNumberStringSubstitutableState : WFStringSubstitutableState {

	NSNumber* _legacyNumber;

}

@property (nonatomic,retain) NSNumber * legacyNumber;                        //@synthesize legacyNumber=_legacyNumber - In the implementation block
@property (nonatomic,readonly) NSDecimalNumber * decimalNumber; 
+(Class)processingValueClass;
+(id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)serializedRepresentation;
-(id)initWithValue:(id)arg1 ;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(NSDecimalNumber *)decimalNumber;
-(NSNumber *)legacyNumber;
-(void)setLegacyNumber:(NSNumber *)arg1 ;
@end

