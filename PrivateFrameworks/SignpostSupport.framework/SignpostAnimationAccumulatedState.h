/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SignpostEvent, NSMutableArray;

@interface SignpostAnimationAccumulatedState : NSObject {

	SignpostEvent* _animationBeginEvent;
	NSMutableArray* _compositorIntervals;
	NSMutableArray* _longCommitIntervals;
	NSMutableArray* _allCommitIntervals;
	NSMutableArray* _longSystemwideCommitIntervals;
	NSMutableArray* _allSystemwideCommitIntervals;
	NSMutableArray* _longTransactionLifetimes;
	NSMutableArray* _allTransactionLifetimes;
	NSMutableArray* _longFrameLatencies;
	NSMutableArray* _allFrameLatencies;
	NSMutableArray* _longHIDLatencies;
	NSMutableArray* _allHIDLatencies;
	NSMutableArray* _longRenders;
	NSMutableArray* _allRenders;
	NSMutableArray* _longFrameLifetimes;
	NSMutableArray* _longContributedFrameLifetimes;
	NSMutableArray* _allFrameLifetimes;
	NSMutableArray* _allContributedFrameLifetimes;

}

@property (nonatomic,readonly) SignpostEvent * animationBeginEvent;                         //@synthesize animationBeginEvent=_animationBeginEvent - In the implementation block
@property (nonatomic,readonly) NSMutableArray * compositorIntervals;                        //@synthesize compositorIntervals=_compositorIntervals - In the implementation block
@property (nonatomic,readonly) NSMutableArray * longCommitIntervals;                        //@synthesize longCommitIntervals=_longCommitIntervals - In the implementation block
@property (nonatomic,readonly) NSMutableArray * allCommitIntervals;                         //@synthesize allCommitIntervals=_allCommitIntervals - In the implementation block
@property (nonatomic,readonly) NSMutableArray * longSystemwideCommitIntervals;              //@synthesize longSystemwideCommitIntervals=_longSystemwideCommitIntervals - In the implementation block
@property (nonatomic,readonly) NSMutableArray * allSystemwideCommitIntervals;               //@synthesize allSystemwideCommitIntervals=_allSystemwideCommitIntervals - In the implementation block
@property (nonatomic,readonly) NSMutableArray * longTransactionLifetimes;                   //@synthesize longTransactionLifetimes=_longTransactionLifetimes - In the implementation block
@property (nonatomic,readonly) NSMutableArray * allTransactionLifetimes;                    //@synthesize allTransactionLifetimes=_allTransactionLifetimes - In the implementation block
@property (nonatomic,readonly) NSMutableArray * longFrameLatencies;                         //@synthesize longFrameLatencies=_longFrameLatencies - In the implementation block
@property (nonatomic,readonly) NSMutableArray * allFrameLatencies;                          //@synthesize allFrameLatencies=_allFrameLatencies - In the implementation block
@property (nonatomic,readonly) NSMutableArray * longHIDLatencies;                           //@synthesize longHIDLatencies=_longHIDLatencies - In the implementation block
@property (nonatomic,readonly) NSMutableArray * allHIDLatencies;                            //@synthesize allHIDLatencies=_allHIDLatencies - In the implementation block
@property (nonatomic,readonly) NSMutableArray * longRenders;                                //@synthesize longRenders=_longRenders - In the implementation block
@property (nonatomic,readonly) NSMutableArray * allRenders;                                 //@synthesize allRenders=_allRenders - In the implementation block
@property (nonatomic,readonly) NSMutableArray * longFrameLifetimes;                         //@synthesize longFrameLifetimes=_longFrameLifetimes - In the implementation block
@property (nonatomic,readonly) NSMutableArray * longContributedFrameLifetimes;              //@synthesize longContributedFrameLifetimes=_longContributedFrameLifetimes - In the implementation block
@property (nonatomic,readonly) NSMutableArray * allFrameLifetimes;                          //@synthesize allFrameLifetimes=_allFrameLifetimes - In the implementation block
@property (nonatomic,readonly) NSMutableArray * allContributedFrameLifetimes;               //@synthesize allContributedFrameLifetimes=_allContributedFrameLifetimes - In the implementation block
-(SignpostEvent *)animationBeginEvent;
-(NSMutableArray *)longCommitIntervals;
-(NSMutableArray *)allCommitIntervals;
-(NSMutableArray *)longSystemwideCommitIntervals;
-(NSMutableArray *)allSystemwideCommitIntervals;
-(NSMutableArray *)longTransactionLifetimes;
-(NSMutableArray *)allTransactionLifetimes;
-(NSMutableArray *)longHIDLatencies;
-(NSMutableArray *)allHIDLatencies;
-(NSMutableArray *)longRenders;
-(NSMutableArray *)allRenders;
-(NSMutableArray *)longFrameLatencies;
-(NSMutableArray *)allFrameLatencies;
-(NSMutableArray *)longFrameLifetimes;
-(NSMutableArray *)allFrameLifetimes;
-(NSMutableArray *)compositorIntervals;
-(id)initWithAnimationBeginEvent:(id)arg1 shouldTrackComposites:(BOOL)arg2 shouldTrackInMemoryEvents:(BOOL)arg3 ;
-(void)_handleCommitInterval:(id)arg1 isLong:(BOOL)arg2 isConcise:(BOOL)arg3 ;
-(void)_handleTransactionLifetimeInterval:(id)arg1 isLong:(BOOL)arg2 isConcise:(BOOL)arg3 ;
-(void)_handleHIDLatency:(id)arg1 isLong:(BOOL)arg2 isConcise:(BOOL)arg3 ;
-(void)_handleRenderServerRender:(id)arg1 isLong:(BOOL)arg2 isConcise:(BOOL)arg3 ;
-(void)_handleFrameLatency:(id)arg1 isLong:(BOOL)arg2 isConcise:(BOOL)arg3 ;
-(void)_handleFrameLifetime:(id)arg1 isLong:(BOOL)arg2 isConcise:(BOOL)arg3 ;
-(void)addCompositorInterval:(id)arg1 ;
-(NSMutableArray *)longContributedFrameLifetimes;
-(NSMutableArray *)allContributedFrameLifetimes;
@end

