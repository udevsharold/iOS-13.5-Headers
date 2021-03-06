/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tips/Tips-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface TPSCollectionStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _skipFeature;
	NSString* _identifier;
	NSDate* _activatedDate;
	NSDate* _firstViewedDate;
	NSDate* _featuredDate;

}

@property (assign,nonatomic) BOOL skipFeature;                    //@synthesize skipFeature=_skipFeature - In the implementation block
@property (nonatomic,copy) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDate * activatedDate;                //@synthesize activatedDate=_activatedDate - In the implementation block
@property (nonatomic,copy) NSDate * firstViewedDate;              //@synthesize firstViewedDate=_firstViewedDate - In the implementation block
@property (nonatomic,copy) NSDate * featuredDate;                 //@synthesize featuredDate=_featuredDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setActivatedDate:(NSDate *)arg1 ;
-(void)setFirstViewedDate:(NSDate *)arg1 ;
-(void)setFeaturedDate:(NSDate *)arg1 ;
-(void)setSkipFeature:(BOOL)arg1 ;
-(BOOL)skipFeature;
-(NSDate *)activatedDate;
-(NSDate *)firstViewedDate;
-(NSDate *)featuredDate;
@end

