/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CATStateMachineEvent : NSObject {

	id _trigger;
	id _context;

}

@property (nonatomic,readonly) id trigger;              //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,readonly) id context;              //@synthesize context=_context - In the implementation block
+(id)eventWithTrigger:(id)arg1 context:(id)arg2 ;
-(id)description;
-(id)context;
-(id)trigger;
-(id)initWithEventTrigger:(id)arg1 context:(id)arg2 ;
@end

