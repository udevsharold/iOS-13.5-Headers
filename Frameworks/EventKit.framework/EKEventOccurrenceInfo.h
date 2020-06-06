/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EKObjectID;

@interface EKEventOccurrenceInfo : NSObject {

	EKObjectID* _objectID;
	double _date;

}

@property (nonatomic,retain) EKObjectID * objectID;              //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) double date;                        //@synthesize date=_date - In the implementation block
-(id)description;
-(double)date;
-(EKObjectID *)objectID;
-(void)setDate:(double)arg1 ;
-(void)setObjectID:(EKObjectID *)arg1 ;
-(id)initWithObjectID:(id)arg1 date:(double)arg2 ;
@end

