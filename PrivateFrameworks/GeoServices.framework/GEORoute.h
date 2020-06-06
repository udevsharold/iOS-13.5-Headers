/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOAlertNonRecommendedRouteText, NSData, GEOLaunchAndGoCardText, NSString, GEORouteInformation;

@interface GEORoute : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _advisorys;
	SCD_Struct_GE19* _incidentEndOffsetsInRoutes;
	SCD_Struct_GE19* _incidentIndices;
	SCD_Struct_GE19* _trafficColorOffsets;
	SCD_Struct_GE19* _trafficColors;
	NSMutableArray* _advisoryNotices;
	GEOAlertNonRecommendedRouteText* _alertNonRecommendedRouteText;
	NSData* _arrivalRouteID;
	NSData* _basicPoints;
	NSData* _departureRouteID;
	NSMutableArray* _endingRouteInstructions;
	NSMutableArray* _enrouteNotices;
	NSMutableArray* _guidanceEvents;
	NSMutableArray* _laneWidths;
	GEOLaunchAndGoCardText* _launchAndGoCardText;
	NSString* _name;
	NSString* _phoneticName;
	NSMutableArray* _roadComplexitys;
	NSData* _routeID;
	NSMutableArray* _routeNames;
	NSMutableArray* _routeDescriptions;
	GEORouteInformation* _routePlanningDescription;
	NSMutableArray* _startingRouteInstructions;
	NSMutableArray* _steps;
	NSString* _trafficDescriptionLong;
	NSString* _trafficDescription;
	NSData* _unpackedLatLngVertices;
	NSData* _zilchPoints;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _arrivalStepID;
	unsigned _arrivalParameterIndex;
	unsigned _departureStepID;
	unsigned _distance;
	int _drivingSide;
	unsigned _expectedTime;
	unsigned _historicTravelTime;
	int _routeType;
	unsigned _staticTravelTime;
	int _transportType;
	unsigned _travelTimeAggressiveEstimate;
	unsigned _travelTimeConservativeEstimate;
	BOOL _avoidsHighways;
	BOOL _avoidsTolls;
	BOOL _avoidsTraffic;
	struct {
		unsigned has_arrivalStepID : 1;
		unsigned has_arrivalParameterIndex : 1;
		unsigned has_departureStepID : 1;
		unsigned has_distance : 1;
		unsigned has_drivingSide : 1;
		unsigned has_expectedTime : 1;
		unsigned has_historicTravelTime : 1;
		unsigned has_routeType : 1;
		unsigned has_staticTravelTime : 1;
		unsigned has_transportType : 1;
		unsigned has_travelTimeAggressiveEstimate : 1;
		unsigned has_travelTimeConservativeEstimate : 1;
		unsigned has_avoidsHighways : 1;
		unsigned has_avoidsTolls : 1;
		unsigned has_avoidsTraffic : 1;
		unsigned read_unknownFields : 1;
		unsigned read_advisorys : 1;
		unsigned read_incidentEndOffsetsInRoutes : 1;
		unsigned read_incidentIndices : 1;
		unsigned read_trafficColorOffsets : 1;
		unsigned read_trafficColors : 1;
		unsigned read_advisoryNotices : 1;
		unsigned read_alertNonRecommendedRouteText : 1;
		unsigned read_arrivalRouteID : 1;
		unsigned read_basicPoints : 1;
		unsigned read_departureRouteID : 1;
		unsigned read_endingRouteInstructions : 1;
		unsigned read_enrouteNotices : 1;
		unsigned read_guidanceEvents : 1;
		unsigned read_laneWidths : 1;
		unsigned read_launchAndGoCardText : 1;
		unsigned read_name : 1;
		unsigned read_phoneticName : 1;
		unsigned read_roadComplexitys : 1;
		unsigned read_routeID : 1;
		unsigned read_routeNames : 1;
		unsigned read_routeDescriptions : 1;
		unsigned read_routePlanningDescription : 1;
		unsigned read_startingRouteInstructions : 1;
		unsigned read_steps : 1;
		unsigned read_trafficDescriptionLong : 1;
		unsigned read_trafficDescription : 1;
		unsigned read_unpackedLatLngVertices : 1;
		unsigned read_zilchPoints : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_advisorys : 1;
		unsigned wrote_incidentEndOffsetsInRoutes : 1;
		unsigned wrote_incidentIndices : 1;
		unsigned wrote_trafficColorOffsets : 1;
		unsigned wrote_trafficColors : 1;
		unsigned wrote_advisoryNotices : 1;
		unsigned wrote_alertNonRecommendedRouteText : 1;
		unsigned wrote_arrivalRouteID : 1;
		unsigned wrote_basicPoints : 1;
		unsigned wrote_departureRouteID : 1;
		unsigned wrote_endingRouteInstructions : 1;
		unsigned wrote_enrouteNotices : 1;
		unsigned wrote_guidanceEvents : 1;
		unsigned wrote_laneWidths : 1;
		unsigned wrote_launchAndGoCardText : 1;
		unsigned wrote_name : 1;
		unsigned wrote_phoneticName : 1;
		unsigned wrote_roadComplexitys : 1;
		unsigned wrote_routeID : 1;
		unsigned wrote_routeNames : 1;
		unsigned wrote_routeDescriptions : 1;
		unsigned wrote_routePlanningDescription : 1;
		unsigned wrote_startingRouteInstructions : 1;
		unsigned wrote_steps : 1;
		unsigned wrote_trafficDescriptionLong : 1;
		unsigned wrote_trafficDescription : 1;
		unsigned wrote_unpackedLatLngVertices : 1;
		unsigned wrote_zilchPoints : 1;
		unsigned wrote_arrivalStepID : 1;
		unsigned wrote_arrivalParameterIndex : 1;
		unsigned wrote_departureStepID : 1;
		unsigned wrote_distance : 1;
		unsigned wrote_drivingSide : 1;
		unsigned wrote_expectedTime : 1;
		unsigned wrote_historicTravelTime : 1;
		unsigned wrote_routeType : 1;
		unsigned wrote_staticTravelTime : 1;
		unsigned wrote_transportType : 1;
		unsigned wrote_travelTimeAggressiveEstimate : 1;
		unsigned wrote_travelTimeConservativeEstimate : 1;
		unsigned wrote_avoidsHighways : 1;
		unsigned wrote_avoidsTolls : 1;
		unsigned wrote_avoidsTraffic : 1;
	}  _flags;

}

@property (readonly) unsigned pointCount; 
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType; 
@property (nonatomic,retain) NSMutableArray * steps; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) BOOL hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName; 
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance; 
@property (assign,nonatomic) BOOL hasExpectedTime; 
@property (assign,nonatomic) unsigned expectedTime; 
@property (nonatomic,readonly) BOOL hasRouteID; 
@property (nonatomic,retain) NSData * routeID; 
@property (assign,nonatomic) BOOL hasRouteType; 
@property (assign,nonatomic) int routeType; 
@property (nonatomic,readonly) BOOL hasZilchPoints; 
@property (nonatomic,retain) NSData * zilchPoints; 
@property (assign,nonatomic) BOOL hasDrivingSide; 
@property (assign,nonatomic) int drivingSide; 
@property (nonatomic,readonly) BOOL hasDepartureRouteID; 
@property (nonatomic,retain) NSData * departureRouteID; 
@property (assign,nonatomic) BOOL hasDepartureStepID; 
@property (assign,nonatomic) unsigned departureStepID; 
@property (nonatomic,readonly) BOOL hasArrivalRouteID; 
@property (nonatomic,retain) NSData * arrivalRouteID; 
@property (assign,nonatomic) BOOL hasArrivalStepID; 
@property (assign,nonatomic) unsigned arrivalStepID; 
@property (nonatomic,readonly) BOOL hasBasicPoints; 
@property (nonatomic,retain) NSData * basicPoints; 
@property (nonatomic,retain) NSMutableArray * advisoryNotices; 
@property (nonatomic,readonly) unsigned long long trafficColorsCount; 
@property (nonatomic,readonly) unsigned* trafficColors; 
@property (nonatomic,readonly) unsigned long long trafficColorOffsetsCount; 
@property (nonatomic,readonly) unsigned* trafficColorOffsets; 
@property (nonatomic,retain) NSMutableArray * routeNames; 
@property (assign,nonatomic) BOOL hasHistoricTravelTime; 
@property (assign,nonatomic) unsigned historicTravelTime; 
@property (nonatomic,readonly) unsigned long long advisorysCount; 
@property (nonatomic,readonly) int* advisorys; 
@property (assign,nonatomic) BOOL hasTravelTimeAggressiveEstimate; 
@property (assign,nonatomic) unsigned travelTimeAggressiveEstimate; 
@property (assign,nonatomic) BOOL hasTravelTimeConservativeEstimate; 
@property (assign,nonatomic) unsigned travelTimeConservativeEstimate; 
@property (assign,nonatomic) BOOL hasStaticTravelTime; 
@property (assign,nonatomic) unsigned staticTravelTime; 
@property (assign,nonatomic) BOOL hasAvoidsTolls; 
@property (assign,nonatomic) BOOL avoidsTolls; 
@property (assign,nonatomic) BOOL hasAvoidsHighways; 
@property (assign,nonatomic) BOOL avoidsHighways; 
@property (assign,nonatomic) BOOL hasAvoidsTraffic; 
@property (assign,nonatomic) BOOL avoidsTraffic; 
@property (nonatomic,retain) NSMutableArray * enrouteNotices; 
@property (nonatomic,readonly) BOOL hasUnpackedLatLngVertices; 
@property (nonatomic,retain) NSData * unpackedLatLngVertices; 
@property (nonatomic,readonly) unsigned long long incidentIndicesCount; 
@property (nonatomic,readonly) unsigned* incidentIndices; 
@property (nonatomic,readonly) unsigned long long incidentEndOffsetsInRoutesCount; 
@property (nonatomic,readonly) unsigned* incidentEndOffsetsInRoutes; 
@property (nonatomic,readonly) BOOL hasRoutePlanningDescription; 
@property (nonatomic,retain) GEORouteInformation * routePlanningDescription; 
@property (nonatomic,retain) NSMutableArray * routeDescriptions; 
@property (nonatomic,retain) NSMutableArray * startingRouteInstructions; 
@property (nonatomic,retain) NSMutableArray * endingRouteInstructions; 
@property (nonatomic,readonly) BOOL hasTrafficDescription; 
@property (nonatomic,retain) NSString * trafficDescription; 
@property (nonatomic,readonly) BOOL hasTrafficDescriptionLong; 
@property (nonatomic,retain) NSString * trafficDescriptionLong; 
@property (nonatomic,readonly) BOOL hasAlertNonRecommendedRouteText; 
@property (nonatomic,retain) GEOAlertNonRecommendedRouteText * alertNonRecommendedRouteText; 
@property (nonatomic,retain) NSMutableArray * guidanceEvents; 
@property (nonatomic,readonly) BOOL hasLaunchAndGoCardText; 
@property (nonatomic,retain) GEOLaunchAndGoCardText * launchAndGoCardText; 
@property (nonatomic,retain) NSMutableArray * roadComplexitys; 
@property (nonatomic,retain) NSMutableArray * laneWidths; 
@property (assign,nonatomic) BOOL hasArrivalParameterIndex; 
@property (assign,nonatomic) unsigned arrivalParameterIndex; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)stepType;
+(Class)advisoryNoticeType;
+(Class)routeNameType;
+(Class)enrouteNoticeType;
+(Class)routeDescriptionType;
+(Class)startingRouteInstructionType;
+(Class)endingRouteInstructionType;
+(Class)guidanceEventType;
+(Class)roadComplexityType;
+(Class)laneWidthType;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(unsigned)pointCount;
-(int)transportType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void*)controlPoints;
-(void)setDistance:(unsigned)arg1 ;
-(unsigned)distance;
-(void)setTransportType:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readRouteID;
-(void)_readZilchPoints;
-(NSData *)routeID;
-(NSData *)zilchPoints;
-(void)setRouteID:(NSData *)arg1 ;
-(void)setZilchPoints:(NSData *)arg1 ;
-(BOOL)hasRouteID;
-(BOOL)hasZilchPoints;
-(void)_readName;
-(void)_readTrafficColors;
-(void)_addNoFlagsTrafficColor:(unsigned)arg1 ;
-(void)_readTrafficColorOffsets;
-(void)_addNoFlagsTrafficColorOffset:(unsigned)arg1 ;
-(unsigned long long)trafficColorsCount;
-(void)clearTrafficColors;
-(unsigned)trafficColorAtIndex:(unsigned long long)arg1 ;
-(void)addTrafficColor:(unsigned)arg1 ;
-(unsigned long long)trafficColorOffsetsCount;
-(void)clearTrafficColorOffsets;
-(unsigned)trafficColorOffsetAtIndex:(unsigned long long)arg1 ;
-(void)addTrafficColorOffset:(unsigned)arg1 ;
-(unsigned*)trafficColors;
-(void)setTrafficColors:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)trafficColorOffsets;
-(void)setTrafficColorOffsets:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)stepsCount;
-(BOOL)hasTransportType;
-(void)setHasTransportType:(BOOL)arg1 ;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(void)_readPhoneticName;
-(NSString *)phoneticName;
-(void)setPhoneticName:(NSString *)arg1 ;
-(BOOL)hasPhoneticName;
-(NSMutableArray *)guidanceEvents;
-(int)routeType;
-(void)_readSteps;
-(void)_addNoFlagsStep:(id)arg1 ;
-(void)_readDepartureRouteID;
-(void)_readArrivalRouteID;
-(void)_readBasicPoints;
-(void)_readAdvisoryNotices;
-(void)_addNoFlagsAdvisoryNotice:(id)arg1 ;
-(void)_readRouteNames;
-(void)_addNoFlagsRouteName:(id)arg1 ;
-(void)_readAdvisorys;
-(void)_addNoFlagsAdvisory:(int)arg1 ;
-(void)_readEnrouteNotices;
-(void)_addNoFlagsEnrouteNotice:(id)arg1 ;
-(void)_readUnpackedLatLngVertices;
-(void)_readIncidentIndices;
-(void)_addNoFlagsIncidentIndices:(unsigned)arg1 ;
-(void)_readIncidentEndOffsetsInRoutes;
-(void)_addNoFlagsIncidentEndOffsetsInRoute:(unsigned)arg1 ;
-(void)_readRoutePlanningDescription;
-(void)_readRouteDescriptions;
-(void)_addNoFlagsRouteDescription:(id)arg1 ;
-(void)_readStartingRouteInstructions;
-(void)_addNoFlagsStartingRouteInstruction:(id)arg1 ;
-(void)_readEndingRouteInstructions;
-(void)_addNoFlagsEndingRouteInstruction:(id)arg1 ;
-(void)_readTrafficDescription;
-(void)_readTrafficDescriptionLong;
-(void)_readAlertNonRecommendedRouteText;
-(void)_readGuidanceEvents;
-(void)_addNoFlagsGuidanceEvent:(id)arg1 ;
-(void)_readLaunchAndGoCardText;
-(void)_readRoadComplexitys;
-(void)_addNoFlagsRoadComplexity:(id)arg1 ;
-(void)_readLaneWidths;
-(void)_addNoFlagsLaneWidth:(id)arg1 ;
-(NSData *)departureRouteID;
-(NSData *)arrivalRouteID;
-(NSData *)basicPoints;
-(NSMutableArray *)advisoryNotices;
-(NSData *)unpackedLatLngVertices;
-(GEORouteInformation *)routePlanningDescription;
-(NSString *)trafficDescription;
-(NSString *)trafficDescriptionLong;
-(GEOAlertNonRecommendedRouteText *)alertNonRecommendedRouteText;
-(GEOLaunchAndGoCardText *)launchAndGoCardText;
-(void)clearSteps;
-(id)stepAtIndex:(unsigned long long)arg1 ;
-(void)addStep:(id)arg1 ;
-(void)setDepartureRouteID:(NSData *)arg1 ;
-(void)setArrivalRouteID:(NSData *)arg1 ;
-(void)setBasicPoints:(NSData *)arg1 ;
-(unsigned long long)advisoryNoticesCount;
-(void)clearAdvisoryNotices;
-(id)advisoryNoticeAtIndex:(unsigned long long)arg1 ;
-(void)addAdvisoryNotice:(id)arg1 ;
-(unsigned long long)routeNamesCount;
-(void)clearRouteNames;
-(id)routeNameAtIndex:(unsigned long long)arg1 ;
-(void)addRouteName:(id)arg1 ;
-(unsigned long long)advisorysCount;
-(void)clearAdvisorys;
-(int)advisoryAtIndex:(unsigned long long)arg1 ;
-(void)addAdvisory:(int)arg1 ;
-(unsigned long long)enrouteNoticesCount;
-(void)clearEnrouteNotices;
-(id)enrouteNoticeAtIndex:(unsigned long long)arg1 ;
-(void)addEnrouteNotice:(id)arg1 ;
-(void)setUnpackedLatLngVertices:(NSData *)arg1 ;
-(unsigned long long)incidentIndicesCount;
-(void)clearIncidentIndices;
-(unsigned)incidentIndicesAtIndex:(unsigned long long)arg1 ;
-(void)addIncidentIndices:(unsigned)arg1 ;
-(unsigned long long)incidentEndOffsetsInRoutesCount;
-(void)clearIncidentEndOffsetsInRoutes;
-(unsigned)incidentEndOffsetsInRouteAtIndex:(unsigned long long)arg1 ;
-(void)addIncidentEndOffsetsInRoute:(unsigned)arg1 ;
-(void)setRoutePlanningDescription:(GEORouteInformation *)arg1 ;
-(unsigned long long)routeDescriptionsCount;
-(void)clearRouteDescriptions;
-(id)routeDescriptionAtIndex:(unsigned long long)arg1 ;
-(void)addRouteDescription:(id)arg1 ;
-(unsigned long long)startingRouteInstructionsCount;
-(void)clearStartingRouteInstructions;
-(id)startingRouteInstructionAtIndex:(unsigned long long)arg1 ;
-(void)addStartingRouteInstruction:(id)arg1 ;
-(unsigned long long)endingRouteInstructionsCount;
-(void)clearEndingRouteInstructions;
-(id)endingRouteInstructionAtIndex:(unsigned long long)arg1 ;
-(void)addEndingRouteInstruction:(id)arg1 ;
-(void)setTrafficDescription:(NSString *)arg1 ;
-(void)setTrafficDescriptionLong:(NSString *)arg1 ;
-(void)setAlertNonRecommendedRouteText:(GEOAlertNonRecommendedRouteText *)arg1 ;
-(unsigned long long)guidanceEventsCount;
-(void)clearGuidanceEvents;
-(id)guidanceEventAtIndex:(unsigned long long)arg1 ;
-(void)addGuidanceEvent:(id)arg1 ;
-(void)setLaunchAndGoCardText:(GEOLaunchAndGoCardText *)arg1 ;
-(unsigned long long)roadComplexitysCount;
-(void)clearRoadComplexitys;
-(id)roadComplexityAtIndex:(unsigned long long)arg1 ;
-(void)addRoadComplexity:(id)arg1 ;
-(unsigned long long)laneWidthsCount;
-(void)clearLaneWidths;
-(id)laneWidthAtIndex:(unsigned long long)arg1 ;
-(void)addLaneWidth:(id)arg1 ;
-(NSMutableArray *)steps;
-(NSMutableArray *)routeNames;
-(NSMutableArray *)enrouteNotices;
-(NSMutableArray *)routeDescriptions;
-(NSMutableArray *)startingRouteInstructions;
-(NSMutableArray *)endingRouteInstructions;
-(NSMutableArray *)roadComplexitys;
-(NSMutableArray *)laneWidths;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(BOOL)hasDistance;
-(unsigned)expectedTime;
-(void)setExpectedTime:(unsigned)arg1 ;
-(void)setHasExpectedTime:(BOOL)arg1 ;
-(BOOL)hasExpectedTime;
-(void)setRouteType:(int)arg1 ;
-(void)setHasRouteType:(BOOL)arg1 ;
-(BOOL)hasRouteType;
-(id)routeTypeAsString:(int)arg1 ;
-(int)StringAsRouteType:(id)arg1 ;
-(int)drivingSide;
-(void)setDrivingSide:(int)arg1 ;
-(void)setHasDrivingSide:(BOOL)arg1 ;
-(BOOL)hasDrivingSide;
-(id)drivingSideAsString:(int)arg1 ;
-(int)StringAsDrivingSide:(id)arg1 ;
-(BOOL)hasDepartureRouteID;
-(unsigned)departureStepID;
-(void)setDepartureStepID:(unsigned)arg1 ;
-(void)setHasDepartureStepID:(BOOL)arg1 ;
-(BOOL)hasDepartureStepID;
-(BOOL)hasArrivalRouteID;
-(unsigned)arrivalStepID;
-(void)setArrivalStepID:(unsigned)arg1 ;
-(void)setHasArrivalStepID:(BOOL)arg1 ;
-(BOOL)hasArrivalStepID;
-(BOOL)hasBasicPoints;
-(void)setAdvisoryNotices:(NSMutableArray *)arg1 ;
-(void)setRouteNames:(NSMutableArray *)arg1 ;
-(unsigned)historicTravelTime;
-(void)setHistoricTravelTime:(unsigned)arg1 ;
-(void)setHasHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasHistoricTravelTime;
-(int*)advisorys;
-(void)setAdvisorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)advisorysAsString:(int)arg1 ;
-(int)StringAsAdvisorys:(id)arg1 ;
-(unsigned)travelTimeAggressiveEstimate;
-(void)setTravelTimeAggressiveEstimate:(unsigned)arg1 ;
-(void)setHasTravelTimeAggressiveEstimate:(BOOL)arg1 ;
-(BOOL)hasTravelTimeAggressiveEstimate;
-(unsigned)travelTimeConservativeEstimate;
-(void)setTravelTimeConservativeEstimate:(unsigned)arg1 ;
-(void)setHasTravelTimeConservativeEstimate:(BOOL)arg1 ;
-(BOOL)hasTravelTimeConservativeEstimate;
-(unsigned)staticTravelTime;
-(void)setStaticTravelTime:(unsigned)arg1 ;
-(void)setHasStaticTravelTime:(BOOL)arg1 ;
-(BOOL)hasStaticTravelTime;
-(BOOL)avoidsTolls;
-(void)setAvoidsTolls:(BOOL)arg1 ;
-(void)setHasAvoidsTolls:(BOOL)arg1 ;
-(BOOL)hasAvoidsTolls;
-(BOOL)avoidsHighways;
-(void)setAvoidsHighways:(BOOL)arg1 ;
-(void)setHasAvoidsHighways:(BOOL)arg1 ;
-(BOOL)hasAvoidsHighways;
-(BOOL)avoidsTraffic;
-(void)setAvoidsTraffic:(BOOL)arg1 ;
-(void)setHasAvoidsTraffic:(BOOL)arg1 ;
-(BOOL)hasAvoidsTraffic;
-(void)setEnrouteNotices:(NSMutableArray *)arg1 ;
-(BOOL)hasUnpackedLatLngVertices;
-(unsigned*)incidentIndices;
-(void)setIncidentIndices:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)incidentEndOffsetsInRoutes;
-(void)setIncidentEndOffsetsInRoutes:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasRoutePlanningDescription;
-(void)setRouteDescriptions:(NSMutableArray *)arg1 ;
-(void)setStartingRouteInstructions:(NSMutableArray *)arg1 ;
-(void)setEndingRouteInstructions:(NSMutableArray *)arg1 ;
-(BOOL)hasTrafficDescription;
-(BOOL)hasTrafficDescriptionLong;
-(BOOL)hasAlertNonRecommendedRouteText;
-(void)setGuidanceEvents:(NSMutableArray *)arg1 ;
-(BOOL)hasLaunchAndGoCardText;
-(void)setRoadComplexitys:(NSMutableArray *)arg1 ;
-(void)setLaneWidths:(NSMutableArray *)arg1 ;
-(unsigned)arrivalParameterIndex;
-(void)setArrivalParameterIndex:(unsigned)arg1 ;
-(void)setHasArrivalParameterIndex:(BOOL)arg1 ;
-(BOOL)hasArrivalParameterIndex;
-(BOOL)unpackLatLngVertices;
-(SCD_Struct_GE32)pointAt:(unsigned)arg1 ;
-(unsigned long long)stepIndexForPointIndex:(unsigned)arg1 ;
-(int)transportTypeForStep:(id)arg1 ;
-(id)newETARoute;
-(SCD_Struct_GE36)coordinateAt:(unsigned)arg1 ;
-(BOOL)unpackZilchPoints;
-(BOOL)unpackBasicPoints;
-(unsigned long long)indexForStepID:(unsigned long long)arg1 ;
-(id)newETARouteFromStepIndex:(unsigned long long)arg1 stepPercentRemaining:(double)arg2 ;
-(unsigned long long)distanceFromStepIndex:(unsigned long long)arg1 toStepIndex:(unsigned long long)arg2 ;
-(id)simplifiedDescription;
-(id)convertToFullRoute:(id)arg1 includeDepartureRoutes:(BOOL)arg2 uniquePointRange:(NSRange*)arg3 ;
-(BOOL)isContingentRouteFor:(id)arg1 afterPoint:(unsigned)arg2 mainRoutes:(id)arg3 ;
-(BOOL)isMainOrAlternateRoute;
-(BOOL)isContingentRoute;
@end

