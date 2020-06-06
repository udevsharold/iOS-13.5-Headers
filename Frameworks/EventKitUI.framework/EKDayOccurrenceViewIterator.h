/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EKBidirectionallyIterable.h>

@class NSArray, NSString;

@interface EKDayOccurrenceViewIterator : NSObject <EKBidirectionallyIterable> {

	long long _currentIndex;
	long long _firstTimedOccurrenceIndex;
	NSArray* _occurrenceViews;

}

@property (assign) long long currentIndex;                           //@synthesize currentIndex=_currentIndex - In the implementation block
@property (assign) long long firstTimedOccurrenceIndex;              //@synthesize firstTimedOccurrenceIndex=_firstTimedOccurrenceIndex - In the implementation block
@property (nonatomic,retain) NSArray * occurrenceViews;              //@synthesize occurrenceViews=_occurrenceViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)next;
-(id)previous;
-(long long)currentIndex;
-(void)setCurrentIndex:(long long)arg1 ;
-(NSArray *)occurrenceViews;
-(void)setOccurrenceViews:(NSArray *)arg1 ;
-(void)setFirstTimedOccurrenceIndex:(long long)arg1 ;
-(void)_prepareOccurrenceViewsForIteration:(id)arg1 selectedEvent:(id)arg2 result:(/*^block*/id)arg3 ;
-(long long)_nextIndexFromCurrentIndex:(long long)arg1 forward:(BOOL)arg2 ;
-(id)_occurrenceViewAtIndex:(long long)arg1 ;
-(long long)firstTimedOccurrenceIndex;
-(long long)_selectedOccurrenceViewIndexInOccurrenceViews:(id)arg1 selectedEvent:(id)arg2 ;
-(long long)_selectedCopyOccurrenceViewIndexInOccurrenceViews:(id)arg1 selectedIndex:(long long)arg2 ;
-(long long)_firstTimedOccurrenceViewIndexInOccurrenceViews:(id)arg1 ;
-(void)_separateOccurrenceViews:(id)arg1 result:(/*^block*/id)arg2 ;
-(id)initWithOccurrenceViews:(id)arg1 selectedEvent:(id)arg2 ;
@end

