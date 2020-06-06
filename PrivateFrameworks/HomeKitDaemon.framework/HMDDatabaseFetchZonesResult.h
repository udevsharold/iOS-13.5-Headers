/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMBLocalZone, HMBCloudZone;

@interface HMDDatabaseFetchZonesResult : NSObject {

	HMBLocalZone* _localZone;
	HMBCloudZone* _cloudZone;

}

@property (readonly) HMBLocalZone * localZone;              //@synthesize localZone=_localZone - In the implementation block
@property (readonly) HMBCloudZone * cloudZone;              //@synthesize cloudZone=_cloudZone - In the implementation block
-(HMBLocalZone *)localZone;
-(HMBCloudZone *)cloudZone;
-(id)initWithLocalZone:(id)arg1 cloudZone:(id)arg2 ;
@end

