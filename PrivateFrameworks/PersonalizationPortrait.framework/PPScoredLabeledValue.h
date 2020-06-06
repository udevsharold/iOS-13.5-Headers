/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PPLabeledValue;

@interface PPScoredLabeledValue : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _flags;
	PPLabeledValue* _labeledValue;
	double _score;

}

@property (nonatomic,readonly) PPLabeledValue * labeledValue;              //@synthesize labeledValue=_labeledValue - In the implementation block
@property (nonatomic,readonly) double score;                               //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) unsigned char flags;                        //@synthesize flags=_flags - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)scoredLabeledValueWithLabeledValue:(id)arg1 score:(double)arg2 flags:(unsigned char)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)flags;
-(double)score;
-(PPLabeledValue *)labeledValue;
-(id)initWithLabeledValue:(id)arg1 score:(double)arg2 flags:(unsigned char)arg3 ;
-(long long)reverseCompare:(id)arg1 ;
-(BOOL)isEqualToScoredLabeledValue:(id)arg1 ;
@end

