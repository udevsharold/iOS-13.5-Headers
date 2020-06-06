/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTStateMachineEventHandler.h>

@class MTStateMachine, NSString;

@interface MTStateMachineState : NSObject <MTStateMachineEventHandler> {

	MTStateMachine* _stateMachine;

}

@property (assign,nonatomic,__weak) MTStateMachine * stateMachine;              //@synthesize stateMachine=_stateMachine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MTStateMachine *)stateMachine;
-(void)setStateMachine:(MTStateMachine *)arg1 ;
-(void)didEnterWithPreviousState:(id)arg1 ;
-(id)initWithStateMachine:(id)arg1 ;
-(void)willExitWithNextState:(id)arg1 ;
-(void)willEnterWithPreviousState:(id)arg1 ;
-(void)didExitWithNextState:(id)arg1 ;
@end

