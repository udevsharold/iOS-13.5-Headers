/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSArray;

@interface CLSNowPlayingStreamSession : NSObject {

	NSDate* _localEndDate;
	NSDate* _localStartDate;
	NSArray* _events;

}

@property (nonatomic,copy) NSArray * events;                         //@synthesize events=_events - In the implementation block
@property (nonatomic,readonly) NSDate * localStartDate;              //@synthesize localStartDate=_localStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * localEndDate;                //@synthesize localEndDate=_localEndDate - In the implementation block
+(id)playbackStreamSessionDateSortDescriptors;
-(id)description;
-(id)debugDescription;
-(NSArray *)events;
-(void)setEvents:(NSArray *)arg1 ;
-(id)initWithEvents:(id)arg1 ;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(id)initWithDataCluster:(id)arg1 ;
@end

