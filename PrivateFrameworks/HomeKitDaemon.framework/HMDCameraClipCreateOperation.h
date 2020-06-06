/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraClipModelOperation.h>

@class NSNumber, NSDate;

@interface HMDCameraClipCreateOperation : HMDCameraClipModelOperation {

	NSNumber* _targetFragmentDuration;
	NSDate* _clipStartDate;

}

@property (readonly) NSNumber * targetFragmentDuration;              //@synthesize targetFragmentDuration=_targetFragmentDuration - In the implementation block
@property (readonly) NSDate * clipStartDate;                         //@synthesize clipStartDate=_clipStartDate - In the implementation block
+(id)logCategory;
-(void)main;
-(NSNumber *)targetFragmentDuration;
-(NSDate *)clipStartDate;
-(id)initWithLocalZone:(id)arg1 targetFragmentDuration:(double)arg2 startDate:(id)arg3 dataSource:(id)arg4 ;
@end

