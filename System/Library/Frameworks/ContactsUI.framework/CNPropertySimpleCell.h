/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyCell.h>

@class UILabel;

@interface CNPropertySimpleCell : CNPropertyCell {

	UILabel* _labelLabel;
	UILabel* _valueLabel;

}

@property (nonatomic,readonly) UILabel * labelLabel;              //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,readonly) UILabel * valueLabel;              //@synthesize valueLabel=_valueLabel - In the implementation block
-(id)labelView;
-(UILabel *)valueLabel;
-(id)valueView;
-(UILabel *)labelLabel;
@end

