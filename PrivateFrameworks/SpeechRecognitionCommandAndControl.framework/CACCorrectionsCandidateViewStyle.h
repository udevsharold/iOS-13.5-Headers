/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <libobjc.A.dylib/TUICandidateViewStyle.h>

@class UIFont, UIColor, NSString, UIImage;

@interface CACCorrectionsCandidateViewStyle : NSObject <TUICandidateViewStyle> {

	BOOL _doNotClipToBounds;
	BOOL _darkBackdrop;
	BOOL _scrollDisabled;
	BOOL _showsIndex;
	BOOL _fillGridWithLines;
	BOOL _dontSelectLastItemByBackwardMoving;
	BOOL _showOneMoreCandidate;
	BOOL _disableSwitchingSortingMethodByTabKey;
	BOOL _skipInlineCandidate;
	BOOL _hidesPartialCandidates;
	UIFont* _candidateFont;
	UIFont* _annotationTextFont;
	UIFont* _alternativeTextFont;
	UIFont* _candidateNumberFont;
	UIFont* _sortControlFont;
	UIColor* _textColor;
	UIColor* _highlightedTextColor;
	UIColor* _alternativeTextColor;
	UIColor* _highlightedAlternativeTextColor;
	UIColor* _candidateNumberColor;
	UIColor* _highlightedCandidateNumberColor;
	UIColor* _backgroundColor;
	UIColor* _cellBackgroundColor;
	UIColor* _arrowButtonBackgroundColor;
	UIColor* _gridBackgroundColor;
	UIColor* _highlightedBackgroundColor;
	UIColor* _highlightedRowBackgroundColor;
	UIColor* _transliterationCandidateBackgroundColor;
	UIColor* _groupHeaderBackgroundColor;
	UIColor* _lineColor;
	UIColor* _sortControlColor;
	UIColor* _sortControlBackgroundColor;
	NSString* _arrowButtonImageName;
	UIImage* _cellSeparatorImage;
	UIImage* _slottedCellSeparatorImage;
	UIImage* _leftEdgeSeparatorImage;
	UIImage* _rightEdgeSeparatorImage;
	UIImage* _arrowButtonSeparatorImage;
	UIImage* _cellBackgroundImage;
	UIImage* _highlightedCellBackgroundImage;
	UIImage* _transliterationCandidateBackgroundImage;
	double _rowHeight;
	double _arrowButtonHeight;
	double _cornerRadius;
	unsigned long long _maskedCorners;
	unsigned long long _gridMaskedCorners;
	double _foregroundOpacity;
	double _backgroundOpacity;
	long long _layoutOrientation;
	unsigned long long _columnsCount;
	unsigned long long _maxNumberOfProactiveCells;
	double _minimumCellPadding;
	double _minimumCellWidth;
	double _singleSlottedCellMargin;
	long long _cellTextAlignment;
	long long _alternativeTextAlignment;
	long long _minimumNumberOfCandidates;
	CGPoint _gridLineOffset;
	UIEdgeInsets _extraCellPadding;
	UIEdgeInsets _arrowButtonPadding;
	UIEdgeInsets _gridPadding;
	UIEdgeInsets _gridLinePadding;
	UIEdgeInsets _sortControlPadding;

}

@property (nonatomic,retain) UIFont * candidateFont;                                         //@synthesize candidateFont=_candidateFont - In the implementation block
@property (nonatomic,retain) UIFont * annotationTextFont;                                    //@synthesize annotationTextFont=_annotationTextFont - In the implementation block
@property (nonatomic,retain) UIFont * alternativeTextFont;                                   //@synthesize alternativeTextFont=_alternativeTextFont - In the implementation block
@property (nonatomic,retain) UIFont * candidateNumberFont;                                   //@synthesize candidateNumberFont=_candidateNumberFont - In the implementation block
@property (nonatomic,retain) UIFont * sortControlFont;                                       //@synthesize sortControlFont=_sortControlFont - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                            //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedTextColor;                                 //@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (nonatomic,retain) UIColor * alternativeTextColor;                                 //@synthesize alternativeTextColor=_alternativeTextColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedAlternativeTextColor;                      //@synthesize highlightedAlternativeTextColor=_highlightedAlternativeTextColor - In the implementation block
@property (nonatomic,retain) UIColor * candidateNumberColor;                                 //@synthesize candidateNumberColor=_candidateNumberColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedCandidateNumberColor;                      //@synthesize highlightedCandidateNumberColor=_highlightedCandidateNumberColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                      //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * cellBackgroundColor;                                  //@synthesize cellBackgroundColor=_cellBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * arrowButtonBackgroundColor;                           //@synthesize arrowButtonBackgroundColor=_arrowButtonBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * gridBackgroundColor;                                  //@synthesize gridBackgroundColor=_gridBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedBackgroundColor;                           //@synthesize highlightedBackgroundColor=_highlightedBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedRowBackgroundColor;                        //@synthesize highlightedRowBackgroundColor=_highlightedRowBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * transliterationCandidateBackgroundColor;              //@synthesize transliterationCandidateBackgroundColor=_transliterationCandidateBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * groupHeaderBackgroundColor;                           //@synthesize groupHeaderBackgroundColor=_groupHeaderBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * lineColor;                                            //@synthesize lineColor=_lineColor - In the implementation block
@property (nonatomic,retain) UIColor * sortControlColor;                                     //@synthesize sortControlColor=_sortControlColor - In the implementation block
@property (nonatomic,retain) UIColor * sortControlBackgroundColor;                           //@synthesize sortControlBackgroundColor=_sortControlBackgroundColor - In the implementation block
@property (nonatomic,copy) NSString * arrowButtonImageName;                                  //@synthesize arrowButtonImageName=_arrowButtonImageName - In the implementation block
@property (nonatomic,retain) UIImage * cellSeparatorImage;                                   //@synthesize cellSeparatorImage=_cellSeparatorImage - In the implementation block
@property (nonatomic,retain) UIImage * slottedCellSeparatorImage;                            //@synthesize slottedCellSeparatorImage=_slottedCellSeparatorImage - In the implementation block
@property (nonatomic,retain) UIImage * leftEdgeSeparatorImage;                               //@synthesize leftEdgeSeparatorImage=_leftEdgeSeparatorImage - In the implementation block
@property (nonatomic,retain) UIImage * rightEdgeSeparatorImage;                              //@synthesize rightEdgeSeparatorImage=_rightEdgeSeparatorImage - In the implementation block
@property (nonatomic,retain) UIImage * arrowButtonSeparatorImage;                            //@synthesize arrowButtonSeparatorImage=_arrowButtonSeparatorImage - In the implementation block
@property (nonatomic,retain) UIImage * cellBackgroundImage;                                  //@synthesize cellBackgroundImage=_cellBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * highlightedCellBackgroundImage;                       //@synthesize highlightedCellBackgroundImage=_highlightedCellBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * transliterationCandidateBackgroundImage;              //@synthesize transliterationCandidateBackgroundImage=_transliterationCandidateBackgroundImage - In the implementation block
@property (assign,nonatomic) double rowHeight;                                               //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) double arrowButtonHeight;                                       //@synthesize arrowButtonHeight=_arrowButtonHeight - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                            //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) unsigned long long maskedCorners;                               //@synthesize maskedCorners=_maskedCorners - In the implementation block
@property (assign,nonatomic) unsigned long long gridMaskedCorners;                           //@synthesize gridMaskedCorners=_gridMaskedCorners - In the implementation block
@property (assign,nonatomic) double foregroundOpacity;                                       //@synthesize foregroundOpacity=_foregroundOpacity - In the implementation block
@property (assign,nonatomic) double backgroundOpacity;                                       //@synthesize backgroundOpacity=_backgroundOpacity - In the implementation block
@property (assign,nonatomic) BOOL doNotClipToBounds;                                         //@synthesize doNotClipToBounds=_doNotClipToBounds - In the implementation block
@property (assign,nonatomic) long long layoutOrientation;                                    //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long columnsCount;                                //@synthesize columnsCount=_columnsCount - In the implementation block
@property (assign,nonatomic) unsigned long long maxNumberOfProactiveCells;                   //@synthesize maxNumberOfProactiveCells=_maxNumberOfProactiveCells - In the implementation block
@property (assign,nonatomic) double minimumCellPadding;                                      //@synthesize minimumCellPadding=_minimumCellPadding - In the implementation block
@property (assign,nonatomic) double minimumCellWidth;                                        //@synthesize minimumCellWidth=_minimumCellWidth - In the implementation block
@property (assign,nonatomic) double singleSlottedCellMargin;                                 //@synthesize singleSlottedCellMargin=_singleSlottedCellMargin - In the implementation block
@property (assign,nonatomic) UIEdgeInsets extraCellPadding;                                  //@synthesize extraCellPadding=_extraCellPadding - In the implementation block
@property (assign,nonatomic) UIEdgeInsets arrowButtonPadding;                                //@synthesize arrowButtonPadding=_arrowButtonPadding - In the implementation block
@property (assign,nonatomic) UIEdgeInsets gridPadding;                                       //@synthesize gridPadding=_gridPadding - In the implementation block
@property (assign,nonatomic) UIEdgeInsets gridLinePadding;                                   //@synthesize gridLinePadding=_gridLinePadding - In the implementation block
@property (assign,nonatomic) CGPoint gridLineOffset;                                         //@synthesize gridLineOffset=_gridLineOffset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sortControlPadding;                                //@synthesize sortControlPadding=_sortControlPadding - In the implementation block
@property (assign,nonatomic) long long cellTextAlignment;                                    //@synthesize cellTextAlignment=_cellTextAlignment - In the implementation block
@property (assign,nonatomic) long long alternativeTextAlignment;                             //@synthesize alternativeTextAlignment=_alternativeTextAlignment - In the implementation block
@property (assign,nonatomic) BOOL darkBackdrop;                                              //@synthesize darkBackdrop=_darkBackdrop - In the implementation block
@property (assign,nonatomic) BOOL scrollDisabled;                                            //@synthesize scrollDisabled=_scrollDisabled - In the implementation block
@property (assign,nonatomic) BOOL showsIndex;                                                //@synthesize showsIndex=_showsIndex - In the implementation block
@property (assign,nonatomic) BOOL fillGridWithLines;                                         //@synthesize fillGridWithLines=_fillGridWithLines - In the implementation block
@property (assign,nonatomic) BOOL dontSelectLastItemByBackwardMoving;                        //@synthesize dontSelectLastItemByBackwardMoving=_dontSelectLastItemByBackwardMoving - In the implementation block
@property (assign,nonatomic) BOOL showOneMoreCandidate;                                      //@synthesize showOneMoreCandidate=_showOneMoreCandidate - In the implementation block
@property (assign,nonatomic) BOOL disableSwitchingSortingMethodByTabKey;                     //@synthesize disableSwitchingSortingMethodByTabKey=_disableSwitchingSortingMethodByTabKey - In the implementation block
@property (assign,nonatomic) BOOL skipInlineCandidate;                                       //@synthesize skipInlineCandidate=_skipInlineCandidate - In the implementation block
@property (assign,nonatomic) BOOL hidesPartialCandidates;                                    //@synthesize hidesPartialCandidates=_hidesPartialCandidates - In the implementation block
@property (assign,nonatomic) long long minimumNumberOfCandidates;                            //@synthesize minimumNumberOfCandidates=_minimumNumberOfCandidates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)darkKeyboardStyleForDisambiguation;
+(id)lightKeyboardStyleForDisambiguation;
+(id)onePixelImageWithColor:(id)arg1 ;
+(id)cacLightStyle;
+(id)cacDarkStyle;
+(id)defaultLightKeyboardStyle;
+(id)defaultDarkKeyboardStyle;
+(id)lightTVStyle;
-(long long)layoutOrientation;
-(void)setLayoutOrientation:(long long)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setMaskedCorners:(unsigned long long)arg1 ;
-(double)cornerRadius;
-(UIColor *)textColor;
-(double)rowHeight;
-(void)setRowHeight:(double)arg1 ;
-(unsigned long long)maskedCorners;
-(UIImage *)arrowButtonSeparatorImage;
-(void)setRightEdgeSeparatorImage:(UIImage *)arg1 ;
-(void)setScrollDisabled:(BOOL)arg1 ;
-(void)setArrowButtonPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)gridPadding;
-(void)setGridPadding:(UIEdgeInsets)arg1 ;
-(void)setGridLinePadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)sortControlPadding;
-(void)setSortControlPadding:(UIEdgeInsets)arg1 ;
-(double)minimumCellPadding;
-(void)setForegroundOpacity:(double)arg1 ;
-(void)setBackgroundOpacity:(double)arg1 ;
-(UIFont *)candidateFont;
-(unsigned long long)maxNumberOfProactiveCells;
-(double)singleSlottedCellMargin;
-(UIEdgeInsets)extraCellPadding;
-(void)setCandidateFont:(UIFont *)arg1 ;
-(void)setMaxNumberOfProactiveCells:(unsigned long long)arg1 ;
-(void)setArrowButtonImageName:(NSString *)arg1 ;
-(UIColor *)highlightedBackgroundColor;
-(void)setExtraCellPadding:(UIEdgeInsets)arg1 ;
-(void)setArrowButtonSeparatorImage:(UIImage *)arg1 ;
-(void)setSlottedCellSeparatorImage:(UIImage *)arg1 ;
-(void)setHighlightedCellBackgroundImage:(UIImage *)arg1 ;
-(void)setColumnsCount:(unsigned long long)arg1 ;
-(void)setGroupHeaderBackgroundColor:(UIColor *)arg1 ;
-(void)setShowsIndex:(BOOL)arg1 ;
-(void)setGridMaskedCorners:(unsigned long long)arg1 ;
-(void)setGridLineOffset:(CGPoint)arg1 ;
-(void)setDoNotClipToBounds:(BOOL)arg1 ;
-(void)setArrowButtonBackgroundColor:(UIColor *)arg1 ;
-(void)setGridBackgroundColor:(UIColor *)arg1 ;
-(void)setSortControlBackgroundColor:(UIColor *)arg1 ;
-(void)setMinimumCellWidth:(double)arg1 ;
-(void)setMinimumCellPadding:(double)arg1 ;
-(void)setSingleSlottedCellMargin:(double)arg1 ;
-(void)setLeftEdgeSeparatorImage:(UIImage *)arg1 ;
-(void)setLineColor:(UIColor *)arg1 ;
-(void)setHighlightedBackgroundColor:(UIColor *)arg1 ;
-(void)setHighlightedRowBackgroundColor:(UIColor *)arg1 ;
-(void)setCandidateNumberColor:(UIColor *)arg1 ;
-(void)setAlternativeTextColor:(UIColor *)arg1 ;
-(void)setSortControlColor:(UIColor *)arg1 ;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(void)setHighlightedCandidateNumberColor:(UIColor *)arg1 ;
-(void)setHighlightedAlternativeTextColor:(UIColor *)arg1 ;
-(UIFont *)alternativeTextFont;
-(void)setAlternativeTextFont:(UIFont *)arg1 ;
-(UIFont *)annotationTextFont;
-(void)setAnnotationTextFont:(UIFont *)arg1 ;
-(void)setCellTextAlignment:(long long)arg1 ;
-(void)setFillGridWithLines:(BOOL)arg1 ;
-(void)setArrowButtonHeight:(double)arg1 ;
-(void)setDontSelectLastItemByBackwardMoving:(BOOL)arg1 ;
-(void)setShowOneMoreCandidate:(BOOL)arg1 ;
-(void)setDisableSwitchingSortingMethodByTabKey:(BOOL)arg1 ;
-(void)setTransliterationCandidateBackgroundColor:(UIColor *)arg1 ;
-(void)setHidesPartialCandidates:(BOOL)arg1 ;
-(void)setSkipInlineCandidate:(BOOL)arg1 ;
-(void)setMinimumNumberOfCandidates:(long long)arg1 ;
-(void)setCellBackgroundColor:(UIColor *)arg1 ;
-(UIImage *)leftEdgeSeparatorImage;
-(UIColor *)alternativeTextColor;
-(UIColor *)candidateNumberColor;
-(UIColor *)highlightedTextColor;
-(UIFont *)candidateNumberFont;
-(UIFont *)sortControlFont;
-(UIColor *)highlightedAlternativeTextColor;
-(UIColor *)highlightedCandidateNumberColor;
-(UIColor *)cellBackgroundColor;
-(UIColor *)arrowButtonBackgroundColor;
-(UIColor *)gridBackgroundColor;
-(UIColor *)highlightedRowBackgroundColor;
-(UIColor *)transliterationCandidateBackgroundColor;
-(UIColor *)groupHeaderBackgroundColor;
-(UIColor *)lineColor;
-(UIColor *)sortControlColor;
-(UIColor *)sortControlBackgroundColor;
-(NSString *)arrowButtonImageName;
-(UIImage *)cellSeparatorImage;
-(UIImage *)slottedCellSeparatorImage;
-(UIImage *)rightEdgeSeparatorImage;
-(UIImage *)cellBackgroundImage;
-(UIImage *)highlightedCellBackgroundImage;
-(UIImage *)transliterationCandidateBackgroundImage;
-(double)arrowButtonHeight;
-(unsigned long long)gridMaskedCorners;
-(double)foregroundOpacity;
-(double)backgroundOpacity;
-(BOOL)doNotClipToBounds;
-(unsigned long long)columnsCount;
-(double)minimumCellWidth;
-(UIEdgeInsets)arrowButtonPadding;
-(UIEdgeInsets)gridLinePadding;
-(CGPoint)gridLineOffset;
-(long long)cellTextAlignment;
-(BOOL)darkBackdrop;
-(BOOL)scrollDisabled;
-(BOOL)showsIndex;
-(BOOL)fillGridWithLines;
-(BOOL)dontSelectLastItemByBackwardMoving;
-(BOOL)showOneMoreCandidate;
-(BOOL)disableSwitchingSortingMethodByTabKey;
-(BOOL)skipInlineCandidate;
-(BOOL)hidesPartialCandidates;
-(long long)minimumNumberOfCandidates;
-(void)setCandidateNumberFont:(UIFont *)arg1 ;
-(void)setSortControlFont:(UIFont *)arg1 ;
-(void)setCellSeparatorImage:(UIImage *)arg1 ;
-(void)setCellBackgroundImage:(UIImage *)arg1 ;
-(void)setDarkBackdrop:(BOOL)arg1 ;
-(void)setTransliterationCandidateBackgroundImage:(UIImage *)arg1 ;
-(long long)alternativeTextAlignment;
-(void)setAlternativeTextAlignment:(long long)arg1 ;
@end

