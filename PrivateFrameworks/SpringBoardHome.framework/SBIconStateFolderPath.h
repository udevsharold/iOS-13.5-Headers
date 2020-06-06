/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SBIconStateFolderPath : NSObject {

	NSMutableArray* _folderNames;
	NSMutableArray* _folderDefaultNames;
	NSMutableArray* _folderPaths;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(void)enumerateFoldersUsingBlock:(/*^block*/id)arg1 ;
-(void)addFolderWithName:(id)arg1 defaultName:(id)arg2 indexPath:(id)arg3 ;
-(id)folderDefaultNameAtIndex:(unsigned long long)arg1 ;
-(id)folderIndexPathAtIndex:(unsigned long long)arg1 ;
-(id)folderNameAtIndex:(unsigned long long)arg1 ;
@end

