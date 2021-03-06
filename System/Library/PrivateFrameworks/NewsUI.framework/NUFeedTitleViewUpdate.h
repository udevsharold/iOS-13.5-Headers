/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage;

@interface NUFeedTitleViewUpdate : NSObject <NSCopying> {

	unsigned long long _updateType;
	unsigned long long _storyCount;
	NSString* _feedName;
	UIImage* _feedImage;

}

@property (nonatomic,readonly) unsigned long long updateType;              //@synthesize updateType=_updateType - In the implementation block
@property (assign,nonatomic) unsigned long long storyCount;                //@synthesize storyCount=_storyCount - In the implementation block
@property (nonatomic,copy) NSString * feedName;                            //@synthesize feedName=_feedName - In the implementation block
@property (nonatomic,retain) UIImage * feedImage;                          //@synthesize feedImage=_feedImage - In the implementation block
+(id)feedTitleViewUpdateEmptyState;
+(id)feedTitleViewUpdateForFeedName:(id)arg1 ;
+(id)feedTitleViewUpdateForFeedImage:(id)arg1 ;
+(id)feedTitleViewUpdateForCheckingForNewStories;
+(id)feedTitleViewUpdateForNewStoriesWithStoryCount:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)updateType;
-(id)initWithUpdateType:(unsigned long long)arg1 ;
-(id)convertToTitleViewUpdateWithCompact:(BOOL)arg1 ;
-(void)setFeedName:(NSString *)arg1 ;
-(void)setFeedImage:(UIImage *)arg1 ;
-(void)setStoryCount:(unsigned long long)arg1 ;
-(unsigned long long)storyCount;
-(NSString *)feedName;
-(UIImage *)feedImage;
@end

