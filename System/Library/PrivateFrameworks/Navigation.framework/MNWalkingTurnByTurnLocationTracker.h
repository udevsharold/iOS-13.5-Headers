/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <Navigation/MNTurnByTurnLocationTracker.h>

@interface MNWalkingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker {

	int _detectedTransportType;
	SCD_Struct_MN8 _detectedTransportTypeOrigin;

}
-(int)transportType;
-(id)initWithNavigationSession:(id)arg1 ;
-(id)_newMapMatcherForRoute:(id)arg1 ;
-(int)_detectedMotionForLocation:(id)arg1 ;
-(BOOL)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2 ;
@end

