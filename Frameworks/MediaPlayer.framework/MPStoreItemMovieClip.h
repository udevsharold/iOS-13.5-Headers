/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray, MPStoreArtworkRequestToken, NSString;

@interface MPStoreItemMovieClip : NSObject {

	NSDictionary* _lookupDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * lookupDictionary;                                      //@synthesize lookupDictionary=_lookupDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSArray * assets; 
@property (nonatomic,copy,readonly) MPStoreArtworkRequestToken * previewArtworkRequestToken; 
@property (nonatomic,copy,readonly) NSString * title; 
-(NSString *)title;
-(NSArray *)assets;
-(id)initWithLookupDictionary:(id)arg1 ;
-(NSDictionary *)lookupDictionary;
-(MPStoreArtworkRequestToken *)previewArtworkRequestToken;
@end

