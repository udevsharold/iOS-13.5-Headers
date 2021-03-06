/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol SiriUIObjectPickerViewControllerDelegate;
@class SAUIDomainObjectPicker;

@interface SiriUIObjectPickerViewController : UIViewController {

	id<SiriUIObjectPickerViewControllerDelegate> _pickerDelegate;
	SAUIDomainObjectPicker* _picker;

}

@property (getter=_picker,nonatomic,readonly) SAUIDomainObjectPicker * picker;                                //@synthesize picker=_picker - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIObjectPickerViewControllerDelegate> pickerDelegate;              //@synthesize pickerDelegate=_pickerDelegate - In the implementation block
+(id)pickerControllerWithPicker:(id)arg1 ;
-(id)_picker;
-(void)setPickerDelegate:(id<SiriUIObjectPickerViewControllerDelegate>)arg1 ;
-(id<SiriUIObjectPickerViewControllerDelegate>)pickerDelegate;
-(void)showPicker:(id)arg1 ;
-(id)initWithPicker:(id)arg1 ;
@end

