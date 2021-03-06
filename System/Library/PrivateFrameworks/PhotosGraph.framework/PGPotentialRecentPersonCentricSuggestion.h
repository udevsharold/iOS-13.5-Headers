/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLSPerson, NSString, NSArray, NSDate;

@interface PGPotentialRecentPersonCentricSuggestion : NSObject {

	CLSPerson* _person;
	NSString* _personLocalIdentifier;
	NSArray* _assets;
	NSDate* _notSeenSinceDate;

}

@property (nonatomic,readonly) CLSPerson * person;                                //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) NSString * personLocalIdentifier;                  //@synthesize personLocalIdentifier=_personLocalIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * assets;                                  //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) NSDate * notSeenSinceDate;                         //@synthesize notSeenSinceDate=_notSeenSinceDate - In the implementation block
@property (nonatomic,readonly) unsigned long long relationshipScore; 
-(NSArray *)assets;
-(NSString *)personLocalIdentifier;
-(CLSPerson *)person;
-(NSDate *)notSeenSinceDate;
-(id)initWithCLSPerson:(id)arg1 assets:(id)arg2 ;
-(id)initWithPersonLocalIdentifier:(id)arg1 assets:(id)arg2 notSeenSinceDate:(id)arg3 ;
-(unsigned long long)relationshipScore;
@end

