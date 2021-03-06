/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFEventBuilder.h>

@interface HFDurationEventBuilder : HFEventBuilder {

	double _duration;

}

@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
-(id)description;
-(double)duration;
-(id)initWithEvent:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)buildNewEventFromCurrentState;
@end

