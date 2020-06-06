/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface _GEOCandidateRouteMatch : NSObject {

	BOOL _isGoodMatch;
	double _score;
	PolylineCoordinate _routeCoordinate;
	SCD_Struct_GE32 _locationCoordinate;
	unsigned long long _stepIndex;
	double _distanceFromRoute;
	double _maxDistance;
	double _distanceMatchScore;
	double _distanceWeight;
	double _courseDelta;
	double _maxCourseDelta;
	double _courseMatchScore;
	double _courseWeight;

}

@property (assign,nonatomic) BOOL isGoodMatch;                                //@synthesize isGoodMatch=_isGoodMatch - In the implementation block
@property (assign,nonatomic) double score;                                    //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) PolylineCoordinate routeCoordinate;              //@synthesize routeCoordinate=_routeCoordinate - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE32 locationCoordinate;              //@synthesize locationCoordinate=_locationCoordinate - In the implementation block
@property (assign,nonatomic) unsigned long long stepIndex;                    //@synthesize stepIndex=_stepIndex - In the implementation block
@property (assign,nonatomic) double distanceFromRoute;                        //@synthesize distanceFromRoute=_distanceFromRoute - In the implementation block
@property (assign,nonatomic) double maxDistance;                              //@synthesize maxDistance=_maxDistance - In the implementation block
@property (assign,nonatomic) double distanceMatchScore;                       //@synthesize distanceMatchScore=_distanceMatchScore - In the implementation block
@property (assign,nonatomic) double distanceWeight;                           //@synthesize distanceWeight=_distanceWeight - In the implementation block
@property (assign,nonatomic) double courseDelta;                              //@synthesize courseDelta=_courseDelta - In the implementation block
@property (assign,nonatomic) double maxCourseDelta;                           //@synthesize maxCourseDelta=_maxCourseDelta - In the implementation block
@property (assign,nonatomic) double courseMatchScore;                         //@synthesize courseMatchScore=_courseMatchScore - In the implementation block
@property (assign,nonatomic) double courseWeight;                             //@synthesize courseWeight=_courseWeight - In the implementation block
-(id)description;
-(double)score;
-(void)setScore:(double)arg1 ;
-(PolylineCoordinate)routeCoordinate;
-(id)initWithRoute:(id)arg1 ;
-(unsigned long long)stepIndex;
-(SCD_Struct_GE32)locationCoordinate;
-(BOOL)isGoodMatch;
-(void)setIsGoodMatch:(BOOL)arg1 ;
-(void)setDistanceFromRoute:(double)arg1 ;
-(void)setRouteCoordinate:(PolylineCoordinate)arg1 ;
-(void)setLocationCoordinate:(SCD_Struct_GE32)arg1 ;
-(void)setStepIndex:(unsigned long long)arg1 ;
-(double)distanceFromRoute;
-(double)maxDistance;
-(void)setMaxDistance:(double)arg1 ;
-(double)distanceMatchScore;
-(void)setDistanceMatchScore:(double)arg1 ;
-(double)distanceWeight;
-(void)setDistanceWeight:(double)arg1 ;
-(double)courseDelta;
-(void)setCourseDelta:(double)arg1 ;
-(double)maxCourseDelta;
-(void)setMaxCourseDelta:(double)arg1 ;
-(double)courseMatchScore;
-(void)setCourseMatchScore:(double)arg1 ;
-(double)courseWeight;
-(void)setCourseWeight:(double)arg1 ;
@end

