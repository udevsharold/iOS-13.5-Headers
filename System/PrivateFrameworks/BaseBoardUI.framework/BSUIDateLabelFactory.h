/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface BSUIDateLabelFactory : NSObject {

	NSMutableDictionary* _recycledLabelsByStyle;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_purgeRecycledLabels;
-(id)_labelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 forStyle:(long long)arg5 forType:(long long)arg6 ;
-(long long)styleForLabel:(id)arg1 ;
-(id)startLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 forStyle:(long long)arg5 ;
-(id)endLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 forStyle:(long long)arg5 ;
-(id)combinedDateLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 forStyle:(long long)arg5 ;
-(void)recycleLabel:(id)arg1 ;
@end

