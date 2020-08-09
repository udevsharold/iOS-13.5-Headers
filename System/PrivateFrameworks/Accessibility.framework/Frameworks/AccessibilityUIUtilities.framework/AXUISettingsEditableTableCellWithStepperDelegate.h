/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXUISettingsEditableTableCellWithStepperDelegate <NSObject>
@optional
-(id)unitsStringForSpecifier:(id)arg1;
-(long long)keyboardTypeForSpecifier:(id)arg1;

@required
-(id)stringValueForSpecifier:(id)arg1;
-(double)valueForSpecifier:(id)arg1;
-(void)specifier:(id)arg1 setValue:(double)arg2;
-(double)stepValueForSpecifier:(id)arg1;
-(double)minimumValueForSpecifier:(id)arg1;
-(double)maximumValueForSpecifier:(id)arg1;

@end
