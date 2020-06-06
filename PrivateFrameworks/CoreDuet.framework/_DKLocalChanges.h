/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDate;

@interface _DKLocalChanges : NSObject {

	NSArray* _insertedObjects;
	NSArray* _tombstones;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSArray * insertedObjects;              //@synthesize insertedObjects=_insertedObjects - In the implementation block
@property (nonatomic,readonly) NSArray * tombstones;                   //@synthesize tombstones=_tombstones - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                     //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                       //@synthesize endDate=_endDate - In the implementation block
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSArray *)insertedObjects;
-(NSArray *)tombstones;
-(id)initWithInsertedObjects:(id)arg1 tombstones:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
@end

