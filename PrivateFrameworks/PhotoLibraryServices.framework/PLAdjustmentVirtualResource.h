/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLVirtualResource.h>

@class NSNumber;

@interface PLAdjustmentVirtualResource : PLVirtualResource {

	os_unfair_lock_s _lock;
	NSNumber* _cachedDataLength;

}

@property (assign,nonatomic) os_unfair_lock_s lock;                  //@synthesize lock=_lock - In the implementation block
@property (nonatomic,copy) NSNumber * cachedDataLength;              //@synthesize cachedDataLength=_cachedDataLength - In the implementation block
-(os_unfair_lock_s)lock;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(long long)dataLength;
-(id)adjustmentDictionary;
-(id)initWithAdjustmentFilePath:(id)arg1 forAsset:(id)arg2 ;
-(long long)estimatedDataLength;
-(NSNumber *)cachedDataLength;
-(void)setCachedDataLength:(NSNumber *)arg1 ;
@end

