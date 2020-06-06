/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKit/UIDragInteractionDelegate.h>

@protocol SXDragManagerDataSource;
@class UIDragInteraction, NSString;

@interface SXDragManager : NSObject <UIDragInteractionDelegate> {

	BOOL _enabled;
	id<SXDragManagerDataSource> _dataSource;
	unsigned long long _sharingPolicy;
	UIDragInteraction* _dragInteraction;

}

@property (nonatomic,readonly) unsigned long long sharingPolicy;                         //@synthesize sharingPolicy=_sharingPolicy - In the implementation block
@property (nonatomic,readonly) UIDragInteraction * dragInteraction;                      //@synthesize dragInteraction=_dragInteraction - In the implementation block
@property (assign,nonatomic,__weak) id<SXDragManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                               //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id<SXDragManagerDataSource>)dataSource;
-(void)setDataSource:(id<SXDragManagerDataSource>)arg1 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3 ;
-(id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4 ;
-(UIDragInteraction *)dragInteraction;
-(unsigned long long)sharingPolicy;
-(id)initWithSharingPolicy:(unsigned long long)arg1 dataSource:(id)arg2 ;
-(void)updateAccessibilityDragSourceDescriptorsForDraggableElement:(id)arg1 ;
-(id)itemsForSession:(id)arg1 atLocation:(CGPoint)arg2 ;
-(id)dragItemForObject:(id)arg1 withSession:(id)arg2 ;
-(BOOL)dragSession:(id)arg1 containsDragItemWithIdentifier:(id)arg2 ;
@end

