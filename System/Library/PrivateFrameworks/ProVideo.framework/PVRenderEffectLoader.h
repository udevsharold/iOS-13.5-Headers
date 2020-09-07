/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PVRenderEffectLoader : NSObject {

	deque<PVLoadedEffectItem, std::__1::allocator<PVLoadedEffectItem> >* _loadedEffects;
	HGSynchronizable* _lock;
	BOOL _flushesOnEffectStackChanges;
	float _unusedEffectTimeout;

}

@property (assign,nonatomic) float unusedEffectTimeout;              //@synthesize unusedEffectTimeout=_unusedEffectTimeout - In the implementation block
-(id)init;
-(void)dealloc;
-(void)unloadEffects;
-(void)_removeUnusedEffects_noLock:(id)arg1 ;
-(void)_loadEffects_noLock:(id)arg1 ;
-(void)_removeTimedOutEffects_noLock;
-(float)unusedEffectTimeout;
-(void)loadEffectsForGraphs:(id)arg1 loadContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
-(void)ageOutEffects;
-(void)setUnusedEffectTimeout:(float)arg1 ;
@end
