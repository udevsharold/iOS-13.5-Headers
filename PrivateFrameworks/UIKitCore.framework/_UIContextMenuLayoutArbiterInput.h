/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UITargetedPreview, NSArray;

@interface _UIContextMenuLayoutArbiterInput : NSObject {

	BOOL _shouldUpdateAttachment;
	UITargetedPreview* _sourcePreview;
	NSArray* _accessoryViews;
	CGSize _preferredPreviewSize;
	CGSize _preferredMenuSize;
	UIEdgeInsets _preferredEdgeInsets;

}

@property (assign,nonatomic) BOOL shouldUpdateAttachment;                    //@synthesize shouldUpdateAttachment=_shouldUpdateAttachment - In the implementation block
@property (assign,nonatomic) CGSize preferredPreviewSize;                    //@synthesize preferredPreviewSize=_preferredPreviewSize - In the implementation block
@property (assign,nonatomic) CGSize preferredMenuSize;                       //@synthesize preferredMenuSize=_preferredMenuSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets preferredEdgeInsets;               //@synthesize preferredEdgeInsets=_preferredEdgeInsets - In the implementation block
@property (nonatomic,retain) UITargetedPreview * sourcePreview;              //@synthesize sourcePreview=_sourcePreview - In the implementation block
@property (nonatomic,retain) NSArray * accessoryViews;                       //@synthesize accessoryViews=_accessoryViews - In the implementation block
-(UIEdgeInsets)preferredEdgeInsets;
-(void)setPreferredEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setSourcePreview:(UITargetedPreview *)arg1 ;
-(UITargetedPreview *)sourcePreview;
-(NSArray *)accessoryViews;
-(void)setAccessoryViews:(NSArray *)arg1 ;
-(BOOL)shouldUpdateAttachment;
-(void)setShouldUpdateAttachment:(BOOL)arg1 ;
-(CGSize)preferredPreviewSize;
-(void)setPreferredPreviewSize:(CGSize)arg1 ;
-(CGSize)preferredMenuSize;
-(void)setPreferredMenuSize:(CGSize)arg1 ;
@end

