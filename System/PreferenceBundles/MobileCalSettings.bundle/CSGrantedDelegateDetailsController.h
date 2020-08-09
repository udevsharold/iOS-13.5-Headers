/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:04:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PreferenceBundles/MobileCalSettings.bundle/MobileCalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@protocol DelegateDetailProtocol;
@class EKEventStore, PSSpecifier, NSNumber, EKSource, CalGrantedDelegate;

@interface CSGrantedDelegateDetailsController : PSListController {

	BOOL _addDelegateMode;
	EKEventStore* _eventStore;
	PSSpecifier* _readWriteSwitch;
	PSSpecifier* _removeDelegateButton;
	NSNumber* _currentPermission;
	id<DelegateDetailProtocol> _delegateFromSpecifier;
	EKSource* _source;
	CalGrantedDelegate* _grantedDelegate;

}
-(id)init;
-(id)specifiers;
-(void)setSpecifier:(id)arg1 ;
-(void)modalCancelPressed:(id)arg1 ;
-(void)modalSavePressed:(id)arg1 ;
-(id)initInAddDelegateMode:(BOOL)arg1 ;
-(id)enabledWriteAccess:(id)arg1 ;
-(void)setEnabledWriteAccess:(id)arg1 specifier:(id)arg2 ;
-(void)removeDelegateTapped:(id)arg1 ;
@end
