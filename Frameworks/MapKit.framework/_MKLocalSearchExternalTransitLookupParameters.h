/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSDate, CLLocation;

@interface _MKLocalSearchExternalTransitLookupParameters : NSObject <NSCopying> {

	NSArray* _stationCodes;
	NSString* _sourceIdentifier;
	NSDate* _transactionDate;
	CLLocation* _transactionLocation;

}

@property (nonatomic,copy) NSArray * stationCodes;                          //@synthesize stationCodes=_stationCodes - In the implementation block
@property (nonatomic,copy) NSString * sourceIdentifier;                     //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * transactionDate;                      //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,retain) CLLocation * transactionLocation;              //@synthesize transactionLocation=_transactionLocation - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSString *)sourceIdentifier;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(CLLocation *)transactionLocation;
-(void)setTransactionLocation:(CLLocation *)arg1 ;
-(NSArray *)stationCodes;
-(void)setStationCodes:(NSArray *)arg1 ;
@end

