/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DKCKError : NSObject
+(BOOL)isShouldDeferError:(id)arg1 ;
+(BOOL)isUnrecoverableDecryptionError:(id)arg1 ;
+(id)zoneIDsWithUnrecoverableDecryptionError:(id)arg1 ;
+(id)errorMinusUnrecoverableDecryptionErrorsFromPartialError:(id)arg1 ;
+(BOOL)isIgnorableError:(id)arg1 ;
+(BOOL)isChangeTokenExpiredError:(id)arg1 ;
+(BOOL)isOperationCancelledError:(id)arg1 ;
+(BOOL)isPartialError:(id)arg1 ;
+(id)_allPartialErrorsFromError:(id)arg1 ;
+(void)_populateZoneIDs:(id)arg1 fromUnrecoverableDecryptionError:(id)arg2 zoneID:(id)arg3 ;
+(BOOL)isManateeNotAvailableError:(id)arg1 ;
+(BOOL)isKeychainSyncingInProgressError:(id)arg1 ;
+(BOOL)isPCSError:(id)arg1 ;
+(BOOL)isNetworkUnavailableError:(id)arg1 ;
@end

