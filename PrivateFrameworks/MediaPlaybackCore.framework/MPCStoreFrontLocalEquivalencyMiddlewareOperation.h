/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>
#import <libobjc.A.dylib/MPCStoreFrontLocalEquivalencyMiddlewarePlayingItemProviding.h>
#import <libobjc.A.dylib/MPMiddlewareAutomaticDependencyOperation.h>

@class MPModelGenericObject, NSIndexPath, NSMapTable, NSArray, MPCStoreFrontLocalEquivalencyMiddleware, MPCPlayerRequest, NSString, NSError;

@interface MPCStoreFrontLocalEquivalencyMiddlewareOperation : MPAsyncOperation <MPCStoreFrontLocalEquivalencyMiddlewarePlayingItemProviding, MPMiddlewareAutomaticDependencyOperation> {

	NSMapTable* _inputOperations;
	/*^block*/id _invalidationHandler;
	NSArray* _invalidationObservers;
	MPCStoreFrontLocalEquivalencyMiddleware* _middleware;
	MPCPlayerRequest* _playerRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MPModelGenericObject * overridePlayingItem; 
@property (nonatomic,readonly) NSIndexPath * playingItemIndexPath; 
@property (nonatomic,retain) MPCStoreFrontLocalEquivalencyMiddleware * middleware;              //@synthesize middleware=_middleware - In the implementation block
@property (nonatomic,retain) MPCPlayerRequest * playerRequest;                                  //@synthesize playerRequest=_playerRequest - In the implementation block
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) id invalidationHandler;                                              //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) NSArray * invalidationObservers;                                 //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
@property (nonatomic,readonly) NSArray * inputProtocols; 
@property (nonatomic,readonly) NSArray * outputProtocols; 
@property (nonatomic,retain) NSMapTable * inputOperations;                                      //@synthesize inputOperations=_inputOperations - In the implementation block
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)execute;
-(NSArray *)invalidationObservers;
-(MPCStoreFrontLocalEquivalencyMiddleware *)middleware;
-(void)setMiddleware:(MPCStoreFrontLocalEquivalencyMiddleware *)arg1 ;
-(NSArray *)inputProtocols;
-(NSArray *)outputProtocols;
-(NSMapTable *)inputOperations;
-(void)setInputOperations:(NSMapTable *)arg1 ;
-(NSIndexPath *)playingItemIndexPath;
-(MPCPlayerRequest *)playerRequest;
-(id)initWithMiddleware:(id)arg1 playerRequest:(id)arg2 ;
-(void)setPlayerRequest:(MPCPlayerRequest *)arg1 ;
-(MPModelGenericObject *)overridePlayingItem;
@end

