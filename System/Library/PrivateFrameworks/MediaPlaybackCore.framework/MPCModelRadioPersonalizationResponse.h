/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelResponse.h>

@class MPStoreLibraryPersonalizationResponse, MPSectionedCollection;

@interface MPCModelRadioPersonalizationResponse : MPModelResponse {

	MPStoreLibraryPersonalizationResponse* _personalizationResponse;
	MPSectionedCollection* _radioStationTracks;

}

@property (nonatomic,copy) MPSectionedCollection * radioStationTracks;              //@synthesize radioStationTracks=_radioStationTracks - In the implementation block
@property (nonatomic,copy,readonly) MPSectionedCollection * results; 
-(void)dealloc;
-(id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2 ;
-(void)setRadioStationTracks:(MPSectionedCollection *)arg1 ;
-(MPSectionedCollection *)radioStationTracks;
@end

