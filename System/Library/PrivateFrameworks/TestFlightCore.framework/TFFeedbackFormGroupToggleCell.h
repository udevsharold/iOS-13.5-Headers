/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlightCore/TFFeedbackFormBaseCell.h>

@class UISwitch, TFFeedbackEntryGroupToggle;

@interface TFFeedbackFormGroupToggleCell : TFFeedbackFormBaseCell {

	UISwitch* _toggleSwitch;
	TFFeedbackEntryGroupToggle* _groupToggleEntry;

}

@property (nonatomic,readonly) UISwitch * toggleSwitch;                                  //@synthesize toggleSwitch=_toggleSwitch - In the implementation block
@property (nonatomic,retain) TFFeedbackEntryGroupToggle * groupToggleEntry;              //@synthesize groupToggleEntry=_groupToggleEntry - In the implementation block
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UISwitch *)toggleSwitch;
-(TFFeedbackEntryGroupToggle *)groupToggleEntry;
-(unsigned long long)displayableDataType;
-(void)setDisplayedDataGroupInclusionBool:(BOOL)arg1 ;
-(void)applyContentsOfEntry:(id)arg1 ;
-(void)didUpdateToggleSwitchValue:(id)arg1 ;
-(void)setGroupToggleEntry:(TFFeedbackEntryGroupToggle *)arg1 ;
@end

