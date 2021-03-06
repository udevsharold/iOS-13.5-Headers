/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol NFLFeedComponentLayout <NSObject,NSCopying>
@property (nonatomic,readonly) double rank; 
@property (nonatomic,copy,readonly) NSArray * tileInfosUsed; 
@property (nonatomic,readonly) unsigned long long rowSpan; 
@property (nonatomic,readonly) unsigned long long columnSpan; 
@required
-(double)rank;
-(unsigned long long)columnSpan;
-(unsigned long long)rowSpan;
-(NSArray *)tileInfosUsed;
-(id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;

@end

