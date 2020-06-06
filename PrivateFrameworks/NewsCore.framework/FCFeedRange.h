/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCFeedCursor, FCDateRange;

@interface FCFeedRange : NSObject <NSSecureCoding, NSCopying> {

	FCFeedCursor* _top;
	FCFeedCursor* _bottom;

}

@property (nonatomic,copy) FCFeedCursor * top;                            //@synthesize top=_top - In the implementation block
@property (nonatomic,copy) FCFeedCursor * bottom;                         //@synthesize bottom=_bottom - In the implementation block
@property (nonatomic,readonly) BOOL reachesTopOfFeed; 
@property (nonatomic,readonly) BOOL reachesBottomOfFeed; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,copy,readonly) FCDateRange * dateRange; 
+(BOOL)supportsSecureCoding;
+(id)feedRangeFromDateRange:(id)arg1 ;
+(id)feedRangeWithTop:(id)arg1 bottom:(id)arg2 ;
+(id)feedRangeFromDate:(id)arg1 toDate:(id)arg2 ;
+(id)feedRangeByMergingRange:(id)arg1 withRange:(id)arg2 ;
+(id)feedRangeWithMaxOrder:(unsigned long long)arg1 minOrder:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(FCFeedCursor *)top;
-(FCFeedCursor *)bottom;
-(void)setBottom:(FCFeedCursor *)arg1 ;
-(void)setTop:(FCFeedCursor *)arg1 ;
-(BOOL)intersectsRange:(id)arg1 ;
-(FCDateRange *)dateRange;
-(id)feedRangeByIntersectingWithRange:(id)arg1 ;
-(BOOL)reachesTopOfFeed;
-(BOOL)reachesBottomOfFeed;
-(id)feedRangeByUnioningWithRange:(id)arg1 ;
-(BOOL)containsFeedRange:(id)arg1 ;
-(BOOL)containsOrder:(unsigned long long)arg1 ;
-(BOOL)intersectsOrAdjoinsRange:(id)arg1 ;
-(BOOL)containsCursor:(id)arg1 ;
@end

