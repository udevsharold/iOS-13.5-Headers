/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WBFeatureManager : NSObject {

	BOOL _offlineReadingListAvailable;
	BOOL _favoritesFolderSelectionShouldSync;
	long long _accessLevel;

}

@property (nonatomic,readonly) long long accessLevel;                                                              //@synthesize accessLevel=_accessLevel - In the implementation block
@property (getter=isOfflineReadingListAvailable,nonatomic,readonly) BOOL offlineReadingListAvailable;              //@synthesize offlineReadingListAvailable=_offlineReadingListAvailable - In the implementation block
@property (nonatomic,readonly) BOOL favoritesFolderSelectionShouldSync;                                            //@synthesize favoritesFolderSelectionShouldSync=_favoritesFolderSelectionShouldSync - In the implementation block
+(id)sharedFeatureManager;
-(id)init;
-(long long)accessLevel;
-(BOOL)isOfflineReadingListAvailable;
-(BOOL)favoritesFolderSelectionShouldSync;
-(void)_updateToAccessLevel:(long long)arg1 ;
@end

