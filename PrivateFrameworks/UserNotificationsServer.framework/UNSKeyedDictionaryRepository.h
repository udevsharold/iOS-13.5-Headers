/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UNSBundleLibrarian;

@interface UNSKeyedDictionaryRepository : NSObject {

	NSString* _directory;
	NSString* _fileName;
	NSString* _pathExtension;
	UNSBundleLibrarian* _librarian;

}
-(id)allKeys;
-(id)dictionaryForKey:(id)arg1 ;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(id)_pathForKey:(id)arg1 ;
-(void)removeDictionaryForKey:(id)arg1 ;
-(id)_dictionaryAtPath:(id)arg1 ;
-(BOOL)_saveDictionary:(id)arg1 atPath:(id)arg2 ;
-(void)_removeDictionaryAtPath:(id)arg1 ;
-(id)_directoryForKey:(id)arg1 ;
-(id)_dataAtPath:(id)arg1 ;
-(id)initWithDirectory:(id)arg1 fileName:(id)arg2 pathExtension:(id)arg3 librarian:(id)arg4 ;
@end

