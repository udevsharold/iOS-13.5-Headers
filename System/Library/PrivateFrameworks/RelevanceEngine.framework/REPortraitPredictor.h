/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REPredictor.h>
#import <libobjc.A.dylib/REPortraitPredictorProperties.h>

@class NSDictionary, PPNamedEntityStore, NSMutableDictionary;

@interface REPortraitPredictor : REPredictor <REPortraitPredictorProperties> {

	PPNamedEntityStore* _namedEntityStore;
	NSMutableDictionary* _namedEntityScores;

}

@property (nonatomic,readonly) NSDictionary * namedEntityScores; 
+(double)updateInterval;
-(void)dealloc;
-(id)_init;
-(void)update;
-(float)userAffinityToContent:(id)arg1 ;
-(void)_loadStoreIfNeeded;
-(NSDictionary *)namedEntityScores;
@end

