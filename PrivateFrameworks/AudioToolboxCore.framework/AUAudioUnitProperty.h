/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AUAudioUnitProperty : NSObject <NSSecureCoding> {

	NSString* _key;
	unsigned _scope;
	unsigned _element;

}
+(BOOL)supportsSecureCoding;
+(id)propertyWithKey:(id)arg1 ;
+(id)propertyWithKey:(id)arg1 scope:(unsigned)arg2 element:(unsigned)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithKey:(id)arg1 ;
-(id)initWithKey:(id)arg1 scope:(unsigned)arg2 element:(unsigned)arg3 ;
@end

