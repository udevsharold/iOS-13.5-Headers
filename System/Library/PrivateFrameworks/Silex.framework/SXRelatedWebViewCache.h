/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface SXRelatedWebViewCache : NSObject {

	NSMapTable* _cache;

}

@property (nonatomic,readonly) NSMapTable * cache;              //@synthesize cache=_cache - In the implementation block
-(id)init;
-(NSMapTable *)cache;
-(id)relatedWebViewForBaseURL:(id)arg1 ;
-(void)storeRelatedWebView:(id)arg1 baseURL:(id)arg2 ;
@end

