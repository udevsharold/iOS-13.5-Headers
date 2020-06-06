/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VNPersonsModel, NSDate, NSMutableDictionary;

@interface AXMVisionFaceNameHelper : NSObject {

	VNPersonsModel* __personsModel;
	NSDate* __personsModelFileModifiedDate;
	NSMutableDictionary* __personLocalIdentifierToName;
	double __lastFileModificationCheckTime;

}

@property (nonatomic,retain) VNPersonsModel * _personsModel;                                  //@synthesize _personsModel=__personsModel - In the implementation block
@property (assign,nonatomic) NSDate * _personsModelFileModifiedDate;                          //@synthesize _personsModelFileModifiedDate=__personsModelFileModifiedDate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _personLocalIdentifierToName;              //@synthesize _personLocalIdentifierToName=__personLocalIdentifierToName - In the implementation block
@property (assign,nonatomic) double _lastFileModificationCheckTime;                           //@synthesize _lastFileModificationCheckTime=__lastFileModificationCheckTime - In the implementation block
-(VNPersonsModel *)_personsModel;
-(void)_resetState;
-(BOOL)prepareForLookup;
-(unsigned long long)faceprintRequestRevisionForPersonsModel;
-(id)nameForFaceObservation:(id)arg1 ;
-(void)set_personsModel:(VNPersonsModel *)arg1 ;
-(void)set_personsModelFileModifiedDate:(NSDate *)arg1 ;
-(void)set_personLocalIdentifierToName:(NSMutableDictionary *)arg1 ;
-(void)set_lastFileModificationCheckTime:(double)arg1 ;
-(id)_filePathForPersonsModel;
-(id)_fileModificationDateForPath:(id)arg1 ;
-(double)_lastFileModificationCheckTime;
-(NSDate *)_personsModelFileModifiedDate;
-(BOOL)_isDeviceUnlocked;
-(BOOL)_shouldReloadPersonsModel;
-(NSMutableDictionary *)_personLocalIdentifierToName;
-(BOOL)_checkPhotoLibraryAuthorization;
-(id)_photoAuthorizationMessage:(long long)arg1 ;
-(void)_loadPersonsModel;
-(id)_fetchPersonsForLocalIdentifiers:(id)arg1 ;
@end

