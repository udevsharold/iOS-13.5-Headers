/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CALayer, CAValueFunction;

@interface CAForceField : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _name;
	CALayer* _layer;
	CAValueFunction* _function;
	BOOL _enabled;

}

@property (copy) NSString * name; 
@property (getter=isEnabled) BOOL enabled; 
@property (retain) CALayer * layer; 
@property (retain) CAValueFunction * function; 
+(BOOL)supportsSecureCoding;
+(id)defaultValueForKey:(id)arg1 ;
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)forceField;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(CAValueFunction *)function;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(BOOL)isEnabled;
-(CALayer *)layer;
-(void)setLayer:(CALayer *)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(void)setFunction:(CAValueFunction *)arg1 ;
@end

