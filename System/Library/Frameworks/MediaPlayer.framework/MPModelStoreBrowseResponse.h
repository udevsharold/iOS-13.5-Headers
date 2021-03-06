/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelResponse.h>

@class MPChangeDetails, MPModelStoreBrowseResponseParser;

@interface MPModelStoreBrowseResponse : MPModelResponse {

	MPChangeDetails* _changeDetails;
	MPModelStoreBrowseResponseParser* _parser;

}

@property (nonatomic,retain) MPModelStoreBrowseResponseParser * parser;              //@synthesize parser=_parser - In the implementation block
@property (nonatomic,retain) MPChangeDetails * changeDetails;                        //@synthesize changeDetails=_changeDetails - In the implementation block
@property (nonatomic,readonly) BOOL hasAdditionalContentItems; 
-(MPModelStoreBrowseResponseParser *)parser;
-(void)setParser:(MPModelStoreBrowseResponseParser *)arg1 ;
-(BOOL)hasAdditionalContentItems;
-(MPChangeDetails *)changeDetails;
-(void)setChangeDetails:(MPChangeDetails *)arg1 ;
@end

