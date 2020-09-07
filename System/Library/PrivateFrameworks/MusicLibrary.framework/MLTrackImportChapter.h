/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSURL;

@interface MLTrackImportChapter : NSObject <NSCopying> {

	NSData* _imageData;
	NSString* _imageCacheKey;
	unsigned long long _startTimeInMilliseconds;
	NSString* _title;
	NSURL* _url;
	NSString* _urlTitle;

}

@property (nonatomic,copy) NSData * imageData;                                        //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,copy) NSString * imageCacheKey;                                  //@synthesize imageCacheKey=_imageCacheKey - In the implementation block
@property (assign,nonatomic) unsigned long long startTimeInMilliseconds;              //@synthesize startTimeInMilliseconds=_startTimeInMilliseconds - In the implementation block
@property (nonatomic,copy) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                               //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * URLTitle;                                       //@synthesize urlTitle=_urlTitle - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSData *)imageData;
-(void)setImageData:(NSData *)arg1 ;
-(NSString *)imageCacheKey;
-(unsigned long long)startTimeInMilliseconds;
-(NSString *)URLTitle;
-(void)normalizeProperties;
-(BOOL)isEqualIgnoringTimesAndTitle:(id)arg1 ;
-(void)setStartTimeInMilliseconds:(unsigned long long)arg1 ;
-(void)setURLTitle:(NSString *)arg1 ;
-(void)setImageCacheKey:(NSString *)arg1 ;
@end
