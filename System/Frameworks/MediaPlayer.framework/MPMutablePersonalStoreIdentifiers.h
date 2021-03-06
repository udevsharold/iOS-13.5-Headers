/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MPMutablePersonalStoreIdentifiers <MPPersonalStoreIdentifiers>
@property (assign,nonatomic) unsigned long long cloudID; 
@property (nonatomic,copy) NSString * cloudAlbumID; 
@property (nonatomic,copy) NSString * recommendationID; 
@required
-(unsigned long long)cloudID;
-(void)setCloudID:(unsigned long long)arg1;
-(NSString *)cloudAlbumID;
-(void)setCloudAlbumID:(id)arg1;
-(NSString *)recommendationID;
-(void)setRecommendationID:(id)arg1;

@end

