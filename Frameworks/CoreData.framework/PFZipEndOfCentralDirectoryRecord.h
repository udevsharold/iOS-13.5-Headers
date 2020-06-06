/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PFZipEndOfCentralDirectoryRecord : NSObject {

	unsigned short _numberOfDisk;
	unsigned short _diskWhereCentralDirectoryStarts;
	unsigned short _numberOfCentralDirectoryRecordsOnThisDisk;
	unsigned short _totalNumberOfCentralDirectoryRecords;
	unsigned _byteSizeOfCentralDirectory;
	unsigned _centralDirectoryOffset;
	unsigned short _commentLength;
	NSString* _comment;

}

@property (assign,nonatomic) unsigned short numberOfDisk;                                           //@synthesize numberOfDisk=_numberOfDisk - In the implementation block
@property (assign,nonatomic) unsigned short diskWhereCentralDirectoryStarts;                        //@synthesize diskWhereCentralDirectoryStarts=_diskWhereCentralDirectoryStarts - In the implementation block
@property (assign,nonatomic) unsigned short numberOfCentralDirectoryRecordsOnThisDisk;              //@synthesize numberOfCentralDirectoryRecordsOnThisDisk=_numberOfCentralDirectoryRecordsOnThisDisk - In the implementation block
@property (assign,nonatomic) unsigned short totalNumberOfCentralDirectoryRecords;                   //@synthesize totalNumberOfCentralDirectoryRecords=_totalNumberOfCentralDirectoryRecords - In the implementation block
@property (assign,nonatomic) unsigned byteSizeOfCentralDirectory;                                   //@synthesize byteSizeOfCentralDirectory=_byteSizeOfCentralDirectory - In the implementation block
@property (assign,nonatomic) unsigned centralDirectoryOffset;                                       //@synthesize centralDirectoryOffset=_centralDirectoryOffset - In the implementation block
@property (nonatomic,readonly) unsigned short commentLength;                                        //@synthesize commentLength=_commentLength - In the implementation block
@property (nonatomic,retain) NSString * comment;                                                    //@synthesize comment=_comment - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)comment;
-(unsigned long long)loadFromBytes:(const char*)arg1 offset:(unsigned long long)arg2 ;
-(unsigned long long)loadFromData:(id)arg1 offset:(unsigned long long)arg2 ;
-(void)appendToData:(id)arg1 ;
-(void)setComment:(NSString *)arg1 ;
-(unsigned short)numberOfDisk;
-(void)setNumberOfDisk:(unsigned short)arg1 ;
-(unsigned short)diskWhereCentralDirectoryStarts;
-(void)setDiskWhereCentralDirectoryStarts:(unsigned short)arg1 ;
-(unsigned short)numberOfCentralDirectoryRecordsOnThisDisk;
-(void)setNumberOfCentralDirectoryRecordsOnThisDisk:(unsigned short)arg1 ;
-(unsigned short)totalNumberOfCentralDirectoryRecords;
-(void)setTotalNumberOfCentralDirectoryRecords:(unsigned short)arg1 ;
-(unsigned)byteSizeOfCentralDirectory;
-(void)setByteSizeOfCentralDirectory:(unsigned)arg1 ;
-(unsigned)centralDirectoryOffset;
-(void)setCentralDirectoryOffset:(unsigned)arg1 ;
-(unsigned short)commentLength;
@end

