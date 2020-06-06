/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class WBReadingListPrivate, NSObject;

@interface WBReadingList : NSObject {

	WBReadingListPrivate* _private;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(BOOL)supportsURL:(id)arg1 ;
+(id)defaultReadingList;
-(id)init;
-(id)_init;
-(BOOL)addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 error:(id*)arg4 ;
@end

