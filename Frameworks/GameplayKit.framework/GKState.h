/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKStateMachine;

@interface GKState : NSObject {

	GKStateMachine* _stateMachine;

}

@property (nonatomic,__weak,readonly) GKStateMachine * stateMachine; 
+(id)state;
-(id)init;
-(GKStateMachine *)stateMachine;
-(void)didEnterWithPreviousState:(id)arg1 ;
-(void)willExitWithNextState:(id)arg1 ;
-(void)updateWithDeltaTime:(double)arg1 ;
-(BOOL)isValidNextState:(Class)arg1 ;
-(void)_setStateMachine:(id)arg1 ;
@end

