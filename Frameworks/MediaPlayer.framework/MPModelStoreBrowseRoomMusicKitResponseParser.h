/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPModelStoreBrowseSectionBuilder, MPModelStoreBrowseContentItemBuilder, NSIndexSet, MPSectionedCollection, ICUserIdentity;

@interface MPModelStoreBrowseRoomMusicKitResponseParser : NSObject {

	long long _parseOnceToken;
	id _rawResponseOutput;
	MPModelStoreBrowseSectionBuilder* _sectionBuilder;
	MPModelStoreBrowseContentItemBuilder* _contentItemBuilder;
	NSIndexSet* _filteredFCKinds;
	MPSectionedCollection* _results;
	ICUserIdentity* _userIdentity;

}

@property (nonatomic,readonly) MPSectionedCollection * results; 
-(MPSectionedCollection *)results;
-(id)_parsedSectionedCollection;
-(id)initWithRawResponseOutput:(id)arg1 sectionBuilder:(id)arg2 contentItemBuilder:(id)arg3 filteredFCKinds:(id)arg4 userIdentity:(id)arg5 ;
-(id)_parsedElements:(id)arg1 ;
-(id)_parsedContentNode:(id)arg1 additionalAttributesFromParent:(id)arg2 ;
@end

