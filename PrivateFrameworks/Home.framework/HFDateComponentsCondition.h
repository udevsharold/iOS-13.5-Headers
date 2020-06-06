/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFTimeCondition.h>
#import <libobjc.A.dylib/HFPrimitiveTimeCondition.h>

@class NSDateComponents, NSString;

@interface HFDateComponentsCondition : HFTimeCondition <HFPrimitiveTimeCondition> {

	unsigned long long _comparisonType;
	NSDateComponents* _dateComponents;

}

@property (nonatomic,readonly) NSDateComponents * dateComponents;              //@synthesize dateComponents=_dateComponents - In the implementation block
@property (nonatomic,readonly) BOOL isTimeOfDayCondition; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long comparisonType;              //@synthesize comparisonType=_comparisonType - In the implementation block
-(NSString *)description;
-(long long)compare:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 ;
-(NSDateComponents *)dateComponents;
-(unsigned long long)comparisonType;
-(BOOL)isTimeOfDayCondition;
-(id)initWithDateComponents:(id)arg1 comparisonType:(unsigned long long)arg2 ;
@end

