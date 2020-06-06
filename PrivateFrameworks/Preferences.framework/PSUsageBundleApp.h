/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PSWeakReference, NSString, NSArray;

@interface PSUsageBundleApp : NSObject {

	PSWeakReference* _storageReporterReference;
	BOOL _deletionRestricted;
	float _totalSize;
	NSString* _name;
	NSString* _bundleIdentifier;
	NSArray* _categories;

}

@property (assign,nonatomic,__weak) id<PSStorageReporting> usageBundleStorageReporter; 
@property (nonatomic,retain) NSString * name;                                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * categories;                                                  //@synthesize categories=_categories - In the implementation block
@property (assign,nonatomic) float totalSize;                                                       //@synthesize totalSize=_totalSize - In the implementation block
@property (assign,getter=isDeletionRestricted,nonatomic) BOOL deletionRestricted;                   //@synthesize deletionRestricted=_deletionRestricted - In the implementation block
+(id)usageBundleAppForBundleWithIdentifier:(id)arg1 withTotalSize:(float)arg2 andCategories:(id)arg3 ;
+(id)usageBundleAppForBundleWithIdentifier:(id)arg1 withTotalSize:(float)arg2 ;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSArray *)categories;
-(void)setCategories:(NSArray *)arg1 ;
-(float)totalSize;
-(void)setUsageBundleStorageReporter:(id<PSStorageReporting>)arg1 ;
-(void)setTotalSize:(float)arg1 ;
-(id<PSStorageReporting>)usageBundleStorageReporter;
-(BOOL)isDeletionRestricted;
-(void)setDeletionRestricted:(BOOL)arg1 ;
@end

