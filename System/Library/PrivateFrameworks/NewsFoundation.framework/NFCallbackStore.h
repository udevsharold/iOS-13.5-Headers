/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface NFCallbackStore : NSObject {

	NSMutableDictionary* _store;

}

@property (nonatomic,readonly) NSMutableDictionary * store;              //@synthesize store=_store - In the implementation block
-(id)init;
-(NSMutableDictionary *)store;
-(void)storeCallbackDefinition:(id)arg1 forKey:(id)arg2 scope:(id)arg3 ;
-(id)lookupForKey:(id)arg1 ;
@end

