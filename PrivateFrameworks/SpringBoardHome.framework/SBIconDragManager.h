/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/SBIconListViewDragObserver.h>

@class NSMapTable, NSMutableDictionary, NSHashTable, SBHIconManager, SBIconDraggingEditContext, NSString;

@interface SBIconDragManager : NSObject <SBIconListViewDragObserver> {

	NSMapTable* _iconDrags;
	NSMapTable* _uniqueIdentifiersPerDropSession;
	NSMapTable* _uniqueIdentifiersPerDragSession;
	NSMutableDictionary* _revertingReplacementIndexPaths;
	NSHashTable* _platterViews;
	SBHIconManager* _iconManager;
	SBIconDraggingEditContext* _draggingEditContext;

}

@property (nonatomic,retain) SBIconDraggingEditContext * draggingEditContext;                                                  //@synthesize draggingEditContext=_draggingEditContext - In the implementation block
@property (assign,nonatomic,__weak) SBHIconManager * iconManager;                                                              //@synthesize iconManager=_iconManager - In the implementation block
@property (getter=isIconDragging,nonatomic,readonly) BOOL iconDragging; 
@property (getter=isTrackingMultipleIconDrags,nonatomic,readonly) BOOL trackingMultipleIconDrags; 
@property (getter=isTrackingMultipleItemIconDrags,nonatomic,readonly) BOOL trackingMultipleItemIconDrags; 
@property (getter=isTrackingUserActiveIconDrags,nonatomic,readonly) BOOL trackingUserActiveIconDrags; 
@property (getter=isTrackingDroppingIconDrags,nonatomic,readonly) BOOL trackingDroppingIconDrags; 
@property (getter=isTrackingActiveOrDroppingIconDrags,nonatomic,readonly) BOOL trackingActiveOrDroppingIconDrags; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)cancelAllDrags;
+(void)enumerateAppDragContextsInDragItems:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(void)enumerateMedusaPlatterDragPreviewsInDragItems:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)init;
-(NSString *)description;
-(id)model;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBHIconManager *)iconManager;
-(id)rootFolder;
-(BOOL)isIconDragging;
-(BOOL)canHandleIconDropSession:(id)arg1 inIconListView:(id)arg2 ;
-(BOOL)canAcceptDropInSession:(id)arg1 inIconListView:(id)arg2 ;
-(void)iconDropSessionDidEnter:(id)arg1 inIconListView:(id)arg2 ;
-(id)iconDropSessionDidUpdate:(id)arg1 inIconListView:(id)arg2 ;
-(void)iconDropSession:(id)arg1 didPauseAtLocation:(CGPoint)arg2 inIconListView:(id)arg3 ;
-(void)iconDropSessionDidExit:(id)arg1 fromIconListView:(id)arg2 ;
-(void)performIconDrop:(id)arg1 inIconListView:(id)arg2 ;
-(id)iconListView:(id)arg1 previewForDroppingIconDragItem:(id)arg2 proposedPreview:(id)arg3 ;
-(void)iconListView:(id)arg1 iconDragItem:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(BOOL)shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg1 onIconView:(id)arg2 ;
-(void)performSpringLoadedInteractionForIconDragOnIconView:(id)arg1 ;
-(void)noteFolderControllerWillClose:(id)arg1 ;
-(void)noteFolderBeganScrolling;
-(void)iconListView:(id)arg1 concludeIconDrop:(id)arg2 ;
-(void)iconListView:(id)arg1 iconDropSessionDidEnd:(id)arg2 ;
-(id)iconView:(id)arg1 dragPreviewForItem:(id)arg2 session:(id)arg3 previewParameters:(id)arg4 ;
-(BOOL)iconViewCanBeginDrags:(id)arg1 ;
-(void)iconView:(id)arg1 willAnimateDragLiftWithAnimator:(id)arg2 session:(id)arg3 ;
-(void)iconView:(id)arg1 dragLiftAnimationDidChangeDirection:(long long)arg2 ;
-(BOOL)iconView:(id)arg1 canAddDragItemsToSession:(id)arg2 ;
-(void)iconView:(id)arg1 willAddDragItems:(id)arg2 toSession:(id)arg3 ;
-(void)iconViewWillBeginDrag:(id)arg1 session:(id)arg2 ;
-(void)iconView:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3 ;
-(void)iconView:(id)arg1 didEndDragSession:(id)arg2 withOperation:(unsigned long long)arg3 ;
-(id)iconViewWillCancelDrag:(id)arg1 ;
-(void)iconView:(id)arg1 willUsePreviewForCancelling:(id)arg2 targetIconView:(id)arg3 ;
-(void)iconView:(id)arg1 item:(id)arg2 willAnimateDragCancelWithAnimator:(id)arg3 ;
-(void)enumerateIconDragContextsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isTrackingDragMatchingPredicate:(/*^block*/id)arg1 ;
-(void)enumerateIconDragIdentifiersUsingBlock:(/*^block*/id)arg1 ;
-(id)uniqueIdentifierForIconDragSession:(id)arg1 ;
-(id)uniqueIdentifierForIconDropSession:(id)arg1 ;
-(id)iconDragContextForDragWithIdentifier:(id)arg1 ;
-(id)iconDragContextForDropSession:(id)arg1 ;
-(id)iconDragContextForDragSession:(id)arg1 ;
-(void)captureInitialIconStateToDragContext:(id)arg1 ;
-(void)resetWatchdogTimerForDragWithIdentifier:(id)arg1 timeout:(double)arg2 ;
-(void)stopTrackingDragLocationForEditingForDragWithIdentifier:(id)arg1 ;
-(BOOL)replaceAllDragPlaceholdersWithReferencedIcons;
-(BOOL)removeAllDragPlaceholders;
-(void)removeEmptyFolders;
-(void)_cleanUpAllDraggingState;
-(void)compactAndLayoutRootIconLists;
-(void)_stopTrackingDragWithIdentifier:(id)arg1 ;
-(void)watchdogTimerDidFire:(id)arg1 ;
-(void)watchdogDragWithIdentifier:(id)arg1 ;
-(id)appDragLocalContextForDragItem:(id)arg1 ;
-(id)draggedIconForIdentifier:(id)arg1 ;
-(BOOL)removeDragPlaceholdersForDragWithIdentifier:(id)arg1 placeholderPath:(out id*)arg2 ;
-(BOOL)removeAllDragPlaceholdersInFolder:(id)arg1 passingTest:(/*^block*/id)arg2 ;
-(BOOL)replaceDragPlaceholderWithReferencedIcons:(id)arg1 ;
-(BOOL)doesIconViewRepresentRealIconPosition:(id)arg1 ;
-(void)removeEmptyFoldersInFolder:(id)arg1 ;
-(SBIconDraggingEditContext *)draggingEditContext;
-(void)setDraggingEditContext:(SBIconDraggingEditContext *)arg1 ;
-(id)fullIndexPathForRevertingIcon:(id)arg1 context:(id)arg2 ;
-(void)revertLocationForIcon:(id)arg1 toPath:(id)arg2 ;
-(void)compactAndLayoutRootIconListsWithDuration:(double)arg1 ;
-(void)revertDragChangesForDragWithIdentifier:(id)arg1 ;
-(void)updateExistingIconPlaceholderForDragWithIdentifier:(id)arg1 ;
-(void)cancelAllDrags;
-(id)allDragIdentifiers;
-(BOOL)isTrackingUserActiveIconDrags;
-(void)revertActiveDragChanges;
-(BOOL)doesIconLocationRepresentRealIconPosition:(id)arg1 ;
-(BOOL)shouldBeginEditingWhenLiftPreviewBegins;
-(id)_windowForDragPreviews;
-(id)_iconForDragItem:(id)arg1 inIconListView:(id)arg2 ;
-(id)iconIdentifierForDragItem:(id)arg1 ;
-(id)draggedItemIdentifiersForDragDropSession:(id)arg1 ;
-(void)_startTrackingDragWithIdentifier:(id)arg1 ;
-(void)addAppLocalContextsFromDragItems:(id)arg1 session:(id)arg2 toDragWithIdentifier:(id)arg3 ;
-(BOOL)shouldUseGhostIconForIconView:(id)arg1 ;
-(id)_replaceDraggedIconViewWithPlaceholder:(id)arg1 ;
-(void)_stopTrackingDragIfPossibleWithIdentifier:(id)arg1 ;
-(void)changeStateOfDragWithIdentifier:(id)arg1 toState:(long long)arg2 ;
-(BOOL)shouldBeginEditingWhenDragBegins;
-(void)startTrackingDragLocationForEditingFromDropSession:(id)arg1 orDragSession:(id)arg2 ;
-(void)_updateDragPreviewsForEditingState:(BOOL)arg1 ;
-(BOOL)shouldBeginEditingWhenAddingDragItems;
-(void)addPlatterViewToMedusaDragOffscreenWindow:(id)arg1 ;
-(id)firstHiddenIconIdentifierInDrag:(id)arg1 ;
-(void)iconDropSessionDidEnter:(id)arg1 identifier:(id)arg2 draggedIconIdentifiers:(id)arg3 inIconListView:(id)arg4 ;
-(void)_updateDragPreviewIconLabelsForDropSession:(id)arg1 inIconListView:(id)arg2 ;
-(void)_handleScaleAdjustmentForDropSession:(id)arg1 currentListView:(id)arg2 ;
-(void)iconDropSessionWithIdentifier:(id)arg1 draggedIconIdentifiers:(id)arg2 didPauseAtLocation:(CGPoint)arg3 inIconListView:(id)arg4 ;
-(void)removeAllGrabbedIconViews;
-(void)removeIconsWithDraggedIconIdentifiers:(id)arg1 savingOriginsToContext:(id)arg2 ;
-(BOOL)canMakeIconViewRecipient:(id)arg1 ;
-(void)iconDropSessionDidExitWithIdentifier:(id)arg1 fromIconListView:(id)arg2 ;
-(BOOL)removeDragPlaceholdersForDragWithIdentifier:(id)arg1 ;
-(void)replaceAllBouncedIconsInContext:(id)arg1 ;
-(void)performIconDrop:(id)arg1 identifier:(id)arg2 draggedIconIdentifiers:(id)arg3 inIconListView:(id)arg4 ;
-(id)draggedIconsForIdentifiers:(id)arg1 ;
-(unsigned long long)maximumAllowedIconDroppingAnimationsForListView:(id)arg1 ;
-(BOOL)replaceDragPlaceholdersWithReferencedIconsInDragWithIdentifier:(id)arg1 ;
-(void)iconDropSessionDidEnd:(id)arg1 identifier:(id)arg2 draggedIconIdentifiers:(id)arg3 ;
-(id)_iconViewForDragItem:(id)arg1 inIconListView:(id)arg2 ;
-(BOOL)shouldCancelDragsWhenEditingEnds;
-(void)cancelEditingAndAllDrags;
-(void)concludeIconDrop:(id)arg1 ;
-(void)iconDropSessionDidEnd:(id)arg1 ;
-(BOOL)isTrackingMultipleIconDrags;
-(BOOL)isTrackingMultipleItemIconDrags;
-(BOOL)isTrackingDragOfIcon:(id)arg1 ;
-(BOOL)isTrackingDragOriginatingFromIconView:(id)arg1 ;
-(BOOL)isTrackingUserActiveDragOriginatingFromIconView:(id)arg1 ;
-(BOOL)isTrackingDragInUserActiveLiftPreviewOriginatingFromIconView:(id)arg1 ;
-(BOOL)isTrackingDroppingIconDrags;
-(BOOL)isTrackingActiveOrDroppingIconDrags;
-(id)iconDragContextForDragDropSession:(id)arg1 ;
-(BOOL)_isTrackingDrag:(id)arg1 ;
-(BOOL)_isTrackingDragWithIdentifier:(id)arg1 ;
-(BOOL)swapTrackedIconWithIdentifier:(id)arg1 withIcon:(id)arg2 ;
-(void)setIndexPath:(id)arg1 whenRevertingIconsWithPathPrefix:(id)arg2 ;
-(void)noteIconTapped;
-(double)delayAfterAfterLiftPreviewToBeginEditing;
-(void)removePlatterViewFromMedusaDragOffscreenWindow:(id)arg1 ;
-(void)informQuickActionPlatterDidFinishPresentation:(id)arg1 ;
-(void)noteIconManagerEditingDidChange;
-(void)coverSheetWillPresent:(id)arg1 ;
-(void)setIconManager:(SBHIconManager *)arg1 ;
-(id)simulateiconDropSessionDidEnterWithIconIdentifiers:(id)arg1 inIconListView:(id)arg2 ;
-(void)simulateIconDragWithIdentifier:(id)arg1 didPauseAtLocation:(CGPoint)arg2 inIconListView:(id)arg3 ;
-(void)simulatePerformIconDropWithIdentifier:(id)arg1 inIconListView:(id)arg2 ;
-(void)simulateIconDraggingEndedWithIdentifier:(id)arg1 ;
@end

