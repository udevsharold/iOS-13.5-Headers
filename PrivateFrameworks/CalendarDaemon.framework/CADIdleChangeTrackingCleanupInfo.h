/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CADIdleChangeTrackingCleanupInfo : NSObject {

	int _numberOfChanges;
	double _languishPeriod;

}

@property (assign,nonatomic) double languishPeriod;              //@synthesize languishPeriod=_languishPeriod - In the implementation block
@property (assign,nonatomic) int numberOfChanges;                //@synthesize numberOfChanges=_numberOfChanges - In the implementation block
+(id)serverIdleChangeTrackingCleanupInfo;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(double)languishPeriod;
-(int)numberOfChanges;
-(void)setLanguishPeriod:(double)arg1 ;
-(void)setNumberOfChanges:(int)arg1 ;
-(id)initWithLanguishPeriod:(double)arg1 numberOfChanges:(int)arg2 ;
-(BOOL)isEqualToInfo:(id)arg1 ;
@end

