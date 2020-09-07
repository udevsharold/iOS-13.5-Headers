/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface CRKWiProxDeviceRegistration : NSObject {

	NSDictionary* _devices;
	NSDictionary* _options;

}

@property (nonatomic,copy) NSDictionary * devices;              //@synthesize devices=_devices - In the implementation block
@property (nonatomic,copy) NSDictionary * options;              //@synthesize options=_options - In the implementation block
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)devices;
-(void)setDevices:(NSDictionary *)arg1 ;
@end
