/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UITextInputPrivate.h>
#import <UIKit/UITextInput.h>

@protocol MFAtomTextViewDelegateInternal;
@class UITextInteractionAssistant, RTIInputSystemSourceSession, UITextRange, NSDictionary, UITextPosition, UIView, UITextInputTraits, _UITextFieldRoundedRectBackgroundViewNeue, UIScrollView, _MFAtomFieldEditor, UILabel, UIButton, NSMutableArray, _MFAtomTextViewBaselineLayoutStrut, NSLayoutConstraint, UIFont, UIColor, NSString, NSArray, UITextInputPasswordRules, NSIndexSet, UIImage, UIInputContextHistory;

@interface MFAtomTextView : UIControl <NSLayoutManagerDelegate, UITextViewDelegate, UITextInputPrivate, UITextInput> {

	id<MFAtomTextViewDelegateInternal> _delegate;
	UITextInputTraits* _textInputTraits;
	_UITextFieldRoundedRectBackgroundViewNeue* _background;
	UIScrollView* _scrollView;
	_MFAtomFieldEditor* _textView;
	UILabel* _placeholderLabel;
	UIButton* _clearButton;
	NSMutableArray* _atomViews;
	_MFAtomTextViewBaselineLayoutStrut* _baselineLayoutLabel;
	NSLayoutConstraint* _baselineLayoutConstraint;
	struct {
		unsigned delegateDidChangeSelection : 1;
		unsigned delegateSupportedPasteboardTypes : 1;
		unsigned delegateRepresentedObjectsFromPasteboard : 1;
		unsigned delegateStoreRepresentedObjectsOnPasteboard : 1;
		unsigned delegateShouldReplaceRepresentedObjectReplacementText : 1;
		unsigned inLayoutSubviews : 1;
		unsigned needsScrollToSelectionAfterLayout : 1;
	}  _flags;
	BOOL _drawsDebugBaselines;
	UIFont* _font;
	UIColor* _textColor;
	NSString* _placeholder;
	UIColor* _placeholderColor;
	UIView* _leadingView;
	long long _leadingViewMode;
	UIView* _trailingView;
	long long _trailingViewMode;
	long long _clearButtonMode;
	NSDirectionalEdgeInsets _textInsets;
	NSDirectionalEdgeInsets _placeholderInsets;
	NSDirectionalEdgeInsets _leadingViewInsets;
	NSDirectionalEdgeInsets _trailingViewInsets;
	NSDirectionalEdgeInsets _clearButtonInsets;

}

@property (assign,setter=_setDrawsDebugBaselines:,getter=_drawsDebugBaselines,nonatomic) BOOL drawsDebugBaselines;              //@synthesize drawsDebugBaselines=_drawsDebugBaselines - In the implementation block
@property (getter=_systemBackgroundView,nonatomic,readonly) UIView * systemBackgroundView; 
@property (getter=_fieldEditor,nonatomic,readonly) _MFAtomFieldEditor * fieldEditor; 
@property (nonatomic,readonly) UILabel * placeholderLabel; 
@property (nonatomic,readonly) UIButton * clearButton; 
@property (assign,nonatomic,__weak) id<MFAtomTextViewDelegate> delegate;                                                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                                                     //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                                                               //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets textInsets;                                                                //@synthesize textInsets=_textInsets - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                                                                              //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,retain) UIColor * placeholderColor;                                                                        //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets placeholderInsets;                                                         //@synthesize placeholderInsets=_placeholderInsets - In the implementation block
@property (nonatomic,retain) UIView * leadingView;                                                                              //@synthesize leadingView=_leadingView - In the implementation block
@property (assign,nonatomic) long long leadingViewMode;                                                                         //@synthesize leadingViewMode=_leadingViewMode - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets leadingViewInsets;                                                         //@synthesize leadingViewInsets=_leadingViewInsets - In the implementation block
@property (nonatomic,retain) UIView * trailingView;                                                                             //@synthesize trailingView=_trailingView - In the implementation block
@property (assign,nonatomic) long long trailingViewMode;                                                                        //@synthesize trailingViewMode=_trailingViewMode - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets trailingViewInsets;                                                        //@synthesize trailingViewInsets=_trailingViewInsets - In the implementation block
@property (assign,nonatomic) long long clearButtonMode;                                                                         //@synthesize clearButtonMode=_clearButtonMode - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets clearButtonInsets;                                                         //@synthesize clearButtonInsets=_clearButtonInsets - In the implementation block
@property (nonatomic,copy) NSArray * representedObjects; 
@property (nonatomic,copy,readonly) NSArray * selectedRepresentedObjects; 
@property (nonatomic,copy,readonly) NSString * currentEditingString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@property (nonatomic,readonly) BOOL hasText; 
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic,__weak) id<UITextInputDelegate> inputDelegate; 
@property (nonatomic,readonly) id<UITextInputTokenizer> tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) long long selectionAffinity; 
@property (nonatomic,readonly) id insertDictationResultPlaceholder; 
@property (nonatomic,copy) NSString * recentInputIdentifier; 
@property (assign,nonatomic) NSRange validTextRange; 
@property (nonatomic,copy) NSIndexSet * PINEntrySeparatorIndexes; 
@property (assign,nonatomic) CFCharacterSetRef textTrimmingSet; 
@property (nonatomic,retain) UIColor * insertionPointColor; 
@property (nonatomic,retain) UIColor * selectionBarColor; 
@property (nonatomic,retain) UIColor * selectionHighlightColor; 
@property (nonatomic,retain) UIImage * selectionDragDotImage; 
@property (nonatomic,retain) UIColor * underlineColorForTextAlternatives; 
@property (nonatomic,retain) UIColor * underlineColorForSpelling; 
@property (assign,nonatomic) unsigned long long insertionPointWidth; 
@property (assign,nonatomic) int textLoupeVisibility; 
@property (assign,nonatomic) int textSelectionBehavior; 
@property (assign,nonatomic) id textSuggestionDelegate; 
@property (assign,nonatomic) BOOL isSingleLineDocument; 
@property (assign,nonatomic) BOOL contentsIsSingleValue; 
@property (assign,nonatomic) BOOL hasDefaultContents; 
@property (assign,nonatomic) BOOL acceptsPayloads; 
@property (assign,nonatomic) BOOL acceptsEmoji; 
@property (assign,nonatomic) BOOL acceptsDictationSearchResults; 
@property (assign,nonatomic) BOOL useAutomaticEndpointing; 
@property (assign,nonatomic) BOOL showDictationButton; 
@property (assign,nonatomic) BOOL forceEnableDictation; 
@property (assign,nonatomic) BOOL forceDisableDictation; 
@property (assign,nonatomic) BOOL forceDefaultDictationInfo; 
@property (assign,nonatomic) long long forceDictationKeyboardType; 
@property (assign,nonatomic) int emptyContentReturnKeyType; 
@property (assign,nonatomic) BOOL returnKeyGoesToNextResponder; 
@property (assign,nonatomic) BOOL acceptsFloatingKeyboard; 
@property (assign,nonatomic) BOOL forceFloatingKeyboard; 
@property (assign,nonatomic) UIEdgeInsets floatingKeyboardEdgeInsets; 
@property (assign,nonatomic) BOOL acceptsSplitKeyboard; 
@property (assign,nonatomic) BOOL displaySecureTextUsingPlainText; 
@property (assign,nonatomic) BOOL displaySecureEditsUsingPlainText; 
@property (assign,nonatomic) BOOL learnsCorrections; 
@property (assign,nonatomic) int shortcutConversionType; 
@property (assign,nonatomic) BOOL suppressReturnKeyStyling; 
@property (assign,nonatomic) BOOL useInterfaceLanguageForLocalization; 
@property (assign,nonatomic) BOOL deferBecomingResponder; 
@property (assign,nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent; 
@property (nonatomic,copy) NSString * autocorrectionContext; 
@property (nonatomic,copy) NSString * responseContext; 
@property (nonatomic,retain) UIInputContextHistory * inputContextHistory; 
@property (assign,nonatomic) BOOL disableInputBars; 
@property (assign,nonatomic) BOOL isCarPlayIdiom; 
@property (assign,nonatomic) long long textScriptType; 
@property (assign,nonatomic) BOOL loadKeyboardsForSiriLanguage; 
@property (assign,nonatomic) BOOL disablePrediction; 
@property (assign,nonatomic) BOOL hidePrediction; 
@property (assign,getter=isDevicePasscodeEntry,nonatomic) BOOL devicePasscodeEntry; 
@property (nonatomic,readonly) UITextInteractionAssistant * interactionAssistant; 
@property (assign,nonatomic) long long selectionGranularity; 
@property (nonatomic,readonly) long long cursorBehavior; 
@property (nonatomic,readonly) id<UITextInputSuggestionDelegate> textInputSuggestionDelegate; 
@property (assign,nonatomic) long long _textInputSource; 
@property (nonatomic,readonly) RTIInputSystemSourceSession * _rtiSourceSession; 
@property (nonatomic,readonly) BOOL supportsImagePaste; 
+(id)defaultFont;
+(Class)_fieldEditorClass;
+(id)defaultTextColor;
+(Class)_backgroundViewClass;
+(id)defaultPlaceholderColor;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id<MFAtomTextViewDelegate>)delegate;
-(void)setDelegate:(id<MFAtomTextViewDelegate>)arg1 ;
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3 ;
-(BOOL)_drawsDebugBaselines;
-(void)_setDrawsDebugBaselines:(BOOL)arg1 ;
-(BOOL)isFirstResponder;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(void)setPlaceholder:(NSString *)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)scrollViewDidScroll:(id)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(id)viewForLastBaselineLayout;
-(BOOL)resignFirstResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(UIColor *)textColor;
-(id)textInputTraits;
-(NSString *)placeholder;
-(void)takeTraitsFrom:(id)arg1 ;
-(void)deleteBackward;
-(BOOL)canResignFirstResponder;
-(void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setClearButtonMode:(long long)arg1 ;
-(id)_clearButtonImageForState:(unsigned long long)arg1 ;
-(BOOL)_hasContent;
-(CGSize)_clearButtonSize;
-(id)_systemBackgroundView;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(id)positionFromPosition:(id)arg1 offset:(long long)arg2 ;
-(void)unmarkText;
-(id)textInRange:(id)arg1 ;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(void)insertText:(id)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(CGRect)_usedRectWithLayoutManager:(id)arg1 textContainer:(id)arg2 ;
-(id)keyCommands;
-(BOOL)hasText;
-(id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 ;
-(long long)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2 ;
-(CGRect)firstRectForRange:(id)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(id)positionWithinRange:(id)arg1 atCharacterOffset:(long long)arg2 ;
-(id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 ;
-(BOOL)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3 ;
-(BOOL)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3 ;
-(BOOL)keyboardInputChanged:(id)arg1 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3 ;
-(NSRange)selectionRange;
-(BOOL)hasContent;
-(void)selectAll;
-(BOOL)hasSelection;
-(UIView *)trailingView;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(id)_fieldEditor;
-(void)_textStorageDidProcessEditing:(id)arg1 ;
-(long long)clearButtonMode;
-(UIButton *)clearButton;
-(UIColor *)placeholderColor;
-(void)_scrollToSelectionIfNeeded;
-(void)_layoutPlaceholder;
-(CGPoint)_firstGlyphBaselineLeftPointWithLayoutManager:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)addRepresentedObject:(id)arg1 ;
-(NSDirectionalEdgeInsets)textInsets;
-(void)setTextInsets:(NSDirectionalEdgeInsets)arg1 ;
-(NSArray *)representedObjects;
-(void)setRepresentedObjects:(NSArray *)arg1 ;
-(void)_tapRecognized:(id)arg1 ;
-(void)_clearButtonTapped:(id)arg1 ;
-(UILabel *)placeholderLabel;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(id)baseAttributes;
-(id)paragraphStyle;
-(id)_atomLayoutViewForRepresentedObject:(id)arg1 ;
-(id)baseAttributesWithRepresentedObject:(id)arg1 ;
-(id)_representedObjectsInRange:(NSRange)arg1 ranges:(id*)arg2 ;
-(id)currentEditingString:(NSRange*)arg1 ;
-(id)_baseAttributedStringWithRepresentedObject:(id)arg1 ;
-(void)_deleteCharactersInStorage:(id)arg1 ranges:(id)arg2 rangeToAdjust:(NSRange*)arg3 ;
-(void)removeRepresentedObjectsAtIndexes:(id)arg1 ;
-(void)removeRepresentedObjects:(id)arg1 ;
-(void)replaceCurrentEditingStringWithRepresentedObject:(id)arg1 autoSelect:(BOOL)arg2 ;
-(NSDirectionalEdgeInsets)clearButtonInsets;
-(UIEdgeInsets)_edgeInsetsForDirectionalInsets:(NSDirectionalEdgeInsets)arg1 ;
-(UIView *)leadingView;
-(CGRect)_rectForBounds:(CGRect)arg1 sizingView:(id)arg2 isLeft:(BOOL)arg3 ;
-(NSDirectionalEdgeInsets)leadingViewInsets;
-(NSDirectionalEdgeInsets)trailingViewInsets;
-(BOOL)_showViewWithMode:(long long)arg1 alwaysDefinition:(BOOL)arg2 ;
-(long long)leadingViewMode;
-(BOOL)_showsClearButton;
-(long long)trailingViewMode;
-(CGRect)clearButtonFrameForBounds:(CGRect)arg1 ;
-(BOOL)_showsLeadingView;
-(CGRect)leadingViewFrameForBounds:(CGRect)arg1 ;
-(BOOL)_showsTrailingView;
-(CGRect)trailingViewFrameForBounds:(CGRect)arg1 ;
-(NSDirectionalEdgeInsets)placeholderInsets;
-(BOOL)_showsPlaceholder;
-(CGRect)placeholderFrameForBounds:(CGRect)arg1 ;
-(void)_layoutButtons;
-(void)_updateBaselineConstraintIfNecessaryUsingTextViewFrame:(CGRect)arg1 ;
-(void)_createBaselineLayoutStrutIfNecessary;
-(NSRange)_characterRangeForAtomView:(id)arg1 ;
-(CGRect)_visibleAtomsRect;
-(void)_updateAtomMasksInRect:(CGRect)arg1 ;
-(id)_attachmentAtCharacterIndex:(unsigned long long)arg1 ;
-(void)escKeyPressed:(id)arg1 ;
-(NSString *)currentEditingString;
-(NSArray *)selectedRepresentedObjects;
-(void)insertRepresentedObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeRepresentedObjectAtIndex:(unsigned long long)arg1 ;
-(void)removeRepresentedObject:(id)arg1 ;
-(void)replaceCurrentEditingStringWithRepresentedObject:(id)arg1 ;
-(id)_supportedPasteboardTypes;
-(id)_representedObjectsFromPasteboard:(id)arg1 ;
-(void)_storeRepresentedObjects:(id)arg1 onPasteboard:(id)arg2 ;
-(void)_insertRepresentedObjects:(id)arg1 atCharacterRange:(NSRange)arg2 ;
-(void)_removeRepresentedObjectsInCharacterRange:(NSRange)arg1 ;
-(void)setPlaceholderInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)setLeadingViewInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)setTrailingViewInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)setClearButtonInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)setLeadingView:(UIView *)arg1 ;
-(void)setLeadingViewMode:(long long)arg1 ;
-(void)setTrailingView:(UIView *)arg1 ;
-(void)setTrailingViewMode:(long long)arg1 ;
@end

