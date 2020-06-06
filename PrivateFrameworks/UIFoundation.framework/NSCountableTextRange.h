/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextRange.h>

@class NSCountableTextLocation, NSString;

@interface NSCountableTextRange : NSTextRange {

	NSRange _range;

}

@property (readonly) NSRange range;                                     //@synthesize range=_range - In the implementation block
@property (readonly) NSCountableTextLocation * location; 
@property (readonly) NSCountableTextLocation * terminator; 
@property (copy,readonly) NSString * type; 
+(id)documentRange;
+(BOOL)isBaseClassTestingMode;
+(void)setBaseClassTestingMode:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEmpty;
-(NSString *)type;
-(NSRange)range;
-(id)initWithRange:(NSRange)arg1 ;
-(id)textRangeByFormingUnionWithTextRange:(id)arg1 ;
-(BOOL)intersectsWithTextRange:(id)arg1 ;
-(BOOL)containsLocation:(id)arg1 ;
-(id)initWithLocation:(id)arg1 terminator:(id)arg2 ;
-(BOOL)isEqualToTextRange:(id)arg1 ;
-(id)textRangeByIntersectingWithTextRange:(id)arg1 ;
@end
