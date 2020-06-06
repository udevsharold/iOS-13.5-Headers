/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class NSString, NSMutableArray, NSMutableDictionary;

@interface PLPhotoDCIMDirectory : NSObject {

	NSString* _dcimPath;
	NSString* _miscPath;
	NSString* _posterImagePath;
	NSMutableArray* _topLevelDirectories;
	CFDictionaryRef _topLevelDirectoriesByNumber;
	CFSetRef _unusableTopLevelDirectoryNumbers;
	int _lastUsedDirectoryNumber;
	NSMutableDictionary* _userInfo;
	BOOL _userInfoDidChange;
	flock* _dcimDirectoryLock;
	int _dcimDirectoryLockDescriptor;

}
-(void)dealloc;
-(id)userInfo;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)unlockDirectory;
-(id)nextAvailableDirectory;
-(void)lockDirectory;
-(id)initWithDCIMPath:(id)arg1 ;
-(id)_userInfoPath;
-(void)saveUserInfo;
-(id)userInfoObjectForKey:(id)arg1 ;
-(id)dcimPath;
-(id)miscPath;
-(id)posterImagePath;
-(void)recreateInfoPlist;
-(void)reloadUserInfo;
-(id)dcfDirectories;
-(void)clearDCFDirectories;
-(BOOL)hasChangedExternally;
-(void)setHasChangedExternally:(BOOL)arg1 ;
@end

