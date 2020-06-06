/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BCSCloudServerBodyProvider.h>

@class NSString;

@interface BCSV1CloudServerBodyProvider : NSObject <BCSCloudServerBodyProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bodyForBusinessItemRequestWithBizID:(id)arg1 ;
-(id)bodyForBusinessItemRequestWithBucketStartIndex:(long long)arg1 endIndex:(long long)arg2 ;
-(id)bodyForConfigItemRequest;
-(id)bodyForBloomFilterRequestWithStartIndex:(long long)arg1 shardCount:(long long)arg2 ;
-(id)bodyDictionaryForBusinessItemRequestWithBizID:(id)arg1 ;
-(id)jsonDataForBodyDictionary:(id)arg1 ;
-(id)bodyDictionaryForBusinessItemRequestWithBucketStartIndex:(long long)arg1 endIndex:(long long)arg2 ;
-(id)bodyDictionaryForConfigItem;
-(id)bodyDictionaryForBloomFilterRequestWithStartIndex:(long long)arg1 shardCount:(long long)arg2 ;
@end

