/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EKDayOccurrenceState;

@interface EKDayOccurrenceContentImageRequest : NSObject {

	long long _requestId;
	unsigned long long _options;
	EKDayOccurrenceState* _state;
	/*^block*/id _resultHandler;

}

@property (nonatomic,readonly) long long requestId;                     //@synthesize requestId=_requestId - In the implementation block
@property (assign,nonatomic) unsigned long long options;                //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) EKDayOccurrenceState * state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) id resultHandler;                        //@synthesize resultHandler=_resultHandler - In the implementation block
-(unsigned long long)options;
-(EKDayOccurrenceState *)state;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setState:(EKDayOccurrenceState *)arg1 ;
-(long long)requestId;
-(id)resultHandler;
-(id)initWithId:(long long)arg1 options:(unsigned long long)arg2 state:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
@end

