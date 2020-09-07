/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NRDataFileHistoryHelpers : NSObject
+(void)parseDiff:(id)arg1 forPropertyChange:(id)arg2 withBlock:(/*^block*/id)arg3 ;
+(id)unarchiveDeviceHistory;
+(BOOL)createMissingDates:(id)arg1 ;
+(id)unarchiveSecureProperties;
+(BOOL)archiveSecureProperties:(id)arg1 ;
+(BOOL)archiveDeviceHistory:(id)arg1 ;
+(id)findPairedDateForDeviceID:(id)arg1 inHistory:(id)arg2 ;
@end
