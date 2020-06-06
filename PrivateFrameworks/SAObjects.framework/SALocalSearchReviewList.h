/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSURL, NSString, SALocalSearchRating, NSArray, NSNumber;

@interface SALocalSearchReviewList : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSURL * providerId; 
@property (nonatomic,copy) NSString * providerId2; 
@property (nonatomic,retain) SALocalSearchRating * rating; 
@property (nonatomic,copy) NSArray * selectReviews; 
@property (nonatomic,copy) NSNumber * totalReviewCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reviewList;
+(id)reviewListWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SALocalSearchRating *)rating;
-(NSURL *)providerId;
-(void)setProviderId:(NSURL *)arg1 ;
-(void)setRating:(SALocalSearchRating *)arg1 ;
-(id)encodedClassName;
-(NSString *)providerId2;
-(void)setProviderId2:(NSString *)arg1 ;
-(NSArray *)selectReviews;
-(void)setSelectReviews:(NSArray *)arg1 ;
-(NSNumber *)totalReviewCount;
-(void)setTotalReviewCount:(NSNumber *)arg1 ;
@end

