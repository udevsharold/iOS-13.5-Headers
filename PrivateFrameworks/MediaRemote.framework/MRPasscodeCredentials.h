/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MRPasscodeCredentials : NSObject {

	unsigned _type;
	unsigned long long _characterCount;
	NSString* _passcode;

}

@property (assign,nonatomic) unsigned type;                                  //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long characterCount;              //@synthesize characterCount=_characterCount - In the implementation block
@property (nonatomic,copy) NSString * passcode;                              //@synthesize passcode=_passcode - In the implementation block
+(id)standardCredentials;
+(id)_randomPasscode;
-(unsigned)type;
-(void)setType:(unsigned)arg1 ;
-(unsigned long long)characterCount;
-(NSString *)passcode;
-(void)setCharacterCount:(unsigned long long)arg1 ;
-(void)setPasscode:(NSString *)arg1 ;
@end

