/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface _DRTopicActionEntry : NSObject {

	NSString* _topic;
	NSDate* _when;
	unsigned long long _action;

}

@property (retain,readonly) NSString * topic;                //@synthesize topic=_topic - In the implementation block
@property (retain,readonly) NSDate * when;                   //@synthesize when=_when - In the implementation block
@property (readonly) unsigned long long action;              //@synthesize action=_action - In the implementation block
-(id)description;
-(unsigned long long)action;
-(NSString *)topic;
-(NSDate *)when;
-(id)initWithTopic:(id)arg1 when:(id)arg2 action:(unsigned long long)arg3 ;
@end

