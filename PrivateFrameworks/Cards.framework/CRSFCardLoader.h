/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface CRSFCardLoader : NSObject {

	NSCache* _loadedCards;

}
+(id)sharedLoader;
-(id)init;
-(void)loadSFCard:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

