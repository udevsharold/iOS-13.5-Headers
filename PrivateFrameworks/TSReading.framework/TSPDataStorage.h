/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, SFUCryptoKey;


@protocol TSPDataStorage <NSObject>
@property (nonatomic,readonly) NSString * documentResourceLocator; 
@property (nonatomic,readonly) NSString * packageLocator; 
@property (nonatomic,readonly) unsigned char packageIdentifier; 
@property (nonatomic,readonly) unsigned long long encodedLength; 
@property (nonatomic,readonly) BOOL readOnly; 
@property (nonatomic,readonly) BOOL needsDownload; 
@property (nonatomic,readonly) SFUCryptoKey * decryptionKey; 
@optional
-(BOOL)needsDownload;
-(SFUCryptoKey *)decryptionKey;
-(id)storageForDataCopyFromOtherContext;
-(void)addDownloadObserver:(id)arg1 forData:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)copyToTemporaryURL:(id)arg1;

@required
-(BOOL)readOnly;
-(unsigned long long)encodedLength;
-(unsigned char)packageIdentifier;
-(NSString *)packageLocator;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1;
-(id)bookmarkDataWithOptions:(unsigned long long)arg1;
-(id)NSDataWithOptions:(unsigned long long)arg1;
-(CGDataProviderRef)newCGDataProvider;
-(CGImageSourceRef)newCGImageSource;
-(id)AVAssetWithOptions:(id)arg1 contentTypeUTI:(id)arg2;
-(NSString *)documentResourceLocator;
-(id)filenameForPreferredFilename:(id)arg1;
-(BOOL)isInPackage:(id)arg1;
-(void)performReadWithAccessor:(/*^block*/id)arg1;
-(id)AVAssetWithOptions:(id)arg1 usingResourceLoaderWithContentTypeUTI:(id)arg2;

@end

