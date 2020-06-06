/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSURL, NSData, NSString, PLInternalResource;

@interface PLFileSystemBookmark : PLManagedObject {

	NSURL* _fileSystemURL;

}

@property (nonatomic,retain) NSData * bookmarkData; 
@property (nonatomic,retain) NSString * pathRelativeToVolume; 
@property (nonatomic,retain) PLInternalResource * resource; 
+(id)entityName;
+(id)fileSystemBookmarkFromURL:(id)arg1 context:(id)arg2 ;
-(BOOL)supportsCloudUpload;
-(id)payloadID;
-(id)payloadForChangedKeys:(id)arg1 ;
-(id)fileSystemURL;
@end

