/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _ASKResourceCacheGroup, NSCache;

@interface ASKResourceCache : NSObject {

	_ASKResourceCacheGroup* _group;
	NSCache* _contents;

}

@property (nonatomic,readonly) _ASKResourceCacheGroup * group;                               //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) NSCache * contents;                                           //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) BOOL isGroupMember; 
@property (assign,nonatomic) BOOL evictsObjectsWhenApplicationEntersBackground; 
@property (assign,nonatomic) unsigned long long limit; 
-(id)init;
-(void)dealloc;
-(void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)arg1 ;
-(BOOL)evictsObjectsWhenApplicationEntersBackground;
-(NSCache *)contents;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(_ASKResourceCacheGroup *)group;
-(void)addResource:(id)arg1 forKey:(id)arg2 ;
-(id)resourcesForKey:(id)arg1 ;
-(void)removeAllResources;
-(BOOL)isGroupMember;
-(void)replaceResourcesForKey:(id)arg1 withResource:(id)arg2 ;
-(id)initWithGroupOfCache:(id)arg1 ;
@end

