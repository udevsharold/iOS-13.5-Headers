/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKSpringAnimationFactory.h>
#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>

@class NSString;

@interface PKUISpringAnimationFactory : PKSpringAnimationFactory <_UIBasicAnimationFactory> {

	/*^block*/id _animationDelayHandler;
	double _maximumVendedDelay;

}

@property (nonatomic,copy) id animationDelayHandler;                   //@synthesize animationDelayHandler=_animationDelayHandler - In the implementation block
@property (nonatomic,readonly) double maximumVendedDelay;              //@synthesize maximumVendedDelay=_maximumVendedDelay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)setAnimationDelayHandler:(id)arg1 ;
-(id)springAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(double)maximumVendedDelay;
-(id)_springAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)animationDelayHandler;
@end

