/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNErrorViewController.h>
#import <libobjc.A.dylib/CNContactContentViewController.h>

@protocol CNContactViewControllerPPTDelegate, CNContactViewHostProtocol;
@class NSString;

@interface CNContactViewServiceErrorViewController : CNErrorViewController <CNContactContentViewController> {

	id<CNContactViewControllerPPTDelegate> pptDelegate;
	id<CNContactViewHostProtocol> delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CNContactViewHostProtocol> delegate; 
@property (assign,nonatomic,__weak) id<CNContactViewControllerPPTDelegate> pptDelegate; 
-(id<CNContactViewHostProtocol>)delegate;
-(void)setDelegate:(id<CNContactViewHostProtocol>)arg1 ;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(void)didChangeToEditMode:(BOOL)arg1 ;
-(void)editCancel;
-(void)toggleEditing;
-(id<CNContactViewControllerPPTDelegate>)pptDelegate;
-(void)setPptDelegate:(id<CNContactViewControllerPPTDelegate>)arg1 ;
@end
