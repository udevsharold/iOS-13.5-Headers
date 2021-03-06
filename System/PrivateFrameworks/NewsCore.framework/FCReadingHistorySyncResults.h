/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FCReadingHistorySyncResults : NSObject {

	NSArray* _modifiedArticleIDs;
	NSArray* _deletedArticleIDs;
	NSArray* _newlyCreatedArticleIDs;

}

@property (nonatomic,retain) NSArray * modifiedArticleIDs;                  //@synthesize modifiedArticleIDs=_modifiedArticleIDs - In the implementation block
@property (nonatomic,retain) NSArray * deletedArticleIDs;                   //@synthesize deletedArticleIDs=_deletedArticleIDs - In the implementation block
@property (nonatomic,retain) NSArray * newlyCreatedArticleIDs;              //@synthesize newlyCreatedArticleIDs=_newlyCreatedArticleIDs - In the implementation block
-(id)initWithModifiedArticleIDs:(id)arg1 deletedArticleIDs:(id)arg2 newArticleIDs:(id)arg3 ;
-(NSArray *)modifiedArticleIDs;
-(void)setModifiedArticleIDs:(NSArray *)arg1 ;
-(NSArray *)deletedArticleIDs;
-(void)setDeletedArticleIDs:(NSArray *)arg1 ;
-(NSArray *)newlyCreatedArticleIDs;
-(void)setNewlyCreatedArticleIDs:(NSArray *)arg1 ;
@end

