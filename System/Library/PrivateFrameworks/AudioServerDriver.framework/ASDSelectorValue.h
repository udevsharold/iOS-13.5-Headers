/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ASDSelectorValue : NSObject {

	unsigned _value;
	NSString* _name;

}

@property (assign,nonatomic) unsigned value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * name;               //@synthesize name=_name - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned)value;
-(void)setValue:(unsigned)arg1 ;
@end
