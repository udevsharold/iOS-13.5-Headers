/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBUserIgnoreFavoritesSuggestion : PBCodable <NSCopying> {

	int _ignoreLocation;
	NSString* _ignoredFeedId;
	int _ignoredFeedType;
	int _suggestionPositionWhenIgnored;
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) BOOL hasIgnoredFeedType; 
@property (assign,nonatomic) int ignoredFeedType;                                //@synthesize ignoredFeedType=_ignoredFeedType - In the implementation block
@property (assign,nonatomic) BOOL hasIgnoreLocation; 
@property (assign,nonatomic) int ignoreLocation;                                 //@synthesize ignoreLocation=_ignoreLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasIgnoredFeedId; 
@property (nonatomic,retain) NSString * ignoredFeedId;                           //@synthesize ignoredFeedId=_ignoredFeedId - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestionPositionWhenIgnored; 
@property (assign,nonatomic) int suggestionPositionWhenIgnored;                  //@synthesize suggestionPositionWhenIgnored=_suggestionPositionWhenIgnored - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIgnoredFeedId:(NSString *)arg1 ;
-(int)ignoredFeedType;
-(void)setIgnoredFeedType:(int)arg1 ;
-(void)setHasIgnoredFeedType:(BOOL)arg1 ;
-(BOOL)hasIgnoredFeedType;
-(int)ignoreLocation;
-(void)setIgnoreLocation:(int)arg1 ;
-(void)setHasIgnoreLocation:(BOOL)arg1 ;
-(BOOL)hasIgnoreLocation;
-(BOOL)hasIgnoredFeedId;
-(void)setSuggestionPositionWhenIgnored:(int)arg1 ;
-(void)setHasSuggestionPositionWhenIgnored:(BOOL)arg1 ;
-(BOOL)hasSuggestionPositionWhenIgnored;
-(NSString *)ignoredFeedId;
-(int)suggestionPositionWhenIgnored;
@end

