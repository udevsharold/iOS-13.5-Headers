/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, NSArray;

@interface SUMediaPlayerItem : NSObject <NSCopying> {

	NSURL* _backgroundImageURL;
	NSString* _bookmarkIdentifier;
	NSArray* _downloadPingURLs;
	long long _initialOrientation;
	unsigned long long _itemIdentifier;
	long long _itemType;
	NSArray* _playbackPingURLs;
	double _playableDuration;
	NSString* _subtitle;
	NSString* _title;
	NSURL* _url;

}

@property (nonatomic,retain) NSURL * backgroundImageURL;                     //@synthesize backgroundImageURL=_backgroundImageURL - In the implementation block
@property (assign,nonatomic) double bookmarkedStartTime; 
@property (nonatomic,copy) NSString * bookmarkIdentifier;                    //@synthesize bookmarkIdentifier=_bookmarkIdentifier - In the implementation block
@property (assign,nonatomic) long long initialOrientation;                   //@synthesize initialOrientation=_initialOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) long long itemType;                             //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,copy) NSArray * downloadPingURLs;                       //@synthesize downloadPingURLs=_downloadPingURLs - In the implementation block
@property (nonatomic,copy) NSArray * playbackPingURLs;                       //@synthesize playbackPingURLs=_playbackPingURLs - In the implementation block
@property (assign,nonatomic) double playableDuration;                        //@synthesize playableDuration=_playableDuration - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                    //@synthesize url=_url - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)itemIdentifier;
-(void)setItemIdentifier:(unsigned long long)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(long long)itemType;
-(void)setItemType:(long long)arg1 ;
-(double)playableDuration;
-(void)setBackgroundImageURL:(NSURL *)arg1 ;
-(NSURL *)backgroundImageURL;
-(id)_newPingURLsWithArray:(id)arg1 ;
-(void)setBookmarkedStartTime:(double)arg1 ;
-(double)bookmarkedStartTime;
-(void)resetBookmarkedStartTime;
-(NSString *)bookmarkIdentifier;
-(void)setBookmarkIdentifier:(NSString *)arg1 ;
-(NSArray *)downloadPingURLs;
-(void)setDownloadPingURLs:(NSArray *)arg1 ;
-(long long)initialOrientation;
-(void)setInitialOrientation:(long long)arg1 ;
-(void)setPlayableDuration:(double)arg1 ;
-(NSArray *)playbackPingURLs;
-(void)setPlaybackPingURLs:(NSArray *)arg1 ;
@end

