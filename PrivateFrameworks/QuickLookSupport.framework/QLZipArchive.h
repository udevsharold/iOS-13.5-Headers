/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLookSupport/QuickLookSupport-Structs.h>
@class NSURL, NSData, NSFileWrapper;

@interface QLZipArchive : NSObject {

	archiveRef _archive;
	NSURL* _url;
	NSData* _data;
	NSFileWrapper* _fileWrapper;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(id)fileWrapper;
-(void)enumerateEntriesWithHandler:(/*^block*/id)arg1 ;
-(id)readCurrentDataWithEntry:(archive_entryRef)arg1 error:(id*)arg2 ;
-(BOOL)_reopenWithError:(id*)arg1 ;
-(id)libarchiveError;
@end

