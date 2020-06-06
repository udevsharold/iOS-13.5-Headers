/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSPData, TSUFlushingManager;

@interface TSDImageProvider : NSObject {

	int mLoadState;
	TSPData* mImageData;
	TSUFlushingManager* mFlushingManager;
	int mInterest;
	os_unfair_lock_s mInterestLock;
	atomic<int> mRetainCount;
	atomic<int> mOwnerCount;

}

@property (nonatomic,readonly) unsigned long long imageGamut; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(BOOL)isValid;
-(void)flush;
-(id)initWithImageData:(id)arg1 ;
-(id)imageData;
-(CGSize)naturalSize;
-(int)interest;
-(BOOL)isError;
-(void)addInterest;
-(void)removeInterest;
-(void)drawImageInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(void)flushIfInterestLessThan:(int)arg1 ;
-(CGSize)dpiAdjustedNaturalSize;
-(unsigned long long)imageGamut;
-(void)i_commonInit;
-(BOOL)hasFlushableContent;
-(void)setFlushingManager:(id)arg1 ;
-(void)addOwner;
-(void)removeOwner;
-(void)ownerAccess;
@end

