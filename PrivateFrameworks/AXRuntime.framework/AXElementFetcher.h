/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, AXElementFetcherDelegate;
#import <AXRuntime/AXRuntime-Structs.h>
@class NSObject, AXElementGroupPruner, NSMapTable, NSArray, AXElementGroup, NSMutableDictionary, AXVisualElementGrouper, AXElement;

@interface AXElementFetcher : NSObject {

	NSObject*<OS_dispatch_queue> _elementFetchQueue;
	NSObject*<OS_dispatch_queue> _elementAccessQueue;
	NSObject*<OS_dispatch_queue> _filterAccessQueue;
	AXObserverRef _axRuntimeNotificationObserver;
	unsigned long long _scheduledFetchEvent;
	NSObject*<OS_dispatch_source> _eventCoalesceTimer;
	AXElementGroupPruner* _elementGroupPruner;
	BOOL _enabled;
	BOOL _fetchingElements;
	BOOL _eventManagementEnabled;
	BOOL _shouldIncludeNonScannerElements;
	BOOL _groupingEnabled;
	BOOL _didSendFakeScreenChangeOnLastFetch;
	long long _elementGroupingHeuristics;
	id<AXElementFetcherDelegate> _delegate;
	NSMapTable* _fetchObservers;
	unsigned long long _activeFetchEvents;
	NSArray* _currentApps;
	NSArray* _elementCache;
	AXElementGroup* _rootGroupCache;
	AXElementGroup* _keyboardGroupCache;
	NSMutableDictionary* _postFetchFilters;
	AXVisualElementGrouper* _visualElementGrouper;
	NSArray* _customCurrentApps;

}

@property (assign,nonatomic,__weak) id<AXElementFetcherDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMapTable * fetchObservers;                                              //@synthesize fetchObservers=_fetchObservers - In the implementation block
@property (assign,nonatomic) unsigned long long activeFetchEvents;                                     //@synthesize activeFetchEvents=_activeFetchEvents - In the implementation block
@property (assign,getter=isFetchingElements,nonatomic) BOOL fetchingElements;                          //@synthesize fetchingElements=_fetchingElements - In the implementation block
@property (nonatomic,retain) NSArray * currentApps;                                                    //@synthesize currentApps=_currentApps - In the implementation block
@property (assign,getter=isEventManagementEnabled,nonatomic) BOOL eventManagementEnabled;              //@synthesize eventManagementEnabled=_eventManagementEnabled - In the implementation block
@property (nonatomic,retain) NSArray * elementCache;                                                   //@synthesize elementCache=_elementCache - In the implementation block
@property (nonatomic,retain) AXElementGroup * rootGroupCache;                                          //@synthesize rootGroupCache=_rootGroupCache - In the implementation block
@property (nonatomic,retain) AXElementGroup * keyboardGroupCache;                                      //@synthesize keyboardGroupCache=_keyboardGroupCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * postFetchFilters;                                   //@synthesize postFetchFilters=_postFetchFilters - In the implementation block
@property (nonatomic,retain) AXVisualElementGrouper * visualElementGrouper;                            //@synthesize visualElementGrouper=_visualElementGrouper - In the implementation block
@property (nonatomic,readonly) AXElementGroupPruner * elementGroupPruner; 
@property (assign,nonatomic) BOOL didSendFakeScreenChangeOnLastFetch;                                  //@synthesize didSendFakeScreenChangeOnLastFetch=_didSendFakeScreenChangeOnLastFetch - In the implementation block
@property (nonatomic,retain) NSArray * customCurrentApps;                                              //@synthesize customCurrentApps=_customCurrentApps - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                            //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL willFetchElements; 
@property (nonatomic,readonly) NSArray * availableElements; 
@property (nonatomic,readonly) AXElement * nativeFocusElement; 
@property (assign,nonatomic) BOOL shouldIncludeNonScannerElements;                                     //@synthesize shouldIncludeNonScannerElements=_shouldIncludeNonScannerElements - In the implementation block
@property (assign,getter=isGroupingEnabled,nonatomic) BOOL groupingEnabled;                            //@synthesize groupingEnabled=_groupingEnabled - In the implementation block
@property (assign,nonatomic) long long elementGroupingHeuristics;                                      //@synthesize elementGroupingHeuristics=_elementGroupingHeuristics - In the implementation block
@property (nonatomic,readonly) AXElementGroup * rootGroup; 
@property (nonatomic,readonly) AXElementGroup * keyboardGroup; 
@property (nonatomic,readonly) AXElementGroup * firstKeyboardRow; 
@property (nonatomic,readonly) AXElementGroup * lastKeyboardRow; 
+(id)systemWideElement;
+(id)springBoardElement;
-(void)dealloc;
-(id)description;
-(void)clearCache;
-(void)setEnabled:(BOOL)arg1 ;
-(id<AXElementFetcherDelegate>)delegate;
-(void)setDelegate:(id<AXElementFetcherDelegate>)arg1 ;
-(BOOL)isEnabled;
-(void)refresh;
-(AXElementGroup *)rootGroup;
-(AXElement *)nativeFocusElement;
-(void)addFetchEvents:(unsigned long long)arg1 ;
-(void)enableEventManagement;
-(void)_tearDownEventCoalesceTimer;
-(void)disableEventManagement;
-(void)unregisterAllFetchObservers;
-(unsigned long long)activeFetchEvents;
-(id)_debugStringForFetchEvents:(unsigned long long)arg1 ;
-(BOOL)isFetchingElements;
-(NSArray *)currentApps;
-(BOOL)isGroupingEnabled;
-(BOOL)_updateCurrentApps;
-(void)setCurrentApps:(NSArray *)arg1 ;
-(NSArray *)elementCache;
-(AXElementGroup *)rootGroupCache;
-(AXElementGroup *)keyboardGroupCache;
-(AXElementGroup *)keyboardGroup;
-(NSMapTable *)fetchObservers;
-(void)setActiveFetchEvents:(unsigned long long)arg1 ;
-(void)_fetchEventOccurred:(unsigned long long)arg1 ;
-(BOOL)isEventManagementEnabled;
-(BOOL)_fetchEventCanBeManaged:(unsigned long long)arg1 ;
-(long long)_priorityForFetchEvent:(unsigned long long)arg1 ;
-(void)_scheduleFetchEvent:(unsigned long long)arg1 ;
-(void)_notifyObserversNativeFocusElementDidChange:(id)arg1 ;
-(void)_notifyObserversUpdateElementVisuals:(id)arg1 ;
-(void)_notifyObserversApplicationWasActivated:(id)arg1 ;
-(void)_notifyObserversScreenWillChange:(CFDataRef)arg1 ;
-(void)_notifyObserversMediaDidBegin:(CFDataRef)arg1 ;
-(void)_notifyObserversDidScheduleFetchEvent:(unsigned long long)arg1 ;
-(double)_delayForFetchEvent:(unsigned long long)arg1 ;
-(void)_notifyObserversWillFetchElementsForEvent:(unsigned long long)arg1 ;
-(BOOL)_fetchGroups:(BOOL)arg1 ;
-(BOOL)_fetchElements:(BOOL)arg1 ;
-(void)_notifyObserversDidFetchElementsForEvent:(unsigned long long)arg1 foundNewElements:(BOOL)arg2 ;
-(id)_axNotificationsForManagedEvents;
-(void)setEventManagementEnabled:(BOOL)arg1 ;
-(BOOL)didSendFakeScreenChangeOnLastFetch;
-(void)setDidSendFakeScreenChangeOnLastFetch:(BOOL)arg1 ;
-(id)_fetchUnprocessedElements;
-(void)_sendFakeScreenChangeIfNecessaryForGroups:(id)arg1 orElements:(id)arg2 appsDidChange:(BOOL)arg3 ;
-(NSMutableDictionary *)postFetchFilters;
-(id)_filterElements:(id)arg1 withFilter:(/*^block*/id)arg2 ;
-(void)setElementCache:(NSArray *)arg1 ;
-(void)setRootGroupCache:(AXElementGroup *)arg1 ;
-(void)setKeyboardGroupCache:(AXElementGroup *)arg1 ;
-(BOOL)shouldIncludeNonScannerElements;
-(BOOL)_shouldConsiderCacheAsInvalid;
-(id)_findElementsMatchingBlock:(/*^block*/id)arg1 internalRequest:(BOOL)arg2 ;
-(id)findElementMatchingElement:(id)arg1 ;
-(id)closestElementToPoint:(CGPoint)arg1 ;
-(id)findGroupableMatchingGroupable:(id)arg1 ;
-(id)_siblingOfGroupable:(id)arg1 forDirection:(BOOL)arg2 didWrap:(BOOL*)arg3 ;
-(id)_findGroupableMatchingGroupable:(id)arg1 inElementGroup:(id)arg2 ;
-(id)_findGroupableMatchingBlock:(/*^block*/id)arg1 inElementGroup:(id)arg2 ;
-(id)_groupWithItems:(id)arg1 groupTraits:(unsigned long long)arg2 scanningBehaviorTraits:(unsigned long long)arg3 label:(id)arg4 identifier:(id)arg5 currentPid:(int)arg6 ;
-(id)_groupWithDictionary:(id)arg1 currentPid:(int)arg2 ;
-(id)_filterGroup:(id)arg1 withFilter:(/*^block*/id)arg2 ;
-(AXVisualElementGrouper *)visualElementGrouper;
-(long long)elementGroupingHeuristics;
-(void)setVisualElementGrouper:(AXVisualElementGrouper *)arg1 ;
-(AXElementGroupPruner *)elementGroupPruner;
-(id)_fetchUnprocessedAppGroups;
-(id)_processAppGroup:(id)arg1 keyboardGroup:(id*)arg2 ;
-(id)initWithDelegate:(id)arg1 fetchEvents:(unsigned long long)arg2 enableEventManagement:(BOOL)arg3 enableGrouping:(BOOL)arg4 shouldIncludeNonScannerElements:(BOOL)arg5 beginEnabled:(BOOL)arg6 ;
-(void)_setCurrentApplications:(id)arg1 ;
-(BOOL)willFetchElements;
-(NSArray *)availableElements;
-(AXElementGroup *)firstKeyboardRow;
-(AXElementGroup *)lastKeyboardRow;
-(void)registerFetchObserver:(id)arg1 targetQueue:(id)arg2 ;
-(void)unregisterFetchObserver:(id)arg1 ;
-(void)removeFetchEvents:(unsigned long long)arg1 ;
-(void)fetchEventOccurred:(unsigned long long)arg1 ;
-(void)_handleNativeFocusItemDidChange:(CFDataRef)arg1 ;
-(void)_handleUpdateElementVisuals:(CFDataRef)arg1 ;
-(void)_handleApplicationWasActivated:(id)arg1 ;
-(void)_handleScreenWillChange:(CFDataRef)arg1 ;
-(void)_handleMediaDidBegin:(CFDataRef)arg1 ;
-(void)addPostFetchFilter:(/*^block*/id)arg1 withIdentifier:(id)arg2 ;
-(void)removePostFetchFilterWithIdentifier:(id)arg1 ;
-(void)removeAllPostFetchFilters;
-(id)findElementMatchingBlock:(/*^block*/id)arg1 ;
-(id)findElementsMatchingBlock:(/*^block*/id)arg1 ;
-(id)closestElementToElement:(id)arg1 ;
-(id)firstElement;
-(id)lastElement;
-(id)nextSiblingOfElement:(id)arg1 didWrap:(BOOL*)arg2 ;
-(id)previousSiblingOfElement:(id)arg1 didWrap:(BOOL*)arg2 ;
-(id)nextSiblingOfGroupable:(id)arg1 didWrap:(BOOL*)arg2 ;
-(id)previousSiblingOfGroupable:(id)arg1 didWrap:(BOOL*)arg2 ;
-(id)findGroupableMatchingBlock:(/*^block*/id)arg1 ;
-(void)_debugLogElementCache;
-(void)setFetchingElements:(BOOL)arg1 ;
-(void)setShouldIncludeNonScannerElements:(BOOL)arg1 ;
-(void)setGroupingEnabled:(BOOL)arg1 ;
-(void)setElementGroupingHeuristics:(long long)arg1 ;
-(void)setFetchObservers:(NSMapTable *)arg1 ;
-(void)setPostFetchFilters:(NSMutableDictionary *)arg1 ;
-(NSArray *)customCurrentApps;
-(void)setCustomCurrentApps:(NSArray *)arg1 ;
@end

