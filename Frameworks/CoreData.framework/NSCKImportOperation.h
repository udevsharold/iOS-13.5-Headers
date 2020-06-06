/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSUUID, NSData, NSSet;

@interface NSCKImportOperation : NSManagedObject

@property (nonatomic,retain) NSDate * importDate; 
@property (nonatomic,retain) NSUUID * operationUUID; 
@property (nonatomic,retain) NSData * changeTokenBytes; 
@property (nonatomic,retain) NSSet * pendingRelationships; 
+(id)entityPath;
+(id)fetchUnfinishedImportOperationsInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchOperationWithIdentifier:(id)arg1 fromStore:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(BOOL)purgeFinishedImportOperationsInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
@end

