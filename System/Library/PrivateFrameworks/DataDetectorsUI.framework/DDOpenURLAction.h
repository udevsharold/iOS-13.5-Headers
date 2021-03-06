/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DDAction.h>

@class LSAppLink;

@interface DDOpenURLAction : DDAction {

	LSAppLink* _appLink;
	BOOL _appLinkInitDone;

}
-(id)localizedName;
-(id)icon;
-(id)appLink;
-(void)performFromView:(id)arg1 ;
-(BOOL)canBePerformedByOpeningURL;
-(id)companionAction;
-(id)notificationIconBundleIdentifier;
-(id)notificationURL;
-(BOOL)shouldOpenInApp;
-(BOOL)shouldOpenInSafari;
@end

