/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSManagedObjectContext, NSPersistentStoreCoordinator, NSArray, NSManagedObjectModel;

@interface NSPersistentContainer : NSObject {

	NSString* _name;
	NSManagedObjectContext* _viewContext;
	NSPersistentStoreCoordinator* _storeCoordinator;
	NSArray* _storeDescriptions;

}

@property (copy,readonly) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (readonly) NSManagedObjectContext * viewContext;                                   //@synthesize viewContext=_viewContext - In the implementation block
@property (readonly) NSManagedObjectModel * managedObjectModel; 
@property (readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize storeCoordinator=_storeCoordinator - In the implementation block
@property (copy) NSArray * persistentStoreDescriptions;                                      //@synthesize storeDescriptions=_storeDescriptions - In the implementation block
+(id)_newModelForName:(id)arg1 ;
+(id)defaultDirectoryURL;
+(Class)persistentStoreDescriptionClass;
+(id)persistentContainerWithName:(id)arg1 ;
+(id)persistentContainerWithName:(id)arg1 managedObjectModel:(id)arg2 ;
+(id)persistentContainerWithPath:(id)arg1 managedObjectModel:(id)arg2 ;
+(id)persistentContainerWithPath:(id)arg1 ;
+(id)persistentContainerWithPath:(id)arg1 modelNamed:(id)arg2 ;
+(id)persistentContainerUsingCachedModelWithPath:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NSManagedObjectModel *)managedObjectModel;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(BOOL)load:(id*)arg1 ;
-(id)initWithName:(id)arg1 managedObjectModel:(id)arg2 ;
-(NSArray *)persistentStoreDescriptions;
-(void)setPersistentStoreDescriptions:(NSArray *)arg1 ;
-(void)_loadStoreDescriptons:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)newBackgroundContext;
-(void)loadPersistentStoresWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSManagedObjectContext *)viewContext;
-(void)performBackgroundTask:(/*^block*/id)arg1 ;
@end

