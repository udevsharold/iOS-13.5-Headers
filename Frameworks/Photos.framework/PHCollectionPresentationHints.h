/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol PHCollectionPresentationHints <NSObject>
@property (nonatomic,readonly) long long temporalRange; 
@property (nonatomic,readonly) unsigned long long socialRelationships; 
@property (nonatomic,readonly) long long tripType; 
@property (nonatomic,readonly) long long qualityCategory; 
@property (nonatomic,readonly) unsigned long long recommendedMoods; 
@property (nonatomic,readonly) unsigned long long forbiddenMoods; 
@property (nonatomic,readonly) NSDictionary * musicGenreDistribution; 
@required
-(NSDictionary *)musicGenreDistribution;
-(long long)temporalRange;
-(unsigned long long)socialRelationships;
-(long long)tripType;
-(long long)qualityCategory;
-(unsigned long long)recommendedMoods;
-(unsigned long long)forbiddenMoods;

@end

