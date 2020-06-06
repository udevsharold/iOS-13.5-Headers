/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHObject.h>

@class NSString, NSDictionary, NSDate;

@interface PHQuestion : PHObject {

	unsigned short _type;
	unsigned short _state;
	unsigned short _entityType;
	unsigned short _displayType;
	NSString* _entityIdentifier;
	double _score;
	NSDictionary* _additionalInfo;
	NSDate* _creationDate;

}

@property (nonatomic,readonly) NSString * entityIdentifier;                //@synthesize entityIdentifier=_entityIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned short type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short state;                       //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned short entityType;                  //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) unsigned short displayType;                 //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,readonly) double score;                               //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalInfo;              //@synthesize additionalInfo=_additionalInfo - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                      //@synthesize creationDate=_creationDate - In the implementation block
+(id)managedEntityName;
+(id)fetchType;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)fetchQuestionsWithOptions:(id)arg1 ;
+(id)fetchQuestionsForValidEntitiesWithOptions:(id)arg1 ;
+(id)fetchQuestionsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchAnsweredYesOrNoQuestionsWithOptions:(id)arg1 ;
+(id)fetchAnsweredQuestionsWithOptions:(id)arg1 ;
+(id)fetchUnansweredQuestionsWithOptions:(id)arg1 ;
-(unsigned short)type;
-(unsigned short)state;
-(double)score;
-(NSDate *)creationDate;
-(unsigned short)displayType;
-(NSDictionary *)additionalInfo;
-(NSString *)entityIdentifier;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(unsigned short)entityType;
@end

