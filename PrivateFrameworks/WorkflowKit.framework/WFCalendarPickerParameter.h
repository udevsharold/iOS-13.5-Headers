/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFCalendarSubstitutableState;

@interface WFCalendarPickerParameter : WFEnumerationParameter {

	BOOL _allowsAllCalendars;
	unsigned long long _entityType;
	id _defaultSerializedCalendarRepresentation;
	NSArray* _calendarStates;
	WFCalendarSubstitutableState* _allCalendarsState;

}

@property (nonatomic,retain) id defaultSerializedCalendarRepresentation;                      //@synthesize defaultSerializedCalendarRepresentation=_defaultSerializedCalendarRepresentation - In the implementation block
@property (nonatomic,retain) NSArray * calendarStates;                                        //@synthesize calendarStates=_calendarStates - In the implementation block
@property (nonatomic,readonly) WFCalendarSubstitutableState * allCalendarsState;              //@synthesize allCalendarsState=_allCalendarsState - In the implementation block
@property (nonatomic,readonly) BOOL allowsAllCalendars;                                       //@synthesize allowsAllCalendars=_allowsAllCalendars - In the implementation block
@property (nonatomic,readonly) unsigned long long entityType;                                 //@synthesize entityType=_entityType - In the implementation block
-(id)initWithDefinition:(id)arg1 ;
-(id)possibleStates;
-(unsigned long long)entityType;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)accessoryColorForPossibleState:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(id)defaultSerializedRepresentation;
-(void)reloadCalendars;
-(BOOL)allowsAllCalendars;
-(id)defaultSerializedCalendarRepresentation;
-(void)setDefaultSerializedCalendarRepresentation:(id)arg1 ;
-(NSArray *)calendarStates;
-(void)setCalendarStates:(NSArray *)arg1 ;
-(WFCalendarSubstitutableState *)allCalendarsState;
@end

