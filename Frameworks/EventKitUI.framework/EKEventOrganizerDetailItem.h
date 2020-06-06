/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@protocol EKIdentityProtocol;
@class UITableViewCell;

@interface EKEventOrganizerDetailItem : EKEventDetailItem {

	UITableViewCell* _cell;
	BOOL _hideDisclosureIndicator;
	id<EKIdentityProtocol> _organizerOverride;

}

@property (retain) id<EKIdentityProtocol> organizerOverride;              //@synthesize organizerOverride=_organizerOverride - In the implementation block
@property (assign,nonatomic) BOOL hideDisclosureIndicator;                //@synthesize hideDisclosureIndicator=_hideDisclosureIndicator - In the implementation block
-(void)reset;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(id<EKIdentityProtocol>)organizerOverride;
-(void)_updateDisclosureIndicator;
-(void)setHideDisclosureIndicator:(BOOL)arg1 ;
-(void)setOrganizerOverride:(id<EKIdentityProtocol>)arg1 ;
-(BOOL)hideDisclosureIndicator;
@end

