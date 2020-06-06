/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARResultData.h>

@class ARLightEstimate, NSString;

@interface ARLightEstimationData : NSObject <ARResultData> {

	ARLightEstimate* _lightEstimate;

}

@property (nonatomic,retain) ARLightEstimate * lightEstimate;              //@synthesize lightEstimate=_lightEstimate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timestamp;
-(ARLightEstimate *)lightEstimate;
-(void)setLightEstimate:(ARLightEstimate *)arg1 ;
@end

