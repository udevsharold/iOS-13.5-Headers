/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSDCanvas, TSDRootLayout, NSMutableSet, TSDLayout;

@interface TSDLayoutController : NSObject {

	TSDCanvas* mCanvas;
	TSDRootLayout* mRootLayout;
	CFDictionaryRef mLayoutsByInfo;
	NSMutableSet* mInvalidLayouts;
	NSMutableSet* mLayoutsNeedingRecreating;
	NSMutableSet* mInvalidChildrenLayouts;
	TSDLayout* mValidatingLayout;

}
+(void)temporaryLayoutControllerForInfos:(id)arg1 useInBlock:(/*^block*/id)arg2 ;
+(id)allInteractiveLayoutControllers;
-(void)dealloc;
-(id)initWithCanvas:(id)arg1 ;
-(id)canvas;
-(void)setInfos:(id)arg1 ;
-(id)rootLayout;
-(void)unregisterLayout:(id)arg1 ;
-(void)preregisterLayout:(id)arg1 ;
-(id)validatedLayoutForInfo:(id)arg1 ;
-(id)layoutForInfo:(id)arg1 ;
-(void)validateLayoutWithDependencies:(id)arg1 ;
-(BOOL)isLayoutOffscreen;
-(id)layoutForInfo:(id)arg1 childOfLayout:(id)arg2 ;
-(id)layoutsForInfo:(id)arg1 ;
-(void)invalidateLayout:(id)arg1 ;
-(void)invalidateChildrenOfLayout:(id)arg1 ;
-(id)layoutGeometryProviderForLayout:(id)arg1 ;
-(void)i_registerLayout:(id)arg1 ;
-(void)i_unregisterLayout:(id)arg1 ;
-(void)validateLayouts;
-(void)validateLayouts:(id)arg1 ;
-(id)sortLayoutsForDependencies:(id)arg1 ;
-(void)validateOrderedLayouts:(id)arg1 ;
-(void)validateLayoutsWithDependencies:(id)arg1 ;
-(id)validatedLayoutsForInfo:(id)arg1 ;
-(void)invalidateLayoutForRecreation:(id)arg1 ;
-(id)layoutsForInfos:(id)arg1 ;
-(id)layoutsInRect:(CGRect)arg1 ;
-(CGRect)rectOfTopLevelLayouts;
-(id)validatedLayoutForInfo:(id)arg1 childOfLayout:(id)arg2 ;
-(void)i_removeAllLayouts;
-(id)ancestorLayoutOfLayout:(id)arg1 orDelegateConformingToProtocol:(id)arg2 ;
@end

