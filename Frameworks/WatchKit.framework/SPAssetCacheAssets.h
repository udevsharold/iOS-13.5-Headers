/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SPAssetCacheAssets : NSObject {

	NSMutableArray* _assets;

}

@property (nonatomic,retain) NSMutableArray * assets;              //@synthesize assets=_assets - In the implementation block
+(id)toProto:(id)arg1 ;
+(id)fromProto:(id)arg1 ;
-(id)init;
-(NSMutableArray *)assets;
-(void)setAssets:(NSMutableArray *)arg1 ;
-(void)addAsset:(id)arg1 ;
@end

