/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet;

@interface PPQuickTypeExplanationSet : NSObject <NSSecureCoding> {

	NSMutableSet* _set;

}
+(BOOL)supportsSecureCoding;
+(id)stringFromExplanation:(unsigned char)arg1 ;
+(id)uniqueKeycodeFromExplanation:(unsigned char)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)push:(unsigned char)arg1 ;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqualToQuickTypeExplanationSet:(id)arg1 ;
@end
