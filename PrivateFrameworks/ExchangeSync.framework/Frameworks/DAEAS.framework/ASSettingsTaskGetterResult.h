/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ASSettingsTaskGetterResult : NSObject {

	int _key;
	long long _status;
	id _result;

}

@property (assign,nonatomic) int key;                       //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) long long status;              //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) id result;                     //@synthesize result=_result - In the implementation block
-(int)key;
-(id)result;
-(long long)status;
-(void)setKey:(int)arg1 ;
-(void)setResult:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(id)initWithKey:(int)arg1 status:(long long)arg2 result:(id)arg3 ;
@end

