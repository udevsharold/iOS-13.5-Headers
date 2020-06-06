/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKAddressBook : NSObject
+(void*)addressBook;
+(id)locationSharingContactImageOfDiameter:(double)arg1 forRecordID:(int)arg2 useCustomFont:(BOOL)arg3 ;
+(id)monogrammerWithDiameter:(double)arg1 style:(long long)arg2 useAppTintColor:(BOOL)arg3 customFont:(id)arg4 ;
+(id)contactImageOfDiameter:(double)arg1 forRecordID:(int)arg2 monogramStyle:(long long)arg3 tintMonogramText:(BOOL)arg4 customFont:(id)arg5 ;
+(id)contactImageCache;
+(id)placeholderContactImageOfDiameter:(double)arg1 monogramStyle:(long long)arg2 tintMonogramText:(BOOL)arg3 ;
+(id)contactImageOfDiameter:(double)arg1 forRecordID:(int)arg2 monogramStyle:(long long)arg3 tintMonogramText:(BOOL)arg4 ;
+(id)monogrammerProvider;
+(id)transcriptContactImageOfDiameter:(double)arg1 forRecordID:(int)arg2 ;
+(void)flushMonogrammers;
@end

