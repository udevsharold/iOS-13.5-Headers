/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UITouchForceObservationMessageReading <NSObject>
@property (nonatomic,readonly) double touchForce; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) CGPoint centroid; 
@property (nonatomic,readonly) BOOL shouldFilterDueToSystemGestures; 
@required
-(double)timestamp;
-(double)touchForce;
-(CGPoint)centroid;
-(BOOL)shouldFilterDueToSystemGestures;

@end

