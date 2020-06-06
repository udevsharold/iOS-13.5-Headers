/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@protocol NSCopyingNSSecureCodingNSObject;
@class NSString, NSFormatter;

@interface _NSStringProxyForContext : NSString {

	NSString* _string;
	NSFormatter* _formatter;
	id<NSCopying><NSSecureCoding><NSObject> _item;

}

@property (copy) NSString * string;                    //@synthesize string=_string - In the implementation block
@property (copy) NSFormatter * formatter;              //@synthesize formatter=_formatter - In the implementation block
@property (copy) id item;                              //@synthesize item=_item - In the implementation block
-(NSString *)string;
-(void)dealloc;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(void)setString:(NSString *)arg1 ;
-(id)_dynamicContextEvaluation:(id)arg1 patternString:(id)arg2 ;
-(NSFormatter *)formatter;
-(id)item;
-(void)setFormatter:(NSFormatter *)arg1 ;
-(void)setItem:(id)arg1 ;
-(void)_retainFormatter:(id)arg1 ;
@end

