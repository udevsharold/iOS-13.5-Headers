/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventEditItem.h>

@interface EKEventTravelTimeEditItem : EKEventEditItem {

	BOOL _isHidden;

}
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(BOOL)isInline;
-(BOOL)forceRefreshStartAndEndDatesOnSave;
-(void)_updateHiddenState;
@end

