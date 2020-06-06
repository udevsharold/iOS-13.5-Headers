/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OCDDocument.h>

@class WDStyleSheet, WDFontTable, WDListDefinitionTable, WDRevisionAuthorTable, WDCitationTable, WDListTable, NSMutableArray, WDText, NSString, NSDate, OADBackground, NSMutableSet, OADColorMap;

@interface WDDocument : OCDDocument {

	WDStyleSheet* mStyleSheet;
	WDFontTable* mFontTable;
	WDListDefinitionTable* mListDefinitionTable;
	WDRevisionAuthorTable* mRevisionAuthorTable;
	WDCitationTable* mCitationTable;
	WDListTable* mListTable;
	NSMutableArray* mSections;
	unsigned short mDefaultTabWidth;
	WDText* mImageBulletText;
	WDText* mFootnoteSeparator;
	WDText* mFootnoteContinuationSeparator;
	WDText* mFootnoteContinuationNotice;
	WDText* mEndnoteSeparator;
	WDText* mEndnoteContinuationSeparator;
	WDText* mEndnoteContinuationNotice;
	int mFootnoteNumberFormat;
	int mEndnoteNumberFormat;
	int mFootnotePosition;
	int mEndnotePosition;
	int mFootnoteRestart;
	int mEndnoteRestart;
	unsigned short mFootnoteNumberingStart;
	int mGutterPosition;
	NSString* mOleFilename;
	NSString* mKinsokuAltBreakBefore;
	NSString* mKinsokuAltBreakAfter;
	short mZoomPercentage;
	NSString* mVersion;
	NSString* mLanguage;
	unsigned mMirrorMargins : 1;
	unsigned mBorderSurroundHeader : 1;
	unsigned mBorderSurroundFooter : 1;
	unsigned mKinsokuStrict : 1;
	unsigned mAutoHyphenate : 1;
	unsigned mEvenAndOddHeaders : 1;
	unsigned mBookFold : 1;
	unsigned mShowMarkup : 1;
	unsigned mShowComments : 1;
	unsigned mTrackChanges : 1;
	unsigned mShowRevisionMarksOnScreen : 1;
	unsigned mShowInsertionsAndDeletions : 1;
	unsigned mShowFormatting : 1;
	unsigned mShowOutline : 1;
	unsigned mNoTabForHangingIndents : 1;
	NSMutableArray* mDocumentImages;
	NSMutableArray* mChangeTrackingEditDates;
	NSMutableArray* mChangeTrackingEditAuthors;
	NSDate* mCreationDate;
	NSDate* mModificationDate;
	NSMutableArray* mImageBullets;
	OADBackground* mDocumentBackground;
	NSMutableSet* mObjPointers;
	OADColorMap* mColorMap;

}
-(id)init;
-(id)description;
-(id)version;
-(void)setVersion:(id)arg1 ;
-(id)creationDate;
-(void)setCreationDate:(id)arg1 ;
-(id)language;
-(void)setLanguage:(id)arg1 ;
-(id)sections;
-(id)addSection;
-(id)lastModDate;
-(void)setLastModDate:(id)arg1 ;
-(BOOL)trackChanges;
-(void)setTrackChanges:(BOOL)arg1 ;
-(unsigned long long)sectionCount;
-(id)colorMap;
-(void)setColorMap:(id)arg1 ;
-(id)styleSheet;
-(id)lastSection;
-(id)applicationName;
-(unsigned short)defaultTabWidth;
-(id)sectionAt:(unsigned long long)arg1 ;
-(id)oleFilename;
-(id)listWithListId:(int)arg1 ;
-(id)listTable;
-(id)listDefinitionWithListDefinitionId:(int)arg1 ;
-(id)fontTable;
-(void)setOleFilename:(id)arg1 ;
-(void)setDocumentBackground:(id)arg1 ;
-(id)imageBullets;
-(id)addImageBulletText;
-(id)listDefinitionTable;
-(id)revisionAuthorTable;
-(id)footnoteSeparator;
-(id)footnoteContinuationSeparator;
-(id)footnoteContinuationNotice;
-(id)endnoteSeparator;
-(id)endnoteContinuationSeparator;
-(id)endnoteContinuationNotice;
-(void)setShowRevisionMarksOnScreen:(BOOL)arg1 ;
-(void)setShowInsertionsAndDeletions:(BOOL)arg1 ;
-(void)setShowFormatting:(BOOL)arg1 ;
-(void)setShowMarkup:(BOOL)arg1 ;
-(void)setShowComments:(BOOL)arg1 ;
-(void)setMirrorMargins:(BOOL)arg1 ;
-(void)setBorderSurroundHeader:(BOOL)arg1 ;
-(void)setBorderSurroundFooter:(BOOL)arg1 ;
-(void)setDefaultTabWidth:(unsigned short)arg1 ;
-(void)setAutoHyphenate:(BOOL)arg1 ;
-(void)setEvenAndOddHeaders:(BOOL)arg1 ;
-(void)setFootnotePosition:(int)arg1 ;
-(void)setEndnotePosition:(int)arg1 ;
-(void)setFootnoteNumberFormat:(int)arg1 ;
-(void)setEndnoteNumberFormat:(int)arg1 ;
-(void)setFootnoteRestart:(int)arg1 ;
-(void)setEndnoteRestart:(int)arg1 ;
-(void)setFootnoteNumberingStart:(unsigned short)arg1 ;
-(void)setGutterPosition:(int)arg1 ;
-(void)setBookFold:(BOOL)arg1 ;
-(void)setNoTabForHangingIndents:(BOOL)arg1 ;
-(void)setZoomPercentage:(short)arg1 ;
-(void)setShowOutline:(BOOL)arg1 ;
-(void)setKinsokuStrict:(BOOL)arg1 ;
-(void)setKinsokuAltBreakAfter:(id)arg1 ;
-(void)setKinsokuAltBreakBefore:(id)arg1 ;
-(void)addChangeTrackingEditAtDate:(id)arg1 authorIndex:(int)arg2 ;
-(id)citationFor:(id)arg1 ;
-(void)addCitation:(id)arg1 forID:(id)arg2 ;
-(id)listDefinitionWithListId:(int)arg1 ;
-(id)imageBulletParagraph;
-(id)newSectionIterator;
-(id)newMainBlocksIterator;
-(id)newMainRunsIterator;
-(id)newFootnoteIterator;
-(id)newEndnoteIterator;
-(id)newAnnotationIterator;
-(id)newFootnoteBlockIterator;
-(id)newEndnoteBlockIterator;
-(id)newAnnotationBlockIterator;
-(void)addObjPointer:(id)arg1 ;
-(void)removeObjPointer:(id)arg1 ;
-(BOOL)mirrorMargins;
-(BOOL)borderSurroundHeader;
-(BOOL)borderSurroundFooter;
-(id)kinsokuAltBreakBefore;
-(id)kinsokuAltBreakAfter;
-(BOOL)kinsokuStrict;
-(BOOL)autoHyphenate;
-(BOOL)evenAndOddHeaders;
-(int)footnoteNumberFormat;
-(int)endnoteNumberFormat;
-(int)footnotePosition;
-(int)endnotePosition;
-(int)footnoteRestart;
-(int)endnoteRestart;
-(unsigned short)footnoteNumberingStart;
-(unsigned long long)citationCount;
-(id)citationTable;
-(id)listLevelWithListId:(int)arg1 levelIndex:(unsigned char)arg2 ;
-(int)gutterPosition;
-(BOOL)bookFold;
-(short)zoomPercentage;
-(id)imageBulletWithCharacterOffset:(int)arg1 ;
-(void)addImageBullets;
-(unsigned long long)revisionAuthorCount;
-(id)revisionAuthorAt:(unsigned long long)arg1 ;
-(unsigned long long)revisionAuthorAddLookup:(id)arg1 ;
-(void)addRevisionAuthor:(id)arg1 ;
-(BOOL)showMarkup;
-(BOOL)showComments;
-(BOOL)showRevisionMarksOnScreen;
-(BOOL)showInsertionsAndDeletions;
-(BOOL)showFormatting;
-(BOOL)showOutline;
-(BOOL)noTabForHangingIndents;
-(id)changeTrackingEditDates;
-(id)changeTrackingEditAuthors;
-(id)imageBulletText;
-(id)documentBackground;
-(void)removeEmptySections;
-(id)sectionIterator;
-(id)mainBlocksIterator;
-(id)mainRunsIterator;
-(id)footnoteIterator;
-(id)endnoteIterator;
-(id)annotationIterator;
-(id)footnoteBlockIterator;
-(id)endnoteBlockIterator;
-(id)annotationBlockIterator;
-(BOOL)isFromBinary;
@end

