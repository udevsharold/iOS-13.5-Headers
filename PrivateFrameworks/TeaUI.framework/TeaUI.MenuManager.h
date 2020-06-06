/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIResponder.h>

@interface TeaUI.MenuManager : UIResponder {

	 menu;
	 commandCenter;
	 menuItems;
	 alternateMenuItems;

}
-(void)handleMenuCommandWithSender:(id)arg1 ;
-(void)handleAlternateMenuCommandWithSender:(id)arg1 ;
-(void)handleShareCommandWithSender:(id)arg1 ;
-(id)init;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)validateCommand:(id)arg1 ;
-(void)buildMenuWithBuilder:(id)arg1 ;
@end

