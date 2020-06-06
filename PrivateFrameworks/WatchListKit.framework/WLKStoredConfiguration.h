/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSDate, NSString;

@interface WLKStoredConfiguration : NSObject {

	BOOL _activeUser;
	NSDictionary* _requiredRequestKeyValuePairs;
	NSDate* _timestamp;
	NSString* _utsc;
	NSString* _vppaState;

}

@property (nonatomic,retain) NSDictionary * requiredRequestKeyValuePairs;              //@synthesize requiredRequestKeyValuePairs=_requiredRequestKeyValuePairs - In the implementation block
@property (assign,nonatomic) BOOL activeUser;                                          //@synthesize activeUser=_activeUser - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * vppaState;                                     //@synthesize vppaState=_vppaState - In the implementation block
@property (nonatomic,retain) NSString * utsc;                                          //@synthesize utsc=_utsc - In the implementation block
@property (nonatomic,readonly) NSString * utsk; 
-(id)description;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(BOOL)activeUser;
-(NSString *)utsk;
-(NSString *)utsc;
-(NSDictionary *)requiredRequestKeyValuePairs;
-(void)setRequiredRequestKeyValuePairs:(NSDictionary *)arg1 ;
-(void)setActiveUser:(BOOL)arg1 ;
-(void)setUtsc:(NSString *)arg1 ;
-(NSString *)vppaState;
-(void)setVppaState:(NSString *)arg1 ;
@end

