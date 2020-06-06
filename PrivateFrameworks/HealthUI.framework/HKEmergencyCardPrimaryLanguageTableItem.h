/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKEmergencyCardTableItem.h>
#import <libobjc.A.dylib/HKMedicalIDEditorCellEditDelegate.h>
#import <libobjc.A.dylib/HKSpokenLanguagesViewControllerDelegate.h>

@class HKMedicalIDEditorLanguageCell, _HKMedicalIDMultilineStringCell, NSArray, HKSpokenLanguage;

@interface HKEmergencyCardPrimaryLanguageTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKSpokenLanguagesViewControllerDelegate> {

	HKMedicalIDEditorLanguageCell* _editableCell;
	_HKMedicalIDMultilineStringCell* _displayCell;
	BOOL _isEditing;
	NSArray* _mostLikelyLanguages;
	NSArray* _allSpokenLanguages;
	HKSpokenLanguage* _currentLanguage;

}
-(id)title;
-(id)initInEditMode:(BOOL)arg1 ;
-(BOOL)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2 ;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(BOOL)canEditRowAtIndex:(long long)arg1 ;
-(long long)editingStyleForRowAtIndex:(long long)arg1 ;
-(long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(id)_createEditableCell;
-(void)medicalIDEditorCellDidChangeValue:(id)arg1 ;
-(void)didSelectCellWithLanguage:(id)arg1 ;
-(void)setCurrentLanguage:(BOOL)arg1 ;
-(void)presentSpokenLanguageController;
-(id)attributedStringForCurrentLanguage;
@end

