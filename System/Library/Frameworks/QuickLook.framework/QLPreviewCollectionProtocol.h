/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLPreviewCollectionProtocol
@required
-(void)setIsContentManaged:(BOOL)arg1;
-(void)keyCommandWasPerformed:(id)arg1;
-(void)saveCurrentPreviewEditsSynchronously:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)hostApplicationDidEnterBackground:(BOOL)arg1;
-(void)hostApplicationDidBecomeActive;
-(void)invalidateService;
-(void)preparePreviewCollectionForInvalidationWithCompletionHandler:(/*^block*/id)arg1;
-(void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1;
-(void)setLoadingString:(id)arg1;
-(void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4;
-(void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(BOOL)arg2;
-(void)prepareForActionSheetPresentationWithCompletionHandler:(/*^block*/id)arg1;
-(void)toolbarButtonsForTraitCollection:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)keyCommandsWithCompletionHandler:(/*^block*/id)arg1;
-(void)tearDownTransition:(BOOL)arg1;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2;
-(void)setCurrentPreviewItemIndex:(long long)arg1 animated:(BOOL)arg2;
-(void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(BOOL)arg3 useInteractiveTransition:(BOOL)arg4 completionHandler:(/*^block*/id)arg5;
-(void)toolbarButtonPressedWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

