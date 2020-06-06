/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySharedSupport/AccessibilitySharedSupport-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSArray, AXAttributedString, NSString;

@interface AXSSKeyChord : NSObject <NSSecureCoding, NSCopying> {

	NSNumber* _cachedIsFunctionKey;
	NSNumber* _cachedContainsModifier;
	NSArray* _keys;

}

@property (nonatomic,readonly) AXAttributedString * accessibilitySpeakableDisplayValue; 
@property (nonatomic,readonly) AXAttributedString * fkaSpeakableDisplayValue; 
@property (nonatomic,retain) NSArray * keys;                                                         //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) NSString * displayValue; 
@property (nonatomic,readonly) BOOL isFunctionKeyChord; 
@property (nonatomic,readonly) BOOL containsModifier; 
@property (nonatomic,readonly) BOOL isTextInputChord; 
@property (nonatomic,readonly) BOOL isTextInputTabChord; 
@property (nonatomic,readonly) BOOL isArrowKeyChord; 
@property (nonatomic,readonly) BOOL isNull; 
+(id)keyChordWithEvent:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)keyChordWithKeys:(id)arg1 ;
+(id)keyChordWithString:(id)arg1 ;
+(id)nullKeyChord;
+(id)keyFromKeyCode:(unsigned long long)arg1 unicodeCharacter:(id)arg2 ;
-(id)accessibilitySpeakableDisplayValueWithStyle:(long long)arg1 ;
-(id)_accessibilitySpeakableDisplayValueWithStyle:(long long)arg1 isUSKeyboard:(BOOL)arg2 ;
-(AXAttributedString *)accessibilitySpeakableDisplayValue;
-(AXAttributedString *)fkaSpeakableDisplayValue;
-(id)keyChordByUpdatingModifiersFromEvent:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)keys;
-(void)setKeys:(NSArray *)arg1 ;
-(NSString *)displayValue;
-(BOOL)isNull;
-(id)displayValueWithStyle:(long long)arg1 isUSKeyboard:(BOOL)arg2 ;
-(BOOL)isFunctionKeyChord;
-(id)_initWithKeys:(id)arg1 ;
-(id)_normalizeKeys:(id)arg1 ;
-(BOOL)isEqualToKeyChord:(id)arg1 ;
-(BOOL)isTextInputTabChord;
-(BOOL)isArrowKeyChord;
-(id)displayValueWithStyle:(long long)arg1 ;
-(id)_displayValueWithSortedModifiers:(id)arg1 isUSKeyboard:(BOOL)arg2 ;
-(BOOL)containsModifier;
-(BOOL)isTextInputChord;
@end

