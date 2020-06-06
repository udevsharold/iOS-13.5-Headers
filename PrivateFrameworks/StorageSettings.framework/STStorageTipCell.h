/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class NSMutableArray, UIImageView, UILabel, UIButton, UIActivityIndicatorView, STStorageProgressView, NSString;

@interface STStorageTipCell : PSTableCell {

	NSMutableArray* _constraints;
	UIImageView* _appIconView;
	UILabel* _titleLabel;
	UIImageView* _checkIconView;
	UIButton* _enableButton;
	UIActivityIndicatorView* _spinner;
	UILabel* _progressLabel;
	STStorageProgressView* _progressView;
	BOOL _isOption;
	float _percent;
	NSString* _hformat;
	NSString* _h2format;
	double _titleWidth;
	double _enableWidth;
	double _progressWidth;
	double _nativeSpinnerWidth;
	float _prevPercent;

}
-(void)updateConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)_activateOption;
@end

