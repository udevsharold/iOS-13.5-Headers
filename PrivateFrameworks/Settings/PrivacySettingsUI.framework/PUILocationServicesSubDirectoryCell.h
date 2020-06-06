/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class PUILocationUsageMixin;

@interface PUILocationServicesSubDirectoryCell : PSTableCell {

	PUILocationUsageMixin* _location;

}

@property (nonatomic,readonly) PUILocationUsageMixin * location;              //@synthesize location=_location - In the implementation block
-(PUILocationUsageMixin *)location;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(BOOL)canReload;
@end

