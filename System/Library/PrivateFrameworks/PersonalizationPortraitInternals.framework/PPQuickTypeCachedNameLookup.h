/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject, NSArray;

@interface PPQuickTypeCachedNameLookup : NSObject {

	NSObject*<OS_dispatch_semaphore> _sem;
	NSArray* _candidates;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> sem;              //@synthesize sem=_sem - In the implementation block
@property (nonatomic,retain) NSArray * candidates;                              //@synthesize candidates=_candidates - In the implementation block
-(NSObject*<OS_dispatch_semaphore>)sem;
-(NSArray *)candidates;
-(void)setCandidates:(NSArray *)arg1 ;
-(void)setSem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

