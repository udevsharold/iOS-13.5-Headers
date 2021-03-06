/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBUIAnimationStepping <NSObject>
@property (getter=isStepped,nonatomic,readonly) BOOL stepped; 
@property (assign,nonatomic) double stepPercentage; 
@required
-(BOOL)isStepped;
-(double)stepPercentage;
-(void)setStepPercentage:(double)arg1;
-(void)finishSteppingForwardToEnd;
-(void)finishSteppingBackwardToStart;

@end

