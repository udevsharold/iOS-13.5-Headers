/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTFrameworkProtocol.h>

@class RTRoutineManager, NSString;

@interface RTRoutineManagerExportedObject : NSObject <RTFrameworkProtocol> {

	RTRoutineManager* _routineManager;

}

@property (assign,nonatomic,__weak) RTRoutineManager * routineManager;              //@synthesize routineManager=_routineManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(RTRoutineManager *)routineManager;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
-(void)onVisit:(id)arg1 withError:(id)arg2 ;
-(void)onLeechedVisit:(id)arg1 withError:(id)arg2 ;
-(void)onLeechedLowConfidenceVisit:(id)arg1 withError:(id)arg2 ;
-(void)onScenarioTrigger:(id)arg1 withError:(id)arg2 ;
-(void)onVehicleEvents:(id)arg1 error:(id)arg2 ;
-(id)initWithRoutineManager:(id)arg1 ;
@end

