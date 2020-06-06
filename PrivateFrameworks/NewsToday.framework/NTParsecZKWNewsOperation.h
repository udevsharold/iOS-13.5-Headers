/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class PARSession, NSDate, NSOrderedSet, NSDictionary, SFRankingFeedback, NSString;

@interface NTParsecZKWNewsOperation : FCOperation {

	PARSession* _session;
	NSDate* _fetchDate;
	NSOrderedSet* _resultSearchResultIDs;
	NSDictionary* _resultSearchResultsBySearchResultID;
	SFRankingFeedback* _resultRankingFeedback;
	/*^block*/id _newsCompletionHandler;
	double _scale;
	NSString* _keyboardInputMode;

}

@property (nonatomic,copy) NSDate * fetchDate;                                              //@synthesize fetchDate=_fetchDate - In the implementation block
@property (nonatomic,copy) NSOrderedSet * resultSearchResultIDs;                            //@synthesize resultSearchResultIDs=_resultSearchResultIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * resultSearchResultsBySearchResultID;              //@synthesize resultSearchResultsBySearchResultID=_resultSearchResultsBySearchResultID - In the implementation block
@property (nonatomic,copy) SFRankingFeedback * resultRankingFeedback;                       //@synthesize resultRankingFeedback=_resultRankingFeedback - In the implementation block
@property (nonatomic,retain) PARSession * session;                                          //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) id newsCompletionHandler;                                        //@synthesize newsCompletionHandler=_newsCompletionHandler - In the implementation block
@property (assign,nonatomic) double scale;                                                  //@synthesize scale=_scale - In the implementation block
@property (nonatomic,copy) NSString * keyboardInputMode;                                    //@synthesize keyboardInputMode=_keyboardInputMode - In the implementation block
-(id)init;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(PARSession *)session;
-(void)setSession:(PARSession *)arg1 ;
-(void)setTimeoutDuration:(double)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(NSDate *)fetchDate;
-(void)setFetchDate:(NSDate *)arg1 ;
-(NSString *)keyboardInputMode;
-(void)setKeyboardInputMode:(NSString *)arg1 ;
-(SFRankingFeedback *)resultRankingFeedback;
-(void)setResultRankingFeedback:(SFRankingFeedback *)arg1 ;
-(NSDictionary *)resultSearchResultsBySearchResultID;
-(NSOrderedSet *)resultSearchResultIDs;
-(void)setNewsCompletionHandler:(id)arg1 ;
-(id)newsCompletionHandler;
-(void)setResultSearchResultIDs:(NSOrderedSet *)arg1 ;
-(void)setResultSearchResultsBySearchResultID:(NSDictionary *)arg1 ;
@end
