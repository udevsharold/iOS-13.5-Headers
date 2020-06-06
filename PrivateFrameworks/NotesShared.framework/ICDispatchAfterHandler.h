/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ICDispatchAfterHandler : NSObject {

	NSMutableDictionary* _identifierBlockMap;

}

@property (nonatomic,retain) NSMutableDictionary * identifierBlockMap;              //@synthesize identifierBlockMap=_identifierBlockMap - In the implementation block
+(id)appLifeCycleHandler;
-(id)init;
-(void)cancelAll;
-(void)setIdentifierBlockMap:(NSMutableDictionary *)arg1 ;
-(id)identifierForStringIdentifier:(id)arg1 ;
-(NSMutableDictionary *)identifierBlockMap;
-(void)dispatchAfter:(double)arg1 stringIdentifier:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)cancelBlocksWithStringIdentifier:(id)arg1 ;
@end

