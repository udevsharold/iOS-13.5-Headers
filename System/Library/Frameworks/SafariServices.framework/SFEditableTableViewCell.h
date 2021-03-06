/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol SFEditableTableViewCellDelegate;
@interface SFEditableTableViewCell : UITableViewCell {

	BOOL _enabled;
	id<SFEditableTableViewCellDelegate> _delegate;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                    //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) id<SFEditableTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(id<SFEditableTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<SFEditableTableViewCellDelegate>)arg1 ;
-(BOOL)isEnabled;
-(void)tintColorDidChange;
-(id)initWithEnabledState:(BOOL)arg1 ;
-(void)safari_sharePassword:(id)arg1 ;
-(void)_updateTextFieldTextColor;
@end

