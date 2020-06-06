/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface QLThumbnailUTICache : NSObject {

	NSMutableDictionary* _itemTypeCache;
	NSObject*<OS_dispatch_queue> _synchronizationQueue;

}

@property (retain) NSMutableDictionary * itemTypeCache;              //@synthesize itemTypeCache=_itemTypeCache - In the implementation block
+(id)sharedCache;
+(id)_iWorkUTIs;
-(id)init;
-(unsigned long long)itemTypeForItem:(id)arg1 ;
-(BOOL)_contentType:(id)arg1 isEqualToContentTypeInArray:(id)arg2 ;
-(BOOL)_contentTypeIsIWorkType:(id)arg1 ;
-(unsigned long long)itemTypeForContentType:(id)arg1 ;
-(NSMutableDictionary *)itemTypeCache;
-(unsigned long long)_itemTypeByUTIResolutionForContentType:(id)arg1 ;
-(BOOL)requestedBadgeType:(unsigned long long)arg1 isValidForContentType:(id)arg2 ;
-(void)setItemTypeCache:(NSMutableDictionary *)arg1 ;
@end

