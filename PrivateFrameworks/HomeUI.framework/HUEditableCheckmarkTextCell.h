/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>
#import <libobjc.A.dylib/HUEditableTextCellProtocol.h>

@protocol HUEditableCheckmarkDelegate;
@class UITextField, UIView, HFItem, HUCheckmarkAccessoryView, NSArray, UITapGestureRecognizer, NSString;

@interface HUEditableCheckmarkTextCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol, HUEditableTextCellProtocol> {

	BOOL _disabled;
	BOOL _disableCheckmark;
	BOOL _isChecked;
	BOOL _allowCheckmarkSelectionWhileDisabled;
	UIView* _accessoryView;
	UITextField* _textField;
	HFItem* _item;
	HUCheckmarkAccessoryView* _checkmarkView;
	id<HUEditableCheckmarkDelegate> _delegate;
	NSArray* _staticConstraints;
	NSArray* _dynamicConstraints;
	UITapGestureRecognizer* _checkmarkTapRecognizer;

}

@property (nonatomic,retain) HUCheckmarkAccessoryView * checkmarkView;                         //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (nonatomic,retain) NSArray * staticConstraints;                                      //@synthesize staticConstraints=_staticConstraints - In the implementation block
@property (nonatomic,retain) NSArray * dynamicConstraints;                                     //@synthesize dynamicConstraints=_dynamicConstraints - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * checkmarkTapRecognizer;                  //@synthesize checkmarkTapRecognizer=_checkmarkTapRecognizer - In the implementation block
@property (assign,nonatomic) BOOL disableCheckmark;                                            //@synthesize disableCheckmark=_disableCheckmark - In the implementation block
@property (assign,setter=setChecked:,nonatomic) BOOL isChecked;                                //@synthesize isChecked=_isChecked - In the implementation block
@property (assign,nonatomic) BOOL allowCheckmarkSelectionWhileDisabled;                        //@synthesize allowCheckmarkSelectionWhileDisabled=_allowCheckmarkSelectionWhileDisabled - In the implementation block
@property (assign,nonatomic,__weak) id<HUEditableCheckmarkDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                  //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,readonly) UITextField * textField;                                        //@synthesize textField=_textField - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id<HUEditableCheckmarkDelegate>)delegate;
-(void)setDelegate:(id<HUEditableCheckmarkDelegate>)arg1 ;
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(void)prepareForReuse;
-(BOOL)isDisabled;
-(void)layoutSubviews;
-(UITextField *)textField;
-(void)updateConstraints;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setAccessoryView:(id)arg1 ;
-(id)accessoryView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)isChecked;
-(HUCheckmarkAccessoryView *)checkmarkView;
-(void)setCheckmarkView:(HUCheckmarkAccessoryView *)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)_checkmarkTapped:(id)arg1 ;
-(void)setDisableCheckmark:(BOOL)arg1 ;
-(void)setAllowCheckmarkSelectionWhileDisabled:(BOOL)arg1 ;
-(void)setDynamicConstraints:(NSArray *)arg1 ;
-(UITapGestureRecognizer *)checkmarkTapRecognizer;
-(BOOL)allowCheckmarkSelectionWhileDisabled;
-(BOOL)disableCheckmark;
-(NSArray *)staticConstraints;
-(void)setStaticConstraints:(NSArray *)arg1 ;
-(NSArray *)dynamicConstraints;
-(void)setCheckmarkTapRecognizer:(UITapGestureRecognizer *)arg1 ;
@end

