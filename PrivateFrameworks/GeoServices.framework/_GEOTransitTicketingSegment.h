/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitTicketingSegmentInfo.h>

@class NSString, GEOTransitTicketingSegment;

@interface _GEOTransitTicketingSegment : NSObject <GEOTransitTicketingSegmentInfo> {

	GEOTransitTicketingSegment* _segment;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * ticketingUrl; 
@property (nonatomic,readonly) NSString * segmentName; 
-(NSString *)ticketingUrl;
-(NSString *)segmentName;
-(id)initWithSegment:(id)arg1 ;
@end

