/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface HDSeriesFreezeResult : NSObject {

	long long _status;
	NSUUID* _frozenIdentifier;

}

@property (nonatomic,readonly) long long status;                            //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * frozenIdentifier;              //@synthesize frozenIdentifier=_frozenIdentifier - In the implementation block
-(long long)status;
-(NSUUID *)frozenIdentifier;
-(id)initWithStatus:(long long)arg1 frozenIdentifier:(id)arg2 ;
@end

