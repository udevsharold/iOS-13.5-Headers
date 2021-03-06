/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, HKStateMachineState;

@interface HKStateMachineTransition : NSObject {

	long long _event;
	NSString* _label;
	HKStateMachineState* _fromState;
	HKStateMachineState* _toState;

}

@property (nonatomic,readonly) long long event;                                     //@synthesize event=_event - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                               //@synthesize label=_label - In the implementation block
@property (nonatomic,__weak,readonly) HKStateMachineState * fromState;              //@synthesize fromState=_fromState - In the implementation block
@property (nonatomic,__weak,readonly) HKStateMachineState * toState;                //@synthesize toState=_toState - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)label;
-(long long)event;
-(HKStateMachineState *)fromState;
-(HKStateMachineState *)toState;
-(id)initWithEvent:(long long)arg1 label:(id)arg2 from:(id)arg3 to:(id)arg4 ;
@end

