/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNTracePlayerTimelineStreamObjectType.h>

@class GEODirectionsRequest, GEODirectionsResponse, NSError, NSArray, NSString;

@interface MNTraceDirectionsRow : NSObject <MNTracePlayerTimelineStreamObjectType> {

	double _requestTimestamp;
	double _responseTimestamp;
	GEODirectionsRequest* _request;
	GEODirectionsResponse* _response;
	NSError* _error;
	NSArray* _waypoints;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double position; 
@property (assign,nonatomic) double requestTimestamp;                       //@synthesize requestTimestamp=_requestTimestamp - In the implementation block
@property (assign,nonatomic) double responseTimestamp;                      //@synthesize responseTimestamp=_responseTimestamp - In the implementation block
@property (nonatomic,retain) GEODirectionsRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) GEODirectionsResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSArray * waypoints;                           //@synthesize waypoints=_waypoints - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(double)position;
-(void)setRequest:(GEODirectionsRequest *)arg1 ;
-(GEODirectionsRequest *)request;
-(GEODirectionsResponse *)response;
-(void)setResponse:(GEODirectionsResponse *)arg1 ;
-(NSArray *)waypoints;
-(void)setWaypoints:(NSArray *)arg1 ;
-(double)responseTimestamp;
-(double)requestTimestamp;
-(void)setRequestTimestamp:(double)arg1 ;
-(void)setResponseTimestamp:(double)arg1 ;
@end

