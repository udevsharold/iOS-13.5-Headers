/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface GEOTrafficAndETAResult : NSObject {

	BOOL _isSuccess;
	double _seconds;
	double _aggressiveTravelTime;
	double _conservativeTravelTime;
	NSString* _shortTrafficString;
	NSString* _longTrafficString;

}

@property (assign,nonatomic) BOOL isSuccess;                             //@synthesize isSuccess=_isSuccess - In the implementation block
@property (assign,nonatomic) double seconds;                             //@synthesize seconds=_seconds - In the implementation block
@property (assign,nonatomic) double aggressiveTravelTime;                //@synthesize aggressiveTravelTime=_aggressiveTravelTime - In the implementation block
@property (assign,nonatomic) double conservativeTravelTime;              //@synthesize conservativeTravelTime=_conservativeTravelTime - In the implementation block
@property (nonatomic,copy) NSString * shortTrafficString;                //@synthesize shortTrafficString=_shortTrafficString - In the implementation block
@property (nonatomic,copy) NSString * longTrafficString;                 //@synthesize longTrafficString=_longTrafficString - In the implementation block
-(double)seconds;
-(double)aggressiveTravelTime;
-(void)setSeconds:(double)arg1 ;
-(double)conservativeTravelTime;
-(BOOL)isSuccess;
-(void)setIsSuccess:(BOOL)arg1 ;
-(void)setAggressiveTravelTime:(double)arg1 ;
-(void)setConservativeTravelTime:(double)arg1 ;
-(NSString *)shortTrafficString;
-(void)setShortTrafficString:(NSString *)arg1 ;
-(NSString *)longTrafficString;
-(void)setLongTrafficString:(NSString *)arg1 ;
@end

