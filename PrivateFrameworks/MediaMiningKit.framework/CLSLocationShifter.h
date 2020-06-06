/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaMiningKit/MediaMiningKit-Structs.h>
@class NSObject, GEOLocationShifter;

@interface CLSLocationShifter : NSObject {

	NSObject*<OS_dispatch_queue> _locationShiftQueue;
	GEOLocationShifter* _locationShifter;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> locationShiftQueue;              //@synthesize locationShiftQueue=_locationShiftQueue - In the implementation block
@property (nonatomic,readonly) GEOLocationShifter * locationShifter;                         //@synthesize locationShifter=_locationShifter - In the implementation block
+(BOOL)isLocationShiftRequiredForCoordinate:(SCD_Struct_CL5)arg1 ;
+(id)sharedLocationShifter;
-(id)init;
-(GEOLocationShifter *)locationShifter;
-(SCD_Struct_CL5)shiftedCoordinateForOriginalCoordinate:(SCD_Struct_CL5)arg1 ;
-(NSObject*<OS_dispatch_queue>)locationShiftQueue;
@end

