/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CRKRankPath : NSObject {

	NSArray* _ranks;

}

@property (nonatomic,copy) NSArray * ranks;                   //@synthesize ranks=_ranks - In the implementation block
@property (nonatomic,readonly) long long length; 
-(id)init;
-(long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
-(NSArray *)ranks;
-(void)setRanks:(NSArray *)arg1 ;
-(id)initWithRanks:(id)arg1 ;
-(BOOL)isEqualToRankPath:(id)arg1 ;
-(id)initWithRank:(long long)arg1 ;
-(id)rankPathByAppendingRank:(long long)arg1 ;
@end

