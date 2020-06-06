/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface VNCluster : NSObject <NSCopying, NSSecureCoding> {

	BOOL _shouldUpdateRepresentative;
	NSArray* _objects;
	unsigned long long _clusterId;
	unsigned long long _totalObjectCount;
	NSArray* _suggestedIdsForRepresentative;
	NSDictionary* _representativenessById;

}

@property (nonatomic,retain) NSArray * objects;                                    //@synthesize objects=_objects - In the implementation block
@property (assign,nonatomic) unsigned long long clusterId;                         //@synthesize clusterId=_clusterId - In the implementation block
@property (assign,nonatomic) unsigned long long totalObjectCount;                  //@synthesize totalObjectCount=_totalObjectCount - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdateRepresentative;                      //@synthesize shouldUpdateRepresentative=_shouldUpdateRepresentative - In the implementation block
@property (nonatomic,retain) NSArray * suggestedIdsForRepresentative;              //@synthesize suggestedIdsForRepresentative=_suggestedIdsForRepresentative - In the implementation block
@property (nonatomic,retain) NSDictionary * representativenessById;                //@synthesize representativenessById=_representativenessById - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)objects;
-(void)setObjects:(NSArray *)arg1 ;
-(unsigned long long)totalObjectCount;
-(unsigned long long)clusterId;
-(void)setClusterId:(unsigned long long)arg1 ;
-(void)setTotalObjectCount:(unsigned long long)arg1 ;
-(BOOL)shouldUpdateRepresentative;
-(void)setShouldUpdateRepresentative:(BOOL)arg1 ;
-(NSArray *)suggestedIdsForRepresentative;
-(void)setSuggestedIdsForRepresentative:(NSArray *)arg1 ;
-(NSDictionary *)representativenessById;
-(void)setRepresentativenessById:(NSDictionary *)arg1 ;
@end

