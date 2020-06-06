/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeedGroupEmitting.h>

@protocol FCContentContext;
@class NSString, NSSet;

@interface FCGreatStoriesYouMissedGroupEmitter : NSObject <FCFeedGroupEmitting> {

	id<FCContentContext> _context;
	unsigned long long _limit;

}

@property (nonatomic,retain) id<FCContentContext> context;                             //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                                 //@synthesize limit=_limit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSSet * emittableGroupTypes; 
@property (nonatomic,readonly) BOOL shouldEmitContentInFavoritesOnlyMode; 
@property (nonatomic,readonly) BOOL emitsSingletonGroups; 
@property (nonatomic,readonly) BOOL emitsSingleRefreshSessionGroups; 
@property (nonatomic,readonly) long long requiredForYouContentTypes; 
@property (nonatomic,readonly) BOOL requiresHeavyweightContent; 
@property (nonatomic,readonly) BOOL isRequiredByFollowingEmitters; 
+(id)groupEmitterIdentifier;
+(BOOL)greatStoriesMayEmit:(id)arg1 ;
+(void)setShouldEmitOverride:(BOOL)arg1 ;
-(id<FCContentContext>)context;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(BOOL)wantsToInsertGroupInContext:(id)arg1 ;
-(BOOL)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(NSSet *)emittableGroupTypes;
-(BOOL)shouldEmitContentInFavoritesOnlyMode;
-(BOOL)emitsSingletonGroups;
-(long long)requiredForYouContentTypes;
@end

