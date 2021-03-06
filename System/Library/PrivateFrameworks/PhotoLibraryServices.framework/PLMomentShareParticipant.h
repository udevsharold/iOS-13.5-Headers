/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSPersonNameComponents, PLMomentShare;

@interface PLMomentShareParticipant : PLManagedObject

@property (nonatomic,copy) NSString * uuid; 
@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSPersonNameComponents * nameComponents; 
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,copy) NSString * userIdentifier; 
@property (assign,nonatomic) short type; 
@property (assign,nonatomic) short status; 
@property (nonatomic,retain) PLMomentShare * momentShare; 
+(id)entityName;
+(id)insertInPhotoLibrary:(id)arg1 ;
+(id)updateOrInsertWithCPLMomentShareParticipant:(id)arg1 inMomentShare:(id)arg2 ;
+(id)participantsWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)_momentShareParticipantsWithPredicate:(id)arg1 fetchLimit:(unsigned long long)arg2 inManagedObjectContext:(id)arg3 ;
-(id)description;
-(id)_typeDescription;
-(id)_statusDescription;
@end

