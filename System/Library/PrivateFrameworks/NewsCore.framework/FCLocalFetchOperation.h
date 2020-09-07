/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFetchOperation.h>

@protocol FCChannelProviding;
@class NSArray, NSMutableArray;

@interface FCLocalFetchOperation : FCFetchOperation {

	NSArray* _paths;
	NSMutableArray* _headlines;
	id<FCChannelProviding> _channel;

}

@property (nonatomic,readonly) NSArray * paths;                           //@synthesize paths=_paths - In the implementation block
@property (nonatomic,readonly) NSMutableArray * headlines;                //@synthesize headlines=_headlines - In the implementation block
@property (nonatomic,retain) id<FCChannelProviding> channel;              //@synthesize channel=_channel - In the implementation block
-(id<FCChannelProviding>)channel;
-(NSArray *)paths;
-(void)setChannel:(id<FCChannelProviding>)arg1 ;
-(void)performOperation;
-(NSMutableArray *)headlines;
-(id)initWithPaths:(id)arg1 andChannel:(id)arg2 ;
-(void)convertPathsToHeadlines;
@end
