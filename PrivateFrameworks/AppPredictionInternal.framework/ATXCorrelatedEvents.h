/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATXDuetEvent;

@interface ATXCorrelatedEvents : NSObject {

	ATXDuetEvent* _firstEvent;
	ATXDuetEvent* _secondEvent;

}

@property (nonatomic,readonly) ATXDuetEvent * firstEvent;               //@synthesize firstEvent=_firstEvent - In the implementation block
@property (nonatomic,readonly) ATXDuetEvent * secondEvent;              //@synthesize secondEvent=_secondEvent - In the implementation block
-(ATXDuetEvent *)firstEvent;
-(ATXDuetEvent *)secondEvent;
-(id)initWithFirstEvent:(id)arg1 secondEvent:(id)arg2 ;
@end

