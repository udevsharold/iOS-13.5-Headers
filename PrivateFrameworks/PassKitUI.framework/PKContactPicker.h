/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNContactPickerDelegate.h>

@class UIViewController, NSString;

@interface PKContactPicker : NSObject <CNContactPickerDelegate> {

	UIViewController* _pickerViewController;
	/*^block*/id _selectionHandler;
	/*^block*/id _cancelationHandler;

}

@property (nonatomic,retain) UIViewController * pickerViewController;              //@synthesize pickerViewController=_pickerViewController - In the implementation block
@property (nonatomic,copy) id selectionHandler;                                    //@synthesize selectionHandler=_selectionHandler - In the implementation block
@property (nonatomic,copy) id cancelationHandler;                                  //@synthesize cancelationHandler=_cancelationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(UIViewController *)pickerViewController;
-(void)setPickerViewController:(UIViewController *)arg1 ;
-(void)setSelectionHandler:(id)arg1 ;
-(id)selectionHandler;
-(id)initWithSelectionHandler:(/*^block*/id)arg1 cancelationHandler:(/*^block*/id)arg2 ;
-(id)cancelationHandler;
-(void)setCancelationHandler:(id)arg1 ;
@end

