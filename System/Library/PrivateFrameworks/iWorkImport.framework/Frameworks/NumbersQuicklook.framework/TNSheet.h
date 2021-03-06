/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/NumbersQuicklook.framework/NumbersQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NumbersQuicklook/NumbersQuicklook-Structs.h>
#import <TSReading/TSPObject.h>
#import <libobjc.A.dylib/TNPrintableInfoProviding.h>
#import <libobjc.A.dylib/TSKDocumentObject.h>
#import <libobjc.A.dylib/TSKModel.h>
#import <libobjc.A.dylib/TSCEResolverContainer.h>
#import <libobjc.A.dylib/TSDDrawableContainerInfo.h>
#import <libobjc.A.dylib/TSDMutableContainerInfo.h>
#import <libobjc.A.dylib/TSSStyleClient.h>
#import <libobjc.A.dylib/TSWPHeaderFooterProvider.h>
#import <libobjc.A.dylib/TSWPStorageParent.h>

@class NSArray, NSString, NSEnumerator, TSKDocumentRoot, NSMutableArray, TSWPStorage, NSMutableSet, TNSheetStyle, TSDLayoutController, TNDocumentRoot, TSDColorFill, TSDInfoGeometry;

@interface TNSheet : TSPObject <TNPrintableInfoProviding, TSKDocumentObject, TSKModel, TSCEResolverContainer, TSDDrawableContainerInfo, TSDMutableContainerInfo, TSSStyleClient, TSWPHeaderFooterProvider, TSWPStorageParent> {

	NSString* mName;
	NSMutableArray* mChildInfos;
	BOOL mInDocument;
	unsigned mTableNameCounter;
	TSWPStorage* mHeaderFooters[2][3];
	NSMutableSet* mRemappedTableNames;
	BOOL _printBackgrounds;
	BOOL mInPortraitPageOrientation;
	BOOL mShowPageNumbers;
	BOOL mIsAutofitOn;
	BOOL _usingStartPageNumber;
	BOOL mUsesSingleHeaderFooter;
	BOOL _shouldPrintComments;
	unsigned long long _layoutDirection;
	double mContentScale;
	unsigned long long mPageOrder;
	long long _startPageNumber;
	double _pageHeaderInset;
	double _pageFooterInset;
	TNSheetStyle* _style;
	TSDLayoutController* _activeRootSearchLayoutController;
	UIEdgeInsets _printMargins;

}

@property (nonatomic,readonly) TNDocumentRoot * documentRoot; 
@property (assign,nonatomic) unsigned long long layoutDirection;                                       //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (assign,nonatomic) BOOL printBackgrounds;                                                    //@synthesize printBackgrounds=_printBackgrounds - In the implementation block
@property (assign,nonatomic) BOOL usesSingleHeaderFooter; 
@property (nonatomic,readonly) NSArray * headerStorages; 
@property (nonatomic,readonly) NSArray * footerStorages; 
@property (nonatomic,readonly) NSArray * printableInfos; 
@property (nonatomic,retain) TNSheetStyle * style;                                                     //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) TSDColorFill * backgroundColor; 
@property (nonatomic,retain) TSDLayoutController * activeRootSearchLayoutController;                   //@synthesize activeRootSearchLayoutController=_activeRootSearchLayoutController - In the implementation block
@property (assign,nonatomic) UIEdgeInsets printMargins;                                                //@synthesize printMargins=_printMargins - In the implementation block
@property (assign,nonatomic) BOOL inPortraitPageOrientation; 
@property (assign,nonatomic) BOOL showPageNumbers; 
@property (assign,nonatomic) BOOL shouldPrintComments;                                                 //@synthesize shouldPrintComments=_shouldPrintComments - In the implementation block
@property (assign,nonatomic) BOOL isAutofitOn; 
@property (assign,nonatomic) double contentScale; 
@property (assign) unsigned long long pageOrder; 
@property (getter=isUsingStartPageNumber) BOOL usingStartPageNumber;                                   //@synthesize usingStartPageNumber=_usingStartPageNumber - In the implementation block
@property (assign) long long startPageNumber;                                                          //@synthesize startPageNumber=_startPageNumber - In the implementation block
@property (assign) double pageHeaderInset;                                                             //@synthesize pageHeaderInset=_pageHeaderInset - In the implementation block
@property (assign) double pageFooterInset;                                                             //@synthesize pageFooterInset=_pageFooterInset - In the implementation block
@property (nonatomic,copy) NSArray * childInfos; 
@property (nonatomic,copy) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSEnumerator * headerFooterFragmentEnumerator; 
@property (nonatomic,readonly) double bodyWidth; 
@property (assign,nonatomic) BOOL matchesObjectPlaceholderGeometry; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDContainerInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
@property (nonatomic,readonly) BOOL isMaster; 
@property (nonatomic,readonly) BOOL isTopmostContainerInfo; 
@property (nonatomic,readonly) NSArray * containedModels; 
@property (nonatomic,readonly) BOOL autoListRecognition; 
@property (nonatomic,readonly) BOOL autoListTermination; 
@property (nonatomic,readonly) BOOL textIsLinked; 
@property (nonatomic,readonly) BOOL preventsComments; 
@property (nonatomic,readonly) BOOL preventsChangeTracking; 
@property (nonatomic,readonly) BOOL supportsMultipleColumns; 
@property (nonatomic,readonly) long long contentWritingDirection; 
@property (nonatomic,readonly) BOOL storageChangesInvalidateWrap; 
@property (nonatomic,readonly) BOOL supportsDropCapsInChildStorages; 
+(BOOL)needsObjectUUID;
+(id)sheetForSelectionModel:(id)arg1 outIsPaginated:(BOOL*)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(TNSheetStyle *)style;
-(void)setStyle:(TNSheetStyle *)arg1 ;
-(CGRect)frame;
-(id)initWithContext:(id)arg1 ;
-(BOOL)isSelectable;
-(TSDColorFill *)backgroundColor;
-(unsigned long long)layoutDirection;
-(void)setLayoutDirection:(unsigned long long)arg1 ;
-(double)contentScale;
-(void)setContentScale:(double)arg1 ;
-(TSDInfoGeometry *)geometry;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
-(Class)layoutClass;
-(id)childEnumerator;
-(id)copyWithContext:(id)arg1 ;
-(TNDocumentRoot *)documentRoot;
-(void)setParentInfo:(NSObject*<TSDContainerInfo>)arg1 ;
-(void)acceptVisitor:(id)arg1 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg1 ;
-(Class)repClass;
-(BOOL)isThemeContent;
-(NSObject*<TSDContainerInfo>)parentInfo;
-(TSPObject*<TSDOwningAttachment>)owningAttachment;
-(void)setOwningAttachment:(TSPObject*<TSDOwningAttachment>)arg1 ;
-(TSPObject*<TSDOwningAttachment>)owningAttachmentNoRecurse;
-(BOOL)isFloatingAboveText;
-(BOOL)isAnchoredToText;
-(BOOL)isInlineWithText;
-(BOOL)isAttachedToBodyText;
-(NSArray *)childInfos;
-(void)setChildInfos:(NSArray *)arg1 ;
-(id)referencedStyles;
-(void)replaceReferencedStylesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)textIsVerticalAtCharIndex:(unsigned long long)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)addChildInfo:(id)arg1 ;
-(void)insertChildInfo:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertChildInfo:(id)arg1 below:(id)arg2 ;
-(void)insertChildInfo:(id)arg1 above:(id)arg2 ;
-(void)moveChildren:(id)arg1 toIndexes:(id)arg2 ;
-(void)removeChildInfo:(id)arg1 ;
-(void)replaceChildInfo:(id)arg1 with:(id)arg2 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(BOOL)autoListRecognition;
-(BOOL)autoListTermination;
-(long long)contentWritingDirection;
-(BOOL)shouldBeDisplayed;
-(BOOL)layoutIsLeftToRight;
-(double)bodyWidth;
-(void)setPrimitiveGeometry:(id)arg1 ;
-(void)loadFromArchive:(const SheetArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(SheetArchive*)arg1 archiver:(id)arg2 ;
-(double)highestScaleFactorForRenderingDrawableInfo:(id)arg1 ;
-(void)insertContainedModel:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeContainedModel:(id)arg1 ;
-(void)moveModel:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(NSArray *)containedModels;
-(BOOL)canMoveDrawables:(id)arg1 toIndexes:(id)arg2 ;
-(id)infoForSelectionPath:(id)arg1 ;
-(id)resolverMatchingName:(id)arg1 ;
-(id)resolversMatchingPrefix:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(BOOL)resolverNameIsUsed:(id)arg1 ;
-(unsigned)nextUntitledResolverIndex;
-(unsigned)saveNextUntitledResolverIndex;
-(void)rollbackNextUntitledResolverIndex:(unsigned)arg1 ;
-(void)addRemappedTableName:(id)arg1 ;
-(id)remappedTableNames;
-(void)clearRemappedTableNames;
-(BOOL)textIsLinked;
-(BOOL)preventsComments;
-(BOOL)preventsChangeTracking;
-(BOOL)supportsMultipleColumns;
-(void)p_setupHeadersFooters;
-(id)initWithContext:(id)arg1 suppressingHeaderFooterCreation:(BOOL)arg2 ;
-(void)p_createHeadersFooters:(long long)arg1 stylesheet:(id)arg2 mayAlreadyExist:(BOOL)arg3 ;
-(id)headerFooter:(long long)arg1 fragmentAtIndex:(long long)arg2 ;
-(UIEdgeInsets)printMargins;
-(id)p_newHeaderFooterStorageWithStylesheet:(id)arg1 ;
-(id)p_storagesForHeaderType:(long long)arg1 ;
-(BOOL)shouldPrintComments;
-(id)printableInfosIncludingComments:(BOOL)arg1 ;
-(void)insertDrawableInfos:(id)arg1 atIndex:(unsigned long long)arg2 context:(id)arg3 ;
-(id)tableInfos;
-(NSArray *)footerStorages;
-(NSArray *)headerStorages;
-(void)p_dolcDispatch:(id)arg1 skippingTextBoxes:(BOOL)arg2 ;
-(void)insertDrawableInfo:(id)arg1 atIndex:(unsigned long long)arg2 context:(id)arg3 ;
-(void)moveDrawables:(id)arg1 toIndexes:(id)arg2 ;
-(void)removeDrawableInfo:(id)arg1 ;
-(void)enumerateHeaderFooterStoragesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isUsingStartPageNumber;
-(long long)startPageNumber;
-(double)pageHeaderInset;
-(double)pageFooterInset;
-(BOOL)printBackgrounds;
-(long long)headerFooterTypeForModel:(id)arg1 ;
-(long long)headerFragmentIndexForModel:(id)arg1 ;
-(BOOL)isHeaderFooterEmpty:(long long)arg1 ;
-(BOOL)isHeaderFooterEmpty:(long long)arg1 fragmentAtIndex:(long long)arg2 ;
-(BOOL)usesSingleHeaderFooter;
-(NSEnumerator *)headerFooterFragmentEnumerator;
-(BOOL)layoutIsRightToLeft;
-(BOOL)inPortraitPageOrientation;
-(BOOL)showPageNumbers;
-(BOOL)isAutofitOn;
-(unsigned long long)pageOrder;
-(NSArray *)printableInfos;
-(void)setInPortraitPageOrientation:(BOOL)arg1 ;
-(void)setShowPageNumbers:(BOOL)arg1 ;
-(void)setIsAutofitOn:(BOOL)arg1 ;
-(void)setPageOrder:(unsigned long long)arg1 ;
-(void)setUsingStartPageNumber:(BOOL)arg1 ;
-(void)setStartPageNumber:(long long)arg1 ;
-(void)setPageHeaderInset:(double)arg1 ;
-(void)setPageFooterInset:(double)arg1 ;
-(void)setShouldPrintComments:(BOOL)arg1 ;
-(void)setUsesSingleHeaderFooter:(BOOL)arg1 ;
-(void)setPrintMargins:(UIEdgeInsets)arg1 ;
-(void)insertDrawableInfo:(id)arg1 context:(id)arg2 ;
-(void)insertDrawableInfos:(id)arg1 context:(id)arg2 ;
-(void)removeDrawableInfos:(id)arg1 ;
-(id)chartAndTableInfos;
-(id)chartInfos;
-(id)tableInfoForName:(id)arg1 caseSensitive:(BOOL)arg2 ;
-(BOOL)hasReferenceToTables:(id)arg1 ;
-(BOOL)isForm;
-(void)i_importHeadersFooters:(id)arg1 headerType:(long long)arg2 useSingleHeaderFooter:(BOOL)arg3 ;
-(id)i_newHeaderFooterStorage;
-(CGColorRef)printingBackgroundCGColor;
-(void)setPrintBackgrounds:(BOOL)arg1 ;
-(TSDLayoutController *)activeRootSearchLayoutController;
-(void)setActiveRootSearchLayoutController:(TSDLayoutController *)arg1 ;
@end

