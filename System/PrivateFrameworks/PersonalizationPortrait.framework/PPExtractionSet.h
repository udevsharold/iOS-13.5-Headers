/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PPExtractionSet : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _namedEntityRecords;
	NSArray* _topicRecords;

}

@property (nonatomic,readonly) NSArray * namedEntityRecords;              //@synthesize namedEntityRecords=_namedEntityRecords - In the implementation block
@property (nonatomic,readonly) NSArray * topicRecords;                    //@synthesize topicRecords=_topicRecords - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)merge:(id)arg1 ;
-(id)initWithNamedEntityRecords:(id)arg1 topicRecords:(id)arg2 ;
-(NSArray *)namedEntityRecords;
-(NSArray *)topicRecords;
@end

