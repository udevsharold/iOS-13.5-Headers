/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSDate;


@protocol WBSCloudTabDeviceProvider <NSObject>
@property (nonatomic,copy,readonly) NSArray * syncedCloudTabDevices; 
@property (nonatomic,copy,readonly) NSDate * dateOfLastCloudTabDevicesUpdate; 
@required
-(NSDate *)dateOfLastCloudTabDevicesUpdate;
-(NSArray *)syncedCloudTabDevices;
-(void)synchronizeCloudTabDevicesWithCompletionHandler:(/*^block*/id)arg1;

@end

