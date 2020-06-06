/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BarcodeSupport/BarcodeSupport-Structs.h>
#import <libobjc.A.dylib/BCSActionPickerItemDelegate.h>

@class UIAlertController, NSString;

@interface BCSActionPickerViewAssistant : NSObject <BCSActionPickerItemDelegate> {

	UIAlertController* _alertController;

}

@property (getter=isShowingPicker,nonatomic,readonly) BOOL showingPicker; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isShowingPicker;
-(BOOL)showActionPickerWithItems:(id)arg1 fromViewController:(id)arg2 presentingRect:(CGRect)arg3 ;
-(void)_cleanUpAlertController;
-(id)actionPickerItemAlertController:(id)arg1 ;
-(void)actionPickerItem:(id)arg1 didDismissAlertController:(id)arg2 ;
@end

