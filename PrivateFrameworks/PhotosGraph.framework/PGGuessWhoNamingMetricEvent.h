/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLMetricEvent.h>

@class NSString, NSDictionary, PGGraph;

@interface PGGuessWhoNamingMetricEvent : NSObject <PLMetricEvent> {

	BOOL _hasMeNodeAndMeContact;
	NSString* _identifier;
	NSDictionary* _payload;
	PGGraph* _graph;
	unsigned long long _numberOfPeople;
	unsigned long long _numberOfPeopleToName;
	unsigned long long _numberOfPeopleFavorited;
	unsigned long long _librarySize;
	double _proportionOfNamedPeople;
	unsigned long long _numberOfNamedPeople;
	double _recallContactSuggestion;
	double _numberOfPeopleWithAContactSuggestion;
	double _recallHighConfidenceContactSuggestion;
	double _numberOfPeopleWithAHighConfidenceContactSuggestion;

}

@property (nonatomic,retain) PGGraph * graph;                                                        //@synthesize graph=_graph - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPeople;                                      //@synthesize numberOfPeople=_numberOfPeople - In the implementation block
@property (assign,nonatomic) BOOL hasMeNodeAndMeContact;                                             //@synthesize hasMeNodeAndMeContact=_hasMeNodeAndMeContact - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPeopleToName;                                //@synthesize numberOfPeopleToName=_numberOfPeopleToName - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPeopleFavorited;                             //@synthesize numberOfPeopleFavorited=_numberOfPeopleFavorited - In the implementation block
@property (assign,nonatomic) unsigned long long librarySize;                                         //@synthesize librarySize=_librarySize - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfNamedPeople;                                 //@synthesize numberOfNamedPeople=_numberOfNamedPeople - In the implementation block
@property (assign,nonatomic) double proportionOfNamedPeople;                                         //@synthesize proportionOfNamedPeople=_proportionOfNamedPeople - In the implementation block
@property (assign,nonatomic) double numberOfPeopleWithAContactSuggestion;                            //@synthesize numberOfPeopleWithAContactSuggestion=_numberOfPeopleWithAContactSuggestion - In the implementation block
@property (assign,nonatomic) double recallContactSuggestion;                                         //@synthesize recallContactSuggestion=_recallContactSuggestion - In the implementation block
@property (assign,nonatomic) double numberOfPeopleWithAHighConfidenceContactSuggestion;              //@synthesize numberOfPeopleWithAHighConfidenceContactSuggestion=_numberOfPeopleWithAHighConfidenceContactSuggestion - In the implementation block
@property (assign,nonatomic) double recallHighConfidenceContactSuggestion;                           //@synthesize recallHighConfidenceContactSuggestion=_recallHighConfidenceContactSuggestion - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * payload;                                               //@synthesize payload=_payload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)identifier;
-(PGGraph *)graph;
-(void)setGraph:(PGGraph *)arg1 ;
-(NSDictionary *)payload;
-(id)initWithGraphManager:(id)arg1 ;
-(void)gatherMetricsWithProgressBlock:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfPeople;
-(void)setNumberOfPeople:(unsigned long long)arg1 ;
-(unsigned long long)librarySize;
-(void)setLibrarySize:(unsigned long long)arg1 ;
-(BOOL)hasMeNodeAndMeContact;
-(void)setHasMeNodeAndMeContact:(BOOL)arg1 ;
-(unsigned long long)numberOfPeopleToName;
-(void)setNumberOfPeopleToName:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPeopleFavorited;
-(void)setNumberOfPeopleFavorited:(unsigned long long)arg1 ;
-(double)proportionOfNamedPeople;
-(void)setProportionOfNamedPeople:(double)arg1 ;
-(unsigned long long)numberOfNamedPeople;
-(void)setNumberOfNamedPeople:(unsigned long long)arg1 ;
-(double)recallContactSuggestion;
-(void)setRecallContactSuggestion:(double)arg1 ;
-(double)numberOfPeopleWithAContactSuggestion;
-(void)setNumberOfPeopleWithAContactSuggestion:(double)arg1 ;
-(double)recallHighConfidenceContactSuggestion;
-(void)setRecallHighConfidenceContactSuggestion:(double)arg1 ;
-(double)numberOfPeopleWithAHighConfidenceContactSuggestion;
-(void)setNumberOfPeopleWithAHighConfidenceContactSuggestion:(double)arg1 ;
@end

