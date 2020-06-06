/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNVCardPerson, CNVCardLineFactory;
@class NSMutableArray;

@interface CNVCard30CardBuilder : NSObject {

	BOOL _photoHandled;
	id<CNVCardPerson> _person;
	NSMutableArray* _lines;
	long long _groupCount;
	unsigned long long _countOfLinesBeforePhoto;
	/*^block*/id _retrofitPhoto;
	NSMutableArray* _unknownProperties;
	id<CNVCardLineFactory> _lineFactory;

}

@property (nonatomic,readonly) id<CNVCardPerson> person;                              //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) NSMutableArray * lines;                                //@synthesize lines=_lines - In the implementation block
@property (assign,nonatomic) long long groupCount;                                    //@synthesize groupCount=_groupCount - In the implementation block
@property (assign,nonatomic) unsigned long long countOfLinesBeforePhoto;              //@synthesize countOfLinesBeforePhoto=_countOfLinesBeforePhoto - In the implementation block
@property (nonatomic,copy,readonly) id retrofitPhoto;                                 //@synthesize retrofitPhoto=_retrofitPhoto - In the implementation block
@property (assign,nonatomic) BOOL photoHandled;                                       //@synthesize photoHandled=_photoHandled - In the implementation block
@property (nonatomic,readonly) NSMutableArray * unknownProperties;                    //@synthesize unknownProperties=_unknownProperties - In the implementation block
@property (nonatomic,readonly) id<CNVCardLineFactory> lineFactory;                    //@synthesize lineFactory=_lineFactory - In the implementation block
+(id)builderWithPerson:(id)arg1 ;
+(unsigned long long)estimatedBytesAvailableForPhotoWithOptions:(id)arg1 serializer:(id)arg2 ;
-(NSMutableArray *)lines;
-(NSMutableArray *)unknownProperties;
-(id<CNVCardPerson>)person;
-(long long)groupCount;
-(id)initWithPerson:(id)arg1 ;
-(void)addBeginningOfCard;
-(void)addNameLines;
-(void)addEmailAddresses;
-(void)addPhoneNumbers;
-(void)addPostalAddresses;
-(void)addSocialProfiles;
-(void)addActivityAlerts;
-(void)addNote;
-(void)addURLs;
-(void)addCalendarURIs;
-(void)addBirthday;
-(void)addAlternateBirthday;
-(void)addInstantMessagingInfo;
-(void)addPhotoWithOptions:(id)arg1 ;
-(void)addOtherDates;
-(void)addRelatedNames;
-(void)addNameOrderMarker;
-(void)addCompanyMarker;
-(void)addCategories;
-(void)addCardDAVUID;
-(void)addUID;
-(void)addPhonemeData;
-(void)addDowntimeWhitelist;
-(void)addPreferredLikenessSource;
-(void)addPreferredApplePersonaIdentifier;
-(void)addUnknownProperties;
-(void)addEndOfCard;
-(void)buildWithSerializer:(id)arg1 ;
-(unsigned long long)countOfLinesBeforePhoto;
-(void)addLineWithName:(id)arg1 value:(id)arg2 ;
-(void)addNameComponents;
-(void)addFullName;
-(void)addOrganization;
-(void)addPropertyLinesForValues:(id)arg1 generator:(id)arg2 ;
-(void)removeUnknownPropertiesWithTag:(id)arg1 ;
-(void)addLegacyInstantMessagingHandles:(id)arg1 forService:(id)arg2 vCardProperty:(id)arg3 ;
-(void)addInstantMessagingHandles:(id)arg1 ;
-(BOOL)addPhotoReferences;
-(void)preparePhotoLineWithOptions:(id)arg1 ;
-(void)_addAttributesForCropRects:(id)arg1 imageHash:(id)arg2 toLine:(id)arg3 ;
-(void)setGroupCount:(long long)arg1 ;
-(void)setCountOfLinesBeforePhoto:(unsigned long long)arg1 ;
-(id)retrofitPhoto;
-(BOOL)photoHandled;
-(void)setPhotoHandled:(BOOL)arg1 ;
-(id<CNVCardLineFactory>)lineFactory;
@end

