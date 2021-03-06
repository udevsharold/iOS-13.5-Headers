/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSData;

@interface OISFUDataRepresentation : NSObject {

	BOOL mHasHash;
	unsigned mHash;
	BOOL mHasSha1Hash;
	NSData* mSha1Hash;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
-(BOOL)isEncrypted;
-(id)inputStream;
-(long long)encodedLength;
-(long long)dataLength;
-(BOOL)isReadable;
-(xmlDoc*)xmlDocument;
-(id)bufferedInputStream;
-(CGDataProviderRef)cgDataProvider;
-(unsigned long long)readIntoData:(id)arg1 ;
-(xmlTextReaderRef)xmlReaderForGzippedDataWithInputStream:(id*)arg1 ;
-(unsigned)uint32Hash;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1 ;
-(xmlTextReaderRef)xmlReader;
-(xmlTextReaderRef)xmlReaderForGzippedData;
-(id)sha1Hash;
-(xmlTextReaderRef)xmlReaderWithReadCallback:(/*function pointer*/void*)arg1 ;
@end

