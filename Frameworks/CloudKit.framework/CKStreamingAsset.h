/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/CKRecordValue.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSURL, NSDate, C2RequestOptions;

@interface CKStreamingAsset : NSObject <CKRecordValue, NSSecureCoding, NSCopying> {

	BOOL _hasSize;
	NSData* _fileSignature;
	NSData* _referenceSignature;
	NSString* _owner;
	unsigned long long _expectedSizeBytes;
	NSURL* _uploadURL;
	NSDate* _uploadURLExpirationDate;
	unsigned long long _reservedSize;
	C2RequestOptions* _requestOptions;
	NSURL* _downloadURL;
	NSDate* _downloadURLExpirationDate;
	unsigned long long _size;
	NSString* _uploadReceipt;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSData * fileSignature;                                          //@synthesize fileSignature=_fileSignature - In the implementation block
@property (nonatomic,copy) NSData * referenceSignature;                                     //@synthesize referenceSignature=_referenceSignature - In the implementation block
@property (nonatomic,copy) NSString * owner;                                                //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) unsigned long long expectedSizeBytes;                          //@synthesize expectedSizeBytes=_expectedSizeBytes - In the implementation block
@property (nonatomic,copy) NSURL * uploadURL;                                               //@synthesize uploadURL=_uploadURL - In the implementation block
@property (nonatomic,copy) NSDate * uploadURLExpirationDate;                                //@synthesize uploadURLExpirationDate=_uploadURLExpirationDate - In the implementation block
@property (assign,nonatomic) unsigned long long reservedSize;                               //@synthesize reservedSize=_reservedSize - In the implementation block
@property (nonatomic,copy) C2RequestOptions * requestOptions;                               //@synthesize requestOptions=_requestOptions - In the implementation block
@property (nonatomic,copy) NSURL * downloadURL;                                             //@synthesize downloadURL=_downloadURL - In the implementation block
@property (nonatomic,copy) NSDate * downloadURLExpirationDate;                              //@synthesize downloadURLExpirationDate=_downloadURLExpirationDate - In the implementation block
@property (assign,nonatomic) unsigned long long size;                                       //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) BOOL hasSize;                                                  //@synthesize hasSize=_hasSize - In the implementation block
@property (nonatomic,copy) NSString * uploadReceipt;                                        //@synthesize uploadReceipt=_uploadReceipt - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesUploaded; 
@property (nonatomic,readonly) unsigned long long bytesUpperBound; 
@property (nonatomic,copy,readonly) NSURL * contentDownloadURL; 
@property (nonatomic,copy,readonly) NSDate * contentDownloadURLExpirationDate; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)size;
-(void)setOwner:(NSString *)arg1 ;
-(NSString *)owner;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setUploadURL:(NSURL *)arg1 ;
-(NSURL *)uploadURL;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(void)setRequestOptions:(C2RequestOptions *)arg1 ;
-(NSData *)fileSignature;
-(NSData *)referenceSignature;
-(void)setFileSignature:(NSData *)arg1 ;
-(void)setReferenceSignature:(NSData *)arg1 ;
-(id)_initBare;
-(BOOL)hasSize;
-(NSString *)uploadReceipt;
-(NSURL *)downloadURL;
-(void)setUploadReceipt:(NSString *)arg1 ;
-(void)setHasSize:(BOOL)arg1 ;
-(unsigned long long)bytesUploaded;
-(C2RequestOptions *)requestOptions;
-(void)copyServerFieldsFromStreamingAsset:(id)arg1 ;
-(NSDate *)uploadURLExpirationDate;
-(void)setUploadURLExpirationDate:(NSDate *)arg1 ;
-(void)setDownloadURL:(NSURL *)arg1 ;
-(NSDate *)downloadURLExpirationDate;
-(void)setDownloadURLExpirationDate:(NSDate *)arg1 ;
-(unsigned long long)expectedSizeBytes;
-(void)setExpectedSizeBytes:(unsigned long long)arg1 ;
-(unsigned long long)reservedSize;
-(void)setReservedSize:(unsigned long long)arg1 ;
-(id)initWithExpectedSizeBytes:(unsigned long long)arg1 ;
-(NSURL *)contentDownloadURL;
-(NSDate *)contentDownloadURLExpirationDate;
-(unsigned long long)bytesUpperBound;
@end

