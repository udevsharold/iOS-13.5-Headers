/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BDSCloudKitSupportSignOut.h>

@protocol BCCloudAssetDetailManager, BCCloudReadingNowDetailManager, BCCloudAssetReviewManager, BCCloudStoreAssetManager;
@class NSManagedObjectModel, BCCloudDataSource, BCCloudAssetAnnotationManager, NSObject, BCCloudChangeTokenController, BDSServiceProxy;

@interface BCCloudAssetManager : NSObject <BDSCloudKitSupportSignOut> {

	BOOL _proxyMode;
	NSManagedObjectModel* _objectModel;
	BCCloudDataSource* _assetDataSource;
	BCCloudAssetAnnotationManager* _assetAnnotationManager;
	NSObject*<BCCloudAssetDetailManager> _assetDetailManager;
	NSObject*<BCCloudReadingNowDetailManager> _readingNowDetailManager;
	NSObject*<BCCloudAssetReviewManager> _assetReviewManager;
	NSObject*<BCCloudStoreAssetManager> _storeAssetManager;
	BCCloudChangeTokenController* _changeTokenController;
	BDSServiceProxy* _serviceProxy;

}

@property (nonatomic,retain) BCCloudAssetAnnotationManager * assetAnnotationManager;                         //@synthesize assetAnnotationManager=_assetAnnotationManager - In the implementation block
@property (nonatomic,retain) NSObject*<BCCloudAssetDetailManager> assetDetailManager;                        //@synthesize assetDetailManager=_assetDetailManager - In the implementation block
@property (nonatomic,retain) NSObject*<BCCloudReadingNowDetailManager> readingNowDetailManager;              //@synthesize readingNowDetailManager=_readingNowDetailManager - In the implementation block
@property (nonatomic,retain) NSObject*<BCCloudAssetReviewManager> assetReviewManager;                        //@synthesize assetReviewManager=_assetReviewManager - In the implementation block
@property (nonatomic,retain) NSObject*<BCCloudStoreAssetManager> storeAssetManager;                          //@synthesize storeAssetManager=_storeAssetManager - In the implementation block
@property (nonatomic,retain) BCCloudChangeTokenController * changeTokenController;                           //@synthesize changeTokenController=_changeTokenController - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * objectModel;                                             //@synthesize objectModel=_objectModel - In the implementation block
@property (nonatomic,retain) BDSServiceProxy * serviceProxy;                                                 //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (assign,nonatomic) BOOL proxyMode;                                                                 //@synthesize proxyMode=_proxyMode - In the implementation block
@property (nonatomic,retain) BCCloudDataSource * assetDataSource;                                            //@synthesize assetDataSource=_assetDataSource - In the implementation block
+(id)sharedManager;
+(id)sharedClientXPCProxy;
-(void)dealloc;
-(BDSServiceProxy *)serviceProxy;
-(void)setServiceProxy:(BDSServiceProxy *)arg1 ;
-(void)setObjectModel:(NSManagedObjectModel *)arg1 ;
-(NSManagedObjectModel *)objectModel;
-(void)dissociateCloudDataFromSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)setEnableCloudSync:(BOOL)arg1 enableReadingNowSync:(BOOL)arg2 ;
-(void)deleteCloudDataWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<BCCloudStoreAssetManager>)storeAssetManager;
-(id)initClientXPCProxy;
-(BCCloudChangeTokenController *)changeTokenController;
-(void)setChangeTokenController:(BCCloudChangeTokenController *)arg1 ;
-(BOOL)proxyMode;
-(void)setProxyMode:(BOOL)arg1 ;
-(BCCloudAssetAnnotationManager *)assetAnnotationManager;
-(BCCloudDataSource *)assetDataSource;
-(void)setAssetDataSource:(BCCloudDataSource *)arg1 ;
-(void)setAssetAnnotationManager:(BCCloudAssetAnnotationManager *)arg1 ;
-(NSObject*<BCCloudAssetDetailManager>)assetDetailManager;
-(void)setAssetDetailManager:(NSObject*<BCCloudAssetDetailManager>)arg1 ;
-(NSObject*<BCCloudReadingNowDetailManager>)readingNowDetailManager;
-(void)setReadingNowDetailManager:(NSObject*<BCCloudReadingNowDetailManager>)arg1 ;
-(NSObject*<BCCloudAssetReviewManager>)assetReviewManager;
-(void)setAssetReviewManager:(NSObject*<BCCloudAssetReviewManager>)arg1 ;
-(void)setStoreAssetManager:(NSObject*<BCCloudStoreAssetManager>)arg1 ;
@end

