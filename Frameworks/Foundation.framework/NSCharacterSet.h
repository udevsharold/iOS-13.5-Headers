/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (copy,readonly) NSData * bitmapRepresentation; 
@property (copy,readonly) NSCharacterSet * invertedSet; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)whitespaceAndNewlineCharacterSet;
+(id)whitespaceCharacterSet;
+(id)letterCharacterSet;
+(id)decimalDigitCharacterSet;
+(id)alphanumericCharacterSet;
+(id)controlCharacterSet;
+(id)lowercaseLetterCharacterSet;
+(id)uppercaseLetterCharacterSet;
+(id)nonBaseCharacterSet;
+(id)decomposableCharacterSet;
+(id)punctuationCharacterSet;
+(id)capitalizedLetterCharacterSet;
+(id)illegalCharacterSet;
+(id)symbolCharacterSet;
+(id)newlineCharacterSet;
+(id)characterSetWithContentsOfFile:(id)arg1 ;
+(id)characterSetWithRange:(NSRange)arg1 ;
+(id)characterSetWithCharactersInString:(id)arg1 ;
+(id)characterSetWithBitmapRepresentation:(id)arg1 ;
+(id)URLUserAllowedCharacterSet;
+(id)URLPasswordAllowedCharacterSet;
+(id)URLHostAllowedCharacterSet;
+(id)URLPathAllowedCharacterSet;
+(id)URLQueryAllowedCharacterSet;
+(id)URLFragmentAllowedCharacterSet;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(BOOL)isEmpty;
-(NSCharacterSet *)invertedSet;
-(BOOL)longCharacterIsMember:(unsigned)arg1 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg1 ;
-(id)_retainedBitmapRepresentation;
-(CFCharacterSetRef)_expandedCFCharacterSet;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(NSData *)bitmapRepresentation;
-(BOOL)characterIsMember:(unsigned short)arg1 ;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(BOOL)isMutable;
-(void)makeImmutable;
@end

