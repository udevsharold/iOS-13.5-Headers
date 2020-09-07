/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDCodableRoutineRequestMessage;

@interface HDRemoteRoutineRequestContext : NSObject {

	HDCodableRoutineRequestMessage* _request;
	/*^block*/id _completion;

}

@property (nonatomic,retain) HDCodableRoutineRequestMessage * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id completion;                                           //@synthesize completion=_completion - In the implementation block
-(void)setRequest:(HDCodableRoutineRequestMessage *)arg1 ;
-(HDCodableRoutineRequestMessage *)request;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
@end
