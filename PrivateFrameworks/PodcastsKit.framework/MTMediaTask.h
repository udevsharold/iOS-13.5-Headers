/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMSMediaTask, NSArray;

@interface MTMediaTask : NSObject {

	AMSMediaTask* _mediaTask;

}

@property (nonatomic,retain) AMSMediaTask * mediaTask;              //@synthesize mediaTask=_mediaTask - In the implementation block
@property (nonatomic,retain) NSArray * identifiers; 
-(id)initWithType:(long long)arg1 ;
-(NSArray *)identifiers;
-(void)setIdentifiers:(NSArray *)arg1 ;
-(void)perform:(/*^block*/id)arg1 ;
-(AMSMediaTask *)mediaTask;
-(void)setMediaTask:(AMSMediaTask *)arg1 ;
@end

