/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAlertController.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol _SBAlertControllerDelegate;
@class SBAlertItem, NSString;

@interface _SBAlertController : UIAlertController <BSDescriptionProviding> {

	SBAlertItem* _alertItem;
	id<_SBAlertControllerDelegate> _alertControllerDelegate;

}

@property (assign,nonatomic,__weak) SBAlertItem * alertItem;                                             //@synthesize alertItem=_alertItem - In the implementation block
@property (assign,nonatomic,__weak) id<_SBAlertControllerDelegate> alertControllerDelegate;              //@synthesize alertControllerDelegate=_alertControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(SBAlertItem *)alertItem;
-(void)setAlertItem:(SBAlertItem *)arg1 ;
-(void)setHiddenOnClonedDisplay:(BOOL)arg1 ;
-(id<_SBAlertControllerDelegate>)alertControllerDelegate;
-(void)setAlertControllerDelegate:(id<_SBAlertControllerDelegate>)arg1 ;
@end
