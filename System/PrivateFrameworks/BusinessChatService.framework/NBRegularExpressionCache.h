/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface NBRegularExpressionCache : NSObject {

	NSCache* _cache;

}

@property (nonatomic,retain) NSCache * cache;              //@synthesize cache=_cache - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setCache:(NSCache *)arg1 ;
-(NSCache *)cache;
-(id)regularExpressionForPattern:(id)arg1 error:(id*)arg2 ;
@end

