/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TISKEvent.h>

@class TISKSessionSamples;

@interface TISKBucketSwitchEvent : TISKEvent {

	TISKSessionSamples* _sessionSamples;

}

@property (nonatomic,retain) TISKSessionSamples * sessionSamples;              //@synthesize sessionSamples=_sessionSamples - In the implementation block
-(id)description;
-(id)init:(id)arg1 order:(long long)arg2 ;
-(TISKSessionSamples *)sessionSamples;
-(void)setSessionSamples:(TISKSessionSamples *)arg1 ;
@end

