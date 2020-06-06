/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedGroupEmittingCursor.h>

@class NSDate, NSArray;

@interface FCTopStoriesFeedGroupCursor : FCFeedGroupEmittingCursor {

	BOOL _collapsed;
	NSDate* _publishDate;
	NSArray* _articleIDs;
	NSDate* _optionalStoriesLastRefreshDate;

}

@property (nonatomic,copy) NSDate * publishDate;                                 //@synthesize publishDate=_publishDate - In the implementation block
@property (nonatomic,copy) NSArray * articleIDs;                                 //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,copy) NSDate * optionalStoriesLastRefreshDate;              //@synthesize optionalStoriesLastRefreshDate=_optionalStoriesLastRefreshDate - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                  //@synthesize collapsed=_collapsed - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isCollapsed;
-(void)setCollapsed:(BOOL)arg1 ;
-(NSDate *)publishDate;
-(void)setPublishDate:(NSDate *)arg1 ;
-(void)setArticleIDs:(NSArray *)arg1 ;
-(NSArray *)articleIDs;
-(NSDate *)optionalStoriesLastRefreshDate;
-(void)setOptionalStoriesLastRefreshDate:(NSDate *)arg1 ;
@end

