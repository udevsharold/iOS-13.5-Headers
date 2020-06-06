/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WatchListKit/WatchListKit-Structs.h>
@class NSArray;

@interface WLKArtworkVariantListing : NSObject {

	NSArray* _artworkVariants;

}

@property (nonatomic,copy,readonly) NSArray * artworkVariants;              //@synthesize artworkVariants=_artworkVariants - In the implementation block
-(id)initWithArtworkDictionary:(id)arg1 ;
-(id)bestArtworkVariantOfType:(long long)arg1 forSize:(CGSize)arg2 ;
-(id)bestArtworkVariantForSize:(CGSize)arg1 ;
-(id)artworkVariantOfType:(long long)arg1 ;
-(NSArray *)artworkVariants;
@end

