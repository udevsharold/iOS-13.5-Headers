/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface ATXNotificationsSuggestionLRInput : NSObject <MLFeatureProvider> {

	double _appPopularity;
	double _totalLaunches;
	double _received;
	double _ignored;
	double _cleared;
	double _engaged;
	double _defaultActions;
	double _orbs;
	double _suppActions;
	double _tapCoalesce;
	double _engage_rate;
	double _app_bias;

}

@property (assign,nonatomic) double appPopularity;                //@synthesize appPopularity=_appPopularity - In the implementation block
@property (assign,nonatomic) double totalLaunches;                //@synthesize totalLaunches=_totalLaunches - In the implementation block
@property (assign,nonatomic) double received;                     //@synthesize received=_received - In the implementation block
@property (assign,nonatomic) double ignored;                      //@synthesize ignored=_ignored - In the implementation block
@property (assign,nonatomic) double cleared;                      //@synthesize cleared=_cleared - In the implementation block
@property (assign,nonatomic) double engaged;                      //@synthesize engaged=_engaged - In the implementation block
@property (assign,nonatomic) double defaultActions;               //@synthesize defaultActions=_defaultActions - In the implementation block
@property (assign,nonatomic) double orbs;                         //@synthesize orbs=_orbs - In the implementation block
@property (assign,nonatomic) double suppActions;                  //@synthesize suppActions=_suppActions - In the implementation block
@property (assign,nonatomic) double tapCoalesce;                  //@synthesize tapCoalesce=_tapCoalesce - In the implementation block
@property (assign,nonatomic) double engage_rate;                  //@synthesize engage_rate=_engage_rate - In the implementation block
@property (assign,nonatomic) double app_bias;                     //@synthesize app_bias=_app_bias - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(double)ignored;
-(void)setIgnored:(double)arg1 ;
-(void)setEngaged:(double)arg1 ;
-(double)received;
-(void)setReceived:(double)arg1 ;
-(void)setTotalLaunches:(double)arg1 ;
-(double)totalLaunches;
-(void)setCleared:(double)arg1 ;
-(void)setAppPopularity:(double)arg1 ;
-(void)setDefaultActions:(double)arg1 ;
-(void)setOrbs:(double)arg1 ;
-(void)setSuppActions:(double)arg1 ;
-(void)setTapCoalesce:(double)arg1 ;
-(double)engaged;
-(double)cleared;
-(double)appPopularity;
-(double)defaultActions;
-(double)orbs;
-(double)suppActions;
-(double)tapCoalesce;
-(id)initWithAppPopularity:(double)arg1 totalLaunches:(double)arg2 received:(double)arg3 ignored:(double)arg4 cleared:(double)arg5 engaged:(double)arg6 defaultActions:(double)arg7 orbs:(double)arg8 suppActions:(double)arg9 tapCoalesce:(double)arg10 engage_rate:(double)arg11 app_bias:(double)arg12 ;
-(double)engage_rate;
-(void)setEngage_rate:(double)arg1 ;
-(double)app_bias;
-(void)setApp_bias:(double)arg1 ;
@end

