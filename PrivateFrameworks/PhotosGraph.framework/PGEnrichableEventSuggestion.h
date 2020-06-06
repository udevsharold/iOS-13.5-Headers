/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGSuggestion.h>

@class NSSet, NSArray, NSDate, NSString;

@interface PGEnrichableEventSuggestion : NSObject <PGSuggestion> {

	BOOL _containsUnverifiedPersons;
	unsigned char _notificationQuality;
	unsigned short _type;
	unsigned short _subtype;
	unsigned short _notificationState;
	NSSet* _features;
	NSArray* _suggestedPersonLocalIdentifiers;
	NSArray* _keyAssets;
	NSArray* _representativeAssets;
	NSDate* _universalStartDate;
	NSDate* _universalEndDate;
	NSString* _title;
	NSString* _subtitle;

}

@property (assign,nonatomic) unsigned char notificationQuality;                             //@synthesize notificationQuality=_notificationQuality - In the implementation block
@property (assign,nonatomic) unsigned short notificationState;                              //@synthesize notificationState=_notificationState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned short type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short subtype;                                      //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,readonly) unsigned short state; 
@property (nonatomic,readonly) long long version; 
@property (nonatomic,readonly) NSArray * keyAssets;                                         //@synthesize keyAssets=_keyAssets - In the implementation block
@property (nonatomic,readonly) NSArray * representativeAssets;                              //@synthesize representativeAssets=_representativeAssets - In the implementation block
@property (nonatomic,readonly) NSSet * features;                                            //@synthesize features=_features - In the implementation block
@property (nonatomic,readonly) id recipe; 
@property (nonatomic,copy,readonly) NSArray * suggestedPersonLocalIdentifiers;              //@synthesize suggestedPersonLocalIdentifiers=_suggestedPersonLocalIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL containsUnverifiedPersons;                              //@synthesize containsUnverifiedPersons=_containsUnverifiedPersons - In the implementation block
@property (nonatomic,readonly) NSDate * universalStartDate;                                 //@synthesize universalStartDate=_universalStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * universalEndDate;                                   //@synthesize universalEndDate=_universalEndDate - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) unsigned long long relevanceDurationInDays; 
@property (nonatomic,copy,readonly) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                    //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) BOOL isInvalid; 
@property (nonatomic,copy,readonly) NSArray * reasons; 
-(NSString *)description;
-(unsigned short)type;
-(long long)version;
-(unsigned short)state;
-(NSString *)title;
-(NSDate *)creationDate;
-(NSString *)subtitle;
-(unsigned short)subtype;
-(NSSet *)features;
-(id)recipe;
-(unsigned short)notificationState;
-(void)setNotificationState:(unsigned short)arg1 ;
-(NSArray *)representativeAssets;
-(NSArray *)keyAssets;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(BOOL)containsUnverifiedPersons;
-(NSArray *)suggestedPersonLocalIdentifiers;
-(unsigned long long)relevanceDurationInDays;
-(unsigned char)notificationQuality;
-(id)_whitelistedMeaningLabels;
-(void)setNotificationQuality:(unsigned char)arg1 ;
-(id)initWithType:(unsigned short)arg1 subtype:(unsigned short)arg2 enrichableEvent:(id)arg3 sharingSuggestionResults:(id)arg4 manager:(id)arg5 loggingConnection:(id)arg6 ;
@end

