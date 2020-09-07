/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDHAPAccessory, HMFObject;

@interface HMDAccessoryBundle : HMFObject {

	HMDHAPAccessory* accessory;
	HMFObject* context;

}

@property (nonatomic,retain) HMDHAPAccessory * accessory; 
@property (nonatomic,retain) HMFObject * context; 
-(HMFObject *)context;
-(void)setContext:(HMFObject *)arg1 ;
-(HMDHAPAccessory *)accessory;
-(void)setAccessory:(HMDHAPAccessory *)arg1 ;
-(id)initWithAccessory:(id)arg1 context:(id)arg2 ;
@end
