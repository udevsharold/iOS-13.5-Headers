/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ContentKit/ContentKit-Structs.h>
@interface WFArchiveEntry : NSObject {

	archive_entryRef _entry;
	/*^block*/id _dataProvider;

}

@property (nonatomic,readonly) archive_entryRef entry;              //@synthesize entry=_entry - In the implementation block
@property (nonatomic,readonly) id dataProvider;                     //@synthesize dataProvider=_dataProvider - In the implementation block
+(id)archiveEntriesWithTopLevelFileRepresentation:(id)arg1 usedFilenames:(id)arg2 ;
-(void)dealloc;
-(archive_entryRef)entry;
-(id)dataProvider;
-(id)initWithDirectoryName:(id)arg1 ;
-(id)initWithFilename:(id)arg1 fileRepresentation:(id)arg2 ;
-(id)initWithFilename:(id)arg1 fileType:(unsigned short)arg2 filePermission:(unsigned short)arg3 fileSize:(long long)arg4 modificationDate:(id)arg5 creationDate:(id)arg6 dataProvider:(/*^block*/id)arg7 ;
@end

