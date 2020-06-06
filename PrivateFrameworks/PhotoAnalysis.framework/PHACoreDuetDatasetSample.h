/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface PHACoreDuetDatasetSample : NSObject {

	NSString* _identifier;
	NSDate* _date;
	NSString* _subset;

}

@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSDate * date;                    //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSString * subset;                  //@synthesize subset=_subset - In the implementation block
-(NSDate *)date;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)subset;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithIdentifier:(id)arg1 andDate:(id)arg2 forSubset:(id)arg3 ;
-(void)setSubset:(NSString *)arg1 ;
@end

