/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GKDigestVerification : NSObject
+(id)computeVerificationHashForDigest:(id)arg1 ;
+(BOOL)digest:(id)arg1 matchesHash:(id)arg2 ;
+(id)digestForSubmitScore:(id)arg1 forBundleID:(id)arg2 shouldScreen:(BOOL)arg3 eligibleChallenges:(id)arg4 ;
+(id)digestForSubmitAchievement:(id)arg1 forBundleID:(id)arg2 shouldScreen:(BOOL)arg3 eligibleChallenges:(id)arg4 ;
@end

