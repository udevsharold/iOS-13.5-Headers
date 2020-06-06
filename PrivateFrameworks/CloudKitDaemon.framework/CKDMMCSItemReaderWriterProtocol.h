/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CKDMMCSItemGroupContext, CKDMMCSItem;


@protocol CKDMMCSItemReaderWriterProtocol <NSObject>
@property (nonatomic,readonly) CKDMMCSItemGroupContext * MMCSRequest; 
@property (nonatomic,readonly) CKDMMCSItem * MMCSItem; 
@required
-(BOOL)openWithError:(id*)arg1;
-(BOOL)closeWithError:(id*)arg1;
-(CKDMMCSItemGroupContext *)MMCSRequest;
-(CKDMMCSItem *)MMCSItem;
-(id)getFileMetadataWithError:(id*)arg1;
-(BOOL)readBytesAtOffset:(unsigned long long)arg1 bytes:(char*)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long*)arg4 error:(id*)arg5;
-(BOOL)writeBytesAtOffset:(unsigned long long)arg1 bytes:(char*)arg2 length:(unsigned long long)arg3 bytesWritten:(unsigned long long*)arg4 error:(id*)arg5;

@end

