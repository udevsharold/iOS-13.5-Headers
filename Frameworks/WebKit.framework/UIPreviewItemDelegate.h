/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIPreviewItemDelegate <NSObject>
@optional
-(BOOL)_interactionShouldBeginFromPreviewItemController:(id)arg1 forPosition:(CGPoint)arg2;
-(void)_interactionStartedFromPreviewItemController:(id)arg1;
-(void)_interactionStoppedFromPreviewItemController:(id)arg1;
-(id)_presentedViewControllerForPreviewItemController:(id)arg1;
-(void)_previewItemController:(id)arg1 willPresentPreview:(id)arg2 forPosition:(CGPoint)arg3 inSourceView:(id)arg4;
-(void)_previewItemController:(id)arg1 didDismissPreview:(id)arg2 committing:(BOOL)arg3;
-(void)_previewItemController:(id)arg1 commitPreview:(id)arg2;
-(void)_previewItemControllerDidCancelPreview:(id)arg1;
-(id)_presentationSnapshotForPreviewItemController:(id)arg1;
-(id)_presentationRectsForPreviewItemController:(id)arg1;
-(CGRect*)_presentationRectForPreviewItemController:(id)arg1;

@required
-(id)_dataForPreviewItemController:(id)arg1 atPosition:(CGPoint)arg2 type:(long long*)arg3;

@end

