/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class NSString;

@interface FCDraftIssuesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation {

	NSString* _issueListID;

}

@property (nonatomic,readonly) NSString * issueListID;              //@synthesize issueListID=_issueListID - In the implementation block
-(void)performOperation;
-(BOOL)validateOperation;
-(NSString *)issueListID;
-(id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 issueListID:(id)arg5 ;
@end

