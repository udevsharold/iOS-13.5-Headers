/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITouchForceObservationMessageReading.h>

@class NSString;

@interface _UITouchForceObservationMessageReader : NSObject <_UITouchForceObservationMessageReading> {

	BOOL _shouldFilterDueToSystemGestures;
	double _touchForce;
	double _timestamp;
	CGPoint _centroid;

}

@property (assign,nonatomic) double touchForce;                                 //@synthesize touchForce=_touchForce - In the implementation block
@property (assign,nonatomic) double timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) CGPoint centroid;                                  //@synthesize centroid=_centroid - In the implementation block
@property (assign,nonatomic) BOOL shouldFilterDueToSystemGestures;              //@synthesize shouldFilterDueToSystemGestures=_shouldFilterDueToSystemGestures - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(double)touchForce;
-(CGPoint)centroid;
-(void)setTouchForce:(double)arg1 ;
-(BOOL)shouldFilterDueToSystemGestures;
-(void)setCentroid:(CGPoint)arg1 ;
-(void)setShouldFilterDueToSystemGestures:(BOOL)arg1 ;
@end

