/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCAggregateLogKey.h>

@class NSString;

@interface MCAggregateLogProfilePayloadKey : MCAggregateLogKey {

	Class _payloadClass;
	NSString* _nameSuffix;

}

@property (assign,nonatomic,__weak) Class payloadClass;              //@synthesize payloadClass=_payloadClass - In the implementation block
@property (nonatomic,retain) NSString * nameSuffix;                  //@synthesize nameSuffix=_nameSuffix - In the implementation block
+(id)payloadClass:(Class)arg1 name:(id)arg2 ;
-(id)name;
-(unsigned long long)value;
-(NSString *)nameSuffix;
-(void)setNameSuffix:(NSString *)arg1 ;
-(void)setPayloadClass:(Class)arg1 ;
-(Class)payloadClass;
@end

