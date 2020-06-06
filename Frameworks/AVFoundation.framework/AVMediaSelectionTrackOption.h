/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVMediaSelectionOption.h>

@class AVAssetTrack, NSDictionary, AVWeakReference;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption {

	id _groupID;
	AVAssetTrack* _track;
	NSDictionary* _dictionary;
	AVWeakReference* _weakReferenceToGroup;
	BOOL _displaysNonForcedSubtitles;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionary;
-(id)locale;
-(int)trackID;
-(id)mediaType;
-(id)group;
-(id)_groupID;
-(id)metadataForFormat:(id)arg1 ;
-(id)commonMetadata;
-(id)availableMetadataFormats;
-(BOOL)isPlayable;
-(id)track;
-(id)_track;
-(id)mediaSubTypes;
-(id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1 ;
-(BOOL)displaysNonForcedSubtitles;
-(id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 ;
@end
