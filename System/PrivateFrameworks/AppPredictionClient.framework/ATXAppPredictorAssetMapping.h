/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface ATXAppPredictorAssetMapping : NSObject {

	NSDictionary* _consumerSubTypeAssetMappings;

}
+(id)getFullCachePathWithBaseCachePath:(id)arg1 cacheFileBaseName:(id)arg2 subScoreName:(id)arg3 ;
+(id)initWithCachedAssets;
+(id)sharedInstanceWithMobileAssets;
-(id)init;
-(id)initWithUseMobileAssets:(BOOL)arg1 ;
-(id)getAssetFileAndSubscoreForConsumerSubType:(unsigned char)arg1 ;
-(id)getFullDefaultCachePathWithConsumerSubType:(unsigned char)arg1 ;
-(id)getFullCachePathWithBaseCachePath:(id)arg1 consumerSubType:(unsigned char)arg2 ;
-(id)getAtxToolDescription;
@end

