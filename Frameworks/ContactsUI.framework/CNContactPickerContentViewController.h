/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UINavigationController, UIBarButtonItem;


@protocol CNContactPickerContentViewController <CNContactPickerServiceProtocol>
@property (assign,nonatomic,__weak) id<CNContactPickerContentDelegate> delegate; 
@property (nonatomic,readonly) UINavigationController * navigationController; 
@property (nonatomic,readonly) UIBarButtonItem * addContactBarButtonItem; 
@required
-(void)invalidate;
-(id<CNContactPickerContentDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(UINavigationController *)navigationController;
-(void)invalidateSelectionAnimated:(BOOL)arg1;
-(UIBarButtonItem *)addContactBarButtonItem;

@end

