/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/_MRContentItemProtobuf.h>

@class MRContentItemMetadata;

@interface MRContentItem : _MRContentItemProtobuf

@property (nonatomic,readonly) MRContentItemMetadata * itemMetadata; 
@property (nonatomic,readonly) BOOL hasCurrentLanguageOptions; 
@property (nonatomic,readonly) BOOL hasAvailableLanguageOptions; 
+(void)initialize;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(void)setSections:(id)arg1 ;
-(void)setInfo:(id)arg1 ;
-(void)setArtworkData:(id)arg1 ;
-(void)setAvailableLanguageOptions:(id)arg1 ;
-(void)setCurrentLanguageOptions:(id)arg1 ;
-(void)setLyrics:(id)arg1 ;
-(id)customDictionaryRepresentation;
-(MRContentItemMetadata *)itemMetadata;
-(BOOL)hasCurrentLanguageOptions;
-(BOOL)hasAvailableLanguageOptions;
@end
