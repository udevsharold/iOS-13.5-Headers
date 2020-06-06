/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBProductAvailability.h>
@class NSArray, NSData;


@protocol _SFPBProductAvailability <NSObject>
@property (nonatomic,copy) NSArray * results; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSArray *)results;
-(void)setResults:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(void)addResults:(id)arg1;
-(void)clearResults;
-(unsigned long long)resultsCount;
-(id)resultsAtIndex:(unsigned long long)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSData, NSString;

@interface _SFPBProductAvailability : PBCodable <_SFPBProductAvailability, NSSecureCoding> {

	NSArray* _results;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * results;                       //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)results;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setResults:(NSArray *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)addResults:(id)arg1 ;
-(void)clearResults;
-(unsigned long long)resultsCount;
-(id)resultsAtIndex:(unsigned long long)arg1 ;
@end

