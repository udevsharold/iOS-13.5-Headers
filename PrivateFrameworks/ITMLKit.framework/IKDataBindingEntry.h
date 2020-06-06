/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, IKDataBindingValue;

@interface IKDataBindingEntry : NSObject {

	NSString* _key;
	IKDataBindingValue* _value;
	unsigned long long _attributes;

}

@property (nonatomic,copy,readonly) NSString * key;                        //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) IKDataBindingValue * value;                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned long long attributes;              //@synthesize attributes=_attributes - In the implementation block
-(NSString *)key;
-(unsigned long long)attributes;
-(IKDataBindingValue *)value;
-(id)initWithKey:(id)arg1 value:(id)arg2 attributes:(unsigned long long)arg3 ;
@end

