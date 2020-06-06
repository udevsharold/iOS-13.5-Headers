/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKClassKitRosterRequirements;
@interface CRKClassKitClassPropertyApplicator : NSObject {

	id<CRKClassKitRosterRequirements> _requirements;

}

@property (nonatomic,readonly) id<CRKClassKitRosterRequirements> requirements;              //@synthesize requirements=_requirements - In the implementation block
-(id)initWithRequirements:(id)arg1 ;
-(id<CRKClassKitRosterRequirements>)requirements;
-(BOOL)additionsAndRemovalsIntersect:(id)arg1 ;
-(void)addUser:(id)arg1 toClass:(id)arg2 ;
-(void)removeUser:(id)arg1 fromClass:(id)arg2 ;
-(id)identifiersOfUsers:(id)arg1 ;
-(id)applyProperties:(id)arg1 toClass:(id)arg2 error:(id*)arg3 ;
@end

