/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol HFMediaProfileContainer;
@class NSMutableSet, NSMapTable, NAFuture;

@interface HFDataAnalyticsLogItemProvider : HFItemProvider <NSCopying> {

	id<HFMediaProfileContainer> _mediaProfileContainer;
	NSMutableSet* _logItems;
	NSMapTable* _logEntryUniqueIdentifierToLogItemMap;
	NAFuture* _logFetchFuture;

}

@property (nonatomic,readonly) NSMutableSet * logItems;                                        //@synthesize logItems=_logItems - In the implementation block
@property (nonatomic,readonly) NSMapTable * logEntryUniqueIdentifierToLogItemMap;              //@synthesize logEntryUniqueIdentifierToLogItemMap=_logEntryUniqueIdentifierToLogItemMap - In the implementation block
@property (nonatomic,retain) NAFuture * logFetchFuture;                                        //@synthesize logFetchFuture=_logFetchFuture - In the implementation block
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;              //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
+(BOOL)prefersNonBlockingReloads;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)items;
-(id)reloadItems;
-(id)invalidationReasons;
-(id)initWithMediaProfileContainer:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(NAFuture *)logFetchFuture;
-(NSMapTable *)logEntryUniqueIdentifierToLogItemMap;
-(NSMutableSet *)logItems;
-(void)setLogFetchFuture:(NAFuture *)arg1 ;
@end

