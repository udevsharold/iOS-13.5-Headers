/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class NSString, NSDictionary;

@interface IKCSSToken : NSObject {

	unsigned short _charValue;
	long long _type;
	double _doubleValue;
	NSString* _stringValue;
	NSDictionary* _properties;
	NSRange _range;

}

@property (assign,nonatomic) long long type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned short charValue;               //@synthesize charValue=_charValue - In the implementation block
@property (assign,nonatomic) double doubleValue;                     //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,retain) NSString * stringValue;                 //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,nonatomic) NSRange range;                          //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
-(double)doubleValue;
-(unsigned short)charValue;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSString *)stringValue;
-(NSRange)range;
-(id)initWithType:(long long)arg1 ;
-(NSDictionary *)properties;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(void)setProperties:(NSDictionary *)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(void)setCharValue:(unsigned short)arg1 ;
@end

