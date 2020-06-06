/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray, NSDictionary;

@interface CKDUploadAssetsOperationInfo : CKDatabaseOperationInfo {

	BOOL _temporary;
	NSArray* _assetsToUpload;
	NSDictionary* _assetUUIDToExpectedProperties;
	NSDictionary* _packageUUIDToExpectedProperties;

}

@property (nonatomic,retain) NSArray * assetsToUpload;                                    //@synthesize assetsToUpload=_assetsToUpload - In the implementation block
@property (nonatomic,retain) NSDictionary * assetUUIDToExpectedProperties;                //@synthesize assetUUIDToExpectedProperties=_assetUUIDToExpectedProperties - In the implementation block
@property (nonatomic,retain) NSDictionary * packageUUIDToExpectedProperties;              //@synthesize packageUUIDToExpectedProperties=_packageUUIDToExpectedProperties - In the implementation block
@property (assign,nonatomic) BOOL temporary;                                              //@synthesize temporary=_temporary - In the implementation block
-(NSDictionary *)assetUUIDToExpectedProperties;
-(void)setAssetUUIDToExpectedProperties:(NSDictionary *)arg1 ;
-(NSDictionary *)packageUUIDToExpectedProperties;
-(void)setPackageUUIDToExpectedProperties:(NSDictionary *)arg1 ;
-(void)setTemporary:(BOOL)arg1 ;
-(BOOL)temporary;
-(NSArray *)assetsToUpload;
-(void)setAssetsToUpload:(NSArray *)arg1 ;
@end

