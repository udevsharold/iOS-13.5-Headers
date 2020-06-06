/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/MCTouchInput.h>

@class NSArray;

@interface MCDrawableTouchInput : MCTouchInput {

	BOOL _isInflectionPoint;
	NSArray* _nearbyKeys;
	RefPtr<TI::Favonius::CMTouchHistory>* _touchHistory;

}

@property (nonatomic,readonly) RefPtr<TI::Favonius::CMTouchHistory>* touchHistory;              //@synthesize touchHistory=_touchHistory - In the implementation block
@property (nonatomic,readonly) BOOL isInflectionPoint;                                          //@synthesize isInflectionPoint=_isInflectionPoint - In the implementation block
@property (nonatomic,readonly) NSArray * nearbyKeys;                                            //@synthesize nearbyKeys=_nearbyKeys - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(RefPtr<TI::Favonius::CMTouchHistory>*)touchHistory;
-(NSArray *)nearbyKeys;
-(id)initWithTouchPoint:(CGPoint)arg1 radius:(double)arg2 timestamp:(double)arg3 ;
-(id)initWithTouchPoint:(CGPoint)arg1 radius:(double)arg2 timestamp:(double)arg3 inflectionPoint:(BOOL)arg4 touchHistory:(const RefPtr<TI::Favonius::CMTouchHistory>*)arg5 ;
-(BOOL)isInflectionPoint;
@end

