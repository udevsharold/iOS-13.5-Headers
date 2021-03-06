/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsAnalyticsUpload/NewsAnalyticsUpload-Structs.h>
#import <libobjc.A.dylib/NDAnalyticsEnvelopeStoreEntry.h>
@class NSString, NSDate;


@protocol NDAnalyticsEnvelopeStoreEntry <NSCopying>
@property (nonatomic,copy,readonly) NSString * envelopeIdentifier; 
@property (nonatomic,copy,readonly) NSDate * envelopeSubmissionDate; 
@property (nonatomic,readonly) int envelopeContentType; 
@required
-(int)envelopeContentType;
-(NSDate *)envelopeSubmissionDate;
-(NSString *)envelopeIdentifier;

@end


@class NSString, NSDate;

@interface NDAnalyticsEnvelopeStoreEntry : NSObject <NDAnalyticsEnvelopeStoreEntry> {

	unsigned long long _submissionDateMillisecondsSince1970;
	int _envelopeContentType;
	NSString* _envelopeIdentifier;

}

@property (nonatomic,copy) NSString * envelopeIdentifier;                //@synthesize envelopeIdentifier=_envelopeIdentifier - In the implementation block
@property (nonatomic,copy) NSDate * envelopeSubmissionDate; 
@property (assign,nonatomic) int envelopeContentType;                    //@synthesize envelopeContentType=_envelopeContentType - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringRepresentation;
-(id)initWithStringRepresentation:(id)arg1 ;
-(int)envelopeContentType;
-(NSDate *)envelopeSubmissionDate;
-(void)setEnvelopeIdentifier:(NSString *)arg1 ;
-(void)setEnvelopeContentType:(int)arg1 ;
-(void)setEnvelopeSubmissionDate:(NSDate *)arg1 ;
-(NSString *)envelopeIdentifier;
@end

