/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SSLogFileOptions : NSObject <NSCopying> {

	NSString* _directoryPath;
	NSString* _fileName;
	long long _maxNumberOfLogFiles;
	unsigned long long _maxSizeInBytes;

}

@property (nonatomic,copy) NSString * logDirectoryPath;                      //@synthesize directoryPath=_directoryPath - In the implementation block
@property (nonatomic,copy) NSString * logFileBaseName;                       //@synthesize fileName=_fileName - In the implementation block
@property (assign,nonatomic) unsigned long long maxLogFileSize;              //@synthesize maxSizeInBytes=_maxSizeInBytes - In the implementation block
@property (assign,nonatomic) long long maxNumberOfLogFiles;                  //@synthesize maxNumberOfLogFiles=_maxNumberOfLogFiles - In the implementation block
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)logDirectoryPath;
-(void)setLogDirectoryPath:(NSString *)arg1 ;
-(NSString *)logFileBaseName;
-(void)setLogFileBaseName:(NSString *)arg1 ;
-(unsigned long long)maxLogFileSize;
-(void)setMaxLogFileSize:(unsigned long long)arg1 ;
-(long long)maxNumberOfLogFiles;
-(void)setMaxNumberOfLogFiles:(long long)arg1 ;
@end

