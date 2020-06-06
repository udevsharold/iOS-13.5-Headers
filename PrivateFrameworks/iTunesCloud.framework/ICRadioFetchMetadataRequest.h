/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, ICStoreRequestContext, NSData;

@interface ICRadioFetchMetadataRequest : NSObject <NSCopying> {

	NSArray* _storeAdamIDs;
	ICStoreRequestContext* _storeRequestContext;
	NSData* _timedMetadataData;
	long long _qualityOfService;

}

@property (nonatomic,copy) NSArray * storeAdamIDs;                                   //@synthesize storeAdamIDs=_storeAdamIDs - In the implementation block
@property (nonatomic,copy) ICStoreRequestContext * storeRequestContext;              //@synthesize storeRequestContext=_storeRequestContext - In the implementation block
@property (nonatomic,copy) NSData * timedMetadataData;                               //@synthesize timedMetadataData=_timedMetadataData - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                             //@synthesize qualityOfService=_qualityOfService - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(ICStoreRequestContext *)storeRequestContext;
-(NSData *)timedMetadataData;
-(NSArray *)storeAdamIDs;
-(void)setStoreAdamIDs:(NSArray *)arg1 ;
-(void)setStoreRequestContext:(ICStoreRequestContext *)arg1 ;
-(void)setTimedMetadataData:(NSData *)arg1 ;
@end

