/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSCrowdsourcedFeedbackWhitelist
@required
-(void)getLastWhitelistRetrievalURLStringWithCompletionHandler:(/*^block*/id)arg1;
-(void)replaceDomainWhitelistWithDomains:(id)arg1 retrievalURLString:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getWhitelistStatusForDomain:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setDomain:(id)arg1 isWhitelistedForFeedback:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setLastWhitelistRetrievalURLString:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

