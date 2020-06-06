/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TinCanShared/TinCanShared-Structs.h>
@class NSMutableDictionary, NSMutableOrderedSet;

@interface TCSCallLog : NSObject {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _calls;
	NSMutableOrderedSet* _identifiers;

}

@property (nonatomic,retain) NSMutableDictionary * calls;                    //@synthesize calls=_calls - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * identifiers;              //@synthesize identifiers=_identifiers - In the implementation block
-(id)init;
-(NSMutableOrderedSet *)identifiers;
-(void)setIdentifiers:(NSMutableOrderedSet *)arg1 ;
-(NSMutableDictionary *)calls;
-(id)callWithUniqueProxyIdentifier:(id)arg1 ;
-(void)setCalls:(NSMutableDictionary *)arg1 ;
-(void)_trimCache;
-(void)addCall:(id)arg1 ;
@end

