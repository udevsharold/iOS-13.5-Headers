/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CKVOBlockHelper : NSObject {

	id _observedObject;
	NSMutableDictionary* _tokensByContext;
	long long _nextIdentifier;

}

@property (nonatomic,__weak,readonly) id observedObject;                           //@synthesize observedObject=_observedObject - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * tokensByContext;              //@synthesize tokensByContext=_tokensByContext - In the implementation block
@property (assign,nonatomic) long long nextIdentifier;                             //@synthesize nextIdentifier=_nextIdentifier - In the implementation block
-(void)dealloc;
-(id)debugDescription;
-(id)initWithObject:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)dump;
-(id)observedObject;
-(void)removeHandlerForKey:(id)arg1 ;
-(id)insertNewTokenForKeyPath:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)allKVOObservers;
-(NSMutableDictionary *)tokensByContext;
-(long long)nextIdentifier;
-(void)setNextIdentifier:(long long)arg1 ;
@end

