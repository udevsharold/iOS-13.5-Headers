/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CRKAnnotatedCredentialManifest, NSMutableDictionary, NSSet;

@interface CRKASMCredentialManifest : NSObject {

	CRKAnnotatedCredentialManifest* _annotatedManifest;
	NSMutableDictionary* _entriesByPersistentID;

}

@property (nonatomic,readonly) CRKAnnotatedCredentialManifest * annotatedManifest;              //@synthesize annotatedManifest=_annotatedManifest - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * entriesByPersistentID;                     //@synthesize entriesByPersistentID=_entriesByPersistentID - In the implementation block
@property (nonatomic,copy,readonly) NSSet * persistentIDs; 
-(NSSet *)persistentIDs;
-(id)initWithAnnotatedManifest:(id)arg1 ;
-(id)entryForPersistentID:(id)arg1 ;
-(CRKAnnotatedCredentialManifest *)annotatedManifest;
-(NSMutableDictionary *)entriesByPersistentID;
-(id)makeEntryForPersistentID:(id)arg1 ;
@end

