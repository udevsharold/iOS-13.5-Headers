/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/_HMCameraSource.h>

@class NSDate;

@interface _HMCameraSnapshot : _HMCameraSource {

	NSDate* _captureDate;

}

@property (nonatomic,copy,readonly) NSDate * captureDate;              //@synthesize captureDate=_captureDate - In the implementation block
-(void)dealloc;
-(NSDate *)captureDate;
-(id)initWithSessionID:(id)arg1 slotIdentifier:(id)arg2 context:(id)arg3 profileUniqueIdentifier:(id)arg4 aspectRatio:(id)arg5 captureDate:(id)arg6 ;
-(void)_releaseSlotIdentifier;
@end

