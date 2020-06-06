/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFMapRegion.h>
@class NSDictionary, NSData;


@protocol SFMapRegion <NSObject>
@property (assign,nonatomic) double southLat; 
@property (assign,nonatomic) double westLng; 
@property (assign,nonatomic) double northLat; 
@property (assign,nonatomic) double eastLng; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(void)setSouthLat:(double)arg1;
-(void)setWestLng:(double)arg1;
-(void)setNorthLat:(double)arg1;
-(void)setEastLng:(double)arg1;
-(double)northLat;
-(double)southLat;
-(double)westLng;
-(double)eastLng;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSData, NSString;

@interface SFMapRegion : NSObject <SFMapRegion, NSSecureCoding, NSCopying> {

	SCD_Struct_SF4 _has;
	double _southLat;
	double _westLng;
	double _northLat;
	double _eastLng;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double southLat;                                        //@synthesize southLat=_southLat - In the implementation block
@property (assign,nonatomic) double westLng;                                         //@synthesize westLng=_westLng - In the implementation block
@property (assign,nonatomic) double northLat;                                        //@synthesize northLat=_northLat - In the implementation block
@property (assign,nonatomic) double eastLng;                                         //@synthesize eastLng=_eastLng - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setSouthLat:(double)arg1 ;
-(void)setWestLng:(double)arg1 ;
-(void)setNorthLat:(double)arg1 ;
-(void)setEastLng:(double)arg1 ;
-(BOOL)hasNorthLat;
-(BOOL)hasSouthLat;
-(BOOL)hasEastLng;
-(BOOL)hasWestLng;
-(double)northLat;
-(double)southLat;
-(double)westLng;
-(double)eastLng;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
@end

