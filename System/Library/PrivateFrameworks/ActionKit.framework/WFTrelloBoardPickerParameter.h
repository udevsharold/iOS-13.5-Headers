/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFTrelloBoardPickerParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	id _observer;

}

@property (nonatomic,retain) id observer;                             //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) NSArray * possibleStates;              //@synthesize possibleStates=_possibleStates - In the implementation block
-(id)observer;
-(void)setObserver:(id)arg1 ;
-(NSArray *)possibleStates;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)possibleStatesDidChange;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(id)defaultSerializedRepresentation;
-(void)updateBoards;
@end

