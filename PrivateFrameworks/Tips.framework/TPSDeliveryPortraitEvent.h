/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tips/Tips-Structs.h>
#import <Tips/TPSDeliveryEvent.h>

@class NSString;

@interface TPSDeliveryPortraitEvent : TPSDeliveryEvent {

	double _confidenceThreshold;
	NSString* _topicID;

}

@property (assign,nonatomic) double confidenceThreshold;              //@synthesize confidenceThreshold=_confidenceThreshold - In the implementation block
@property (nonatomic,copy) NSString * topicID;                        //@synthesize topicID=_topicID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(double)confidenceThreshold;
-(void)setConfidenceThreshold:(double)arg1 ;
-(NSString *)topicID;
-(void)setTopicID:(NSString *)arg1 ;
-(unsigned)minObservationCount;
@end

