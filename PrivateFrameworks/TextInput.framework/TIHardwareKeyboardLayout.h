/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardLayout.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TIHardwareKeyboardLayout : TIKeyboardLayout <NSSecureCoding> {

	long long _keyboardType;

}

@property (nonatomic,readonly) long long keyboardType;              //@synthesize keyboardType=_keyboardType - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)flushLayoutCaches;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)keyboardType;
-(id)initWithKeyboardType:(long long)arg1 ;
-(void)addString:(id)arg1 forKeyCode:(unsigned long long)arg2 ;
-(CGRect)_frameForKeyCode:(unsigned long long)arg1 ;
-(id)_ANSIFrames;
-(id)_ISOFrames;
-(id)_JISFrames;
@end

