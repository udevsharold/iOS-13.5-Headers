/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/ATXDuetEvent.h>

@interface ATXCarPlayDuetEvent : ATXDuetEvent {

	long long _carPlayState;

}

@property (nonatomic,readonly) long long carPlayState;              //@synthesize carPlayState=_carPlayState - In the implementation block
-(id)description;
-(id)identifier;
-(id)initWithDKEvent:(id)arg1 ;
-(id)initWithCurrentContextStoreValues;
-(id)initWithCarPlayConnectedState:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(long long)carPlayState;
@end

