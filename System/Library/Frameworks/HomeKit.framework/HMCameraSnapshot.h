/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMCameraSource.h>

@class _HMCameraSnapshot, NSDate;

@interface HMCameraSnapshot : HMCameraSource {

	_HMCameraSnapshot* _snapshot;

}

@property (nonatomic,retain) _HMCameraSnapshot * snapshot;              //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,copy,readonly) NSDate * captureDate; 
-(_HMCameraSnapshot *)snapshot;
-(void)setSnapshot:(_HMCameraSnapshot *)arg1 ;
-(id)initWithSnapshot:(id)arg1 ;
-(NSDate *)captureDate;
@end

