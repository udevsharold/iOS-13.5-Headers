/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/_SBExpertAppSuggestion.h>

@interface _SBExpertLocationAppSuggestion : _SBExpertAppSuggestion
-(id)launchURL;
-(id)originatingBundleIdentifier;
-(id)suggestedLocationName;
-(BOOL)launchURLRequiresInboxCopy;
-(id)makeInboxCopyOfLaunchURLToInboxURL:(id)arg1 ;
-(BOOL)isLocationPredictionOfType:(unsigned long long)arg1 ;
-(BOOL)isLocationPredictionFromSource:(unsigned long long)arg1 ;
-(BOOL)isEligibleForLockScreen;
@end
