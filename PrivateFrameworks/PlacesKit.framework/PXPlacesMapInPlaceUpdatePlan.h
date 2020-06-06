/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PXPlacesMapUpdatePlan.h>

@protocol OS_dispatch_semaphore, PXPlacesMapPipelineComponentProvider, PXPlacesMapLayoutResult;
@class NSObject, NSMapTable, NSString;

@interface PXPlacesMapInPlaceUpdatePlan : NSObject <PXPlacesMapUpdatePlan> {

	NSObject*<OS_dispatch_semaphore> _sema;
	id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
	id<PXPlacesMapLayoutResult> _currentLayoutResult;
	NSMapTable* _currentLayoutItemToAnnotationTable;

}

@property (retain) id<PXPlacesMapLayoutResult> currentLayoutResult;                                                  //@synthesize currentLayoutResult=_currentLayoutResult - In the implementation block
@property (retain) NSMapTable * currentLayoutItemToAnnotationTable;                                                  //@synthesize currentLayoutItemToAnnotationTable=_currentLayoutItemToAnnotationTable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; 
-(id)init;
-(void)reset;
-(id<PXPlacesMapPipelineComponentProvider>)pipelineComponentProvider;
-(void)setPipelineComponentProvider:(id<PXPlacesMapPipelineComponentProvider>)arg1 ;
-(id)resultForNewLayoutResult:(id)arg1 ;
-(id)removalPlanResult;
-(id)annotationForLayoutItem:(id)arg1 ;
-(id)_changesBetweenSourceLayoutResult:(id)arg1 targetLayoutResult:(id)arg2 ;
-(id<PXPlacesMapLayoutResult>)currentLayoutResult;
-(void)setCurrentLayoutResult:(id<PXPlacesMapLayoutResult>)arg1 ;
-(NSMapTable *)currentLayoutItemToAnnotationTable;
-(void)setCurrentLayoutItemToAnnotationTable:(NSMapTable *)arg1 ;
@end

