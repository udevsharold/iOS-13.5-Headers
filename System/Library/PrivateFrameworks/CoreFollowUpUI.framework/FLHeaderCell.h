/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UILabel, NSArray;

@interface FLHeaderCell : PSTableCell {

	UILabel* _followTitle;
	UILabel* _followSubtitle;
	NSArray* _constraints;

}
+(long long)cellStyle;
-(void)layoutSubviews;
-(void)updateConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
@end
