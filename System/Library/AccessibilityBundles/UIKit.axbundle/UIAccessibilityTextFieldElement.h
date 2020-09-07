/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class UITextField;

@interface UIAccessibilityTextFieldElement : UIAccessibilityElement {

	UITextField* _textField;

}

@property (assign,nonatomic,__weak) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityLanguage;
-(BOOL)accessibilityElementsHidden;
-(BOOL)accessibilityRespondsToUserInteraction;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(BOOL)accessibilityPerformEscape;
-(BOOL)accessibilityPerformMagicTap;
-(id)accessibilityIdentifier;
-(id)accessibilityDragSourceDescriptors;
-(id)accessibilityDropPointDescriptors;
-(BOOL)canBecomeFocused;
-(UITextField *)textField;
-(id)accessibilityPlaceholderValue;
-(void)_accessibilitySetValue:(id)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(id)_accessibilityAXAttributedLabel;
-(id)_accessibilityTextOperations;
-(id)_accessibilityTextViewTextOperationResponder;
-(unsigned long long)_accessibilityAutomationType;
-(void)setTextField:(UITextField *)arg1 ;
-(BOOL)_accessibilityIsSpeakThisElement;
-(BOOL)_accessibilityViewIsVisible;
-(id)_accessibilityAXAttributedValue;
-(id)_accessibilityUserTestingParent;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(id)_accessibilityAXAttributedHint;
-(BOOL)_accessibilityHasTextOperations;
-(BOOL)_accessibilityOverridesInstructionsHint;
-(id)_accessibilityHandwritingAttributes;
-(BOOL)_accessibilityHandlesTabKey;
-(id)_accessibilitySpeakThisString;
-(void)_accessibilityCopy;
-(void)_accessibilityCut;
-(void)_accessibilityPaste;
-(void)_accessibilitySelectAll;
-(void)_accessibilitySelect;
-(void)_accessibilityDelete;
-(void)_accessibilityReplace;
-(void)_accessibilityUndo;
-(void)_accessibilityRedo;
-(void)_accessibilityInsertText:(id)arg1 ;
-(BOOL)_accessibilityServesAsFirstElement;
-(void)_accessibilitySetIsSpeakThisElement:(BOOL)arg1 ;
-(BOOL)_accessibilityReplaceTextInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)_accessibilityReplaceCharactersAtCursor:(unsigned long long)arg1 withString:(id)arg2 ;
-(BOOL)_accessibilityInsertTextWithAlternatives:(id)arg1 ;
@end
