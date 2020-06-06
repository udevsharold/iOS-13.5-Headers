/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol ICSearchIndexableNote <ICSearchIndexable>
@property (nonatomic,readonly) BOOL isModernNote; 
@property (nonatomic,readonly) NSArray * noteCellKeyPaths; 
@required
-(id)identifier;
-(id)title;
-(id)accountName;
-(id)folderName;
-(id)noteAsPlainTextWithoutTitle;
-(BOOL)isPasswordProtected;
-(BOOL)isModernNote;
-(BOOL)isSharedViaICloud;
-(BOOL)isSharedViaICloudFolder;
-(BOOL)isSharedReadOnly;
-(id)trimmedTitle;
-(id)folderNameForNoteList;
-(NSArray *)noteCellKeyPaths;
-(id)contentInfoText;
-(id)dateForCurrentSortType;

@end

