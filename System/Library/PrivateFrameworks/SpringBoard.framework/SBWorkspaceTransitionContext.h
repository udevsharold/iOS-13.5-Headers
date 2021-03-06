/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBWorkspaceTransitionRequest, NSMutableDictionary, BSAnimationSettings, NSMutableArray, NSSet, NSString;

@interface SBWorkspaceTransitionContext : NSObject <BSDescriptionProviding> {

	SBWorkspaceTransitionRequest* _request;
	NSMutableDictionary* _entities;
	NSMutableDictionary* _previousEntities;
	BOOL _animationDisabled;
	BSAnimationSettings* _animationSettings;
	NSMutableArray* _finalizeBlocks;
	BOOL _finalized;

}

@property (assign,nonatomic,__weak) SBWorkspaceTransitionRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) NSSet * entities; 
@property (nonatomic,copy,readonly) NSSet * previousEntities; 
@property (getter=isFinalized,nonatomic,readonly) BOOL finalized;                        //@synthesize finalized=_finalized - In the implementation block
@property (assign,nonatomic) BOOL animationDisabled;                                     //@synthesize animationDisabled=_animationDisabled - In the implementation block
@property (nonatomic,retain) BSAnimationSettings * animationSettings;                    //@synthesize animationSettings=_animationSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)context;
-(id)init;
-(NSString *)description;
-(void)finalize;
-(void)setRequest:(SBWorkspaceTransitionRequest *)arg1 ;
-(SBWorkspaceTransitionRequest *)request;
-(NSSet *)entities;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BSAnimationSettings *)animationSettings;
-(void)setAnimationSettings:(BSAnimationSettings *)arg1 ;
-(BOOL)isFinalized;
-(void)setAnimationDisabled:(BOOL)arg1 ;
-(id)entityForKey:(id)arg1 ;
-(id)entityForIdentifier:(id)arg1 ;
-(void)addFinalizeBlock:(/*^block*/id)arg1 ;
-(BOOL)animationDisabled;
-(id)compactDescriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setEntity:(id)arg1 forKey:(id)arg2 ;
-(NSSet *)previousEntities;
-(void)setPreviousEntity:(id)arg1 forKey:(id)arg2 ;
-(id)previousEntityForKey:(id)arg1 ;
-(id)previousEntityForIdentifier:(id)arg1 ;
@end

