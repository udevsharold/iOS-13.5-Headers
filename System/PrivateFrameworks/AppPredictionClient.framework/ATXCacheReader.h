/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class _PASLock, NSString, NSObject;

@interface ATXCacheReader : NSObject {

	_PASLock* _lock;
	NSString* _cacheBasePath;
	NSObject*<OS_dispatch_source> _vnodeSource;

}
-(id)init;
-(void)dealloc;
-(id)initWithCacheBasePath:(id)arg1 ;
-(id)readCacheFileForConsumerSubtype:(unsigned char)arg1 ;
-(id)readCacheFileForFilename:(id)arg1 ;
-(id)readCacheFileForCachePath:(id)arg1 ;
-(void)_handleDirChange;
@end
