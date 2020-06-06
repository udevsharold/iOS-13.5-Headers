/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCPersonalizationFeature.h>

@class NSString, NSArray;

@interface FCPublisherTopicFeature : FCPersonalizationFeature {

	NSString* _publisherTagID;
	NSString* _topicTagID;

}

@property (nonatomic,retain) NSString * publisherTagID;              //@synthesize publisherTagID=_publisherTagID - In the implementation block
@property (nonatomic,retain) NSString * topicTagID;                  //@synthesize topicTagID=_topicTagID - In the implementation block
@property (nonatomic,readonly) NSArray * features; 
-(id)init;
-(NSArray *)features;
-(id)initWithPublisherTagID:(id)arg1 topicTagID:(id)arg2 ;
-(id)initWithPersonalizationIdentifier:(id)arg1 ;
-(id)fr_description;
-(void)setPublisherTagID:(NSString *)arg1 ;
-(void)setTopicTagID:(NSString *)arg1 ;
-(NSString *)publisherTagID;
-(NSString *)topicTagID;
@end

