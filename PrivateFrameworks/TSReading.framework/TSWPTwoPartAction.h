/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSWPTwoPartAction : NSObject {

	/*^block*/id _startAction;
	/*^block*/id _cancelAction;
	/*^block*/id _finishAction;
	BOOL _performImmediately;

}

@property (assign) BOOL performImmediately;              //@synthesize performImmediately=_performImmediately - In the implementation block
+(id)actionWithStartAction:(/*^block*/id)arg1 cancelAction:(/*^block*/id)arg2 finishAction:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)cancel;
-(void)setPerformImmediately:(BOOL)arg1 ;
-(id)initWithStartAction:(/*^block*/id)arg1 cancelAction:(/*^block*/id)arg2 finishAction:(/*^block*/id)arg3 ;
-(void)performStartAction;
-(void)performFinishAction;
-(BOOL)performImmediately;
@end

