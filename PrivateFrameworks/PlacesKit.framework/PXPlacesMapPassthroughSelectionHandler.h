/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PXPlacesMapSelectionHandler.h>

@protocol PXPlacesMapPipelineComponentProvider;
@class NSString;

@interface PXPlacesMapPassthroughSelectionHandler : NSObject <PXPlacesMapSelectionHandler> {

	id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; 
-(void)reset;
-(id<PXPlacesMapPipelineComponentProvider>)pipelineComponentProvider;
-(void)setPipelineComponentProvider:(id<PXPlacesMapPipelineComponentProvider>)arg1 ;
-(id)selectedGeotaggablesForRenderable:(id)arg1 mapView:(id)arg2 ;
@end

