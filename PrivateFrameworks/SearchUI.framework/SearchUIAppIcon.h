/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SBLeafIcon.h>

@class SFSearchResult, SearchUIAppIconImage;

@interface SearchUIAppIcon : SBLeafIcon {

	SFSearchResult* _searchResult;
	unsigned long long _variant;
	SearchUIAppIconImage* _iconImage;

}

@property (nonatomic,readonly) SFSearchResult * searchResult;               //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,readonly) unsigned long long variant;                  //@synthesize variant=_variant - In the implementation block
@property (nonatomic,retain) SearchUIAppIconImage * iconImage;              //@synthesize iconImage=_iconImage - In the implementation block
+(BOOL)canGenerateIconsInBackground;
+(BOOL)isPlaceholderIcon;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)variant;
-(id)uniqueIdentifier;
-(SearchUIAppIconImage *)iconImage;
-(SFSearchResult *)searchResult;
-(void)setIconImage:(SearchUIAppIconImage *)arg1 ;
-(id)initWithSearchResult:(id)arg1 variant:(unsigned long long)arg2 ;
-(void)applicationWithBundleIdentifierDidChangeIconAccessories:(id)arg1 ;
-(void)iconDidChange;
@end

