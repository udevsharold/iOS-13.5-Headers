/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@class NSDictionary, SXDocumentController, SXColumnLayout, NSMutableDictionary;

@interface SXImageController : NSObject {

	NSDictionary* _imageResourcesGroupedByImageIdentifier;
	NSDictionary* _image2ResourcesGroupedByImageIdentifier;
	SXDocumentController* _documentController;
	SXColumnLayout* _columnLayout;
	NSMutableDictionary* _optimalImageResources;
	CGSize _viewportSize;

}

@property (nonatomic,__weak,readonly) SXDocumentController * documentController;                    //@synthesize documentController=_documentController - In the implementation block
@property (nonatomic,readonly) SXColumnLayout * columnLayout;                                       //@synthesize columnLayout=_columnLayout - In the implementation block
@property (nonatomic,readonly) CGSize viewportSize;                                                 //@synthesize viewportSize=_viewportSize - In the implementation block
@property (nonatomic,readonly) NSDictionary * imageResourcesGroupedByImageIdentifier;               //@synthesize imageResourcesGroupedByImageIdentifier=_imageResourcesGroupedByImageIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * image2ResourcesGroupedByImageIdentifier;              //@synthesize image2ResourcesGroupedByImageIdentifier=_image2ResourcesGroupedByImageIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * optimalImageResources;                         //@synthesize optimalImageResources=_optimalImageResources - In the implementation block
-(CGSize)viewportSize;
-(SXDocumentController *)documentController;
-(id)imageResourceForIdentifier:(id)arg1 ;
-(SXColumnLayout *)columnLayout;
-(id)initWithDocumentController:(id)arg1 columnCalculator:(id)arg2 ;
-(id)allImageResources;
-(void)prepareImageResources;
-(void)determineOptimalImagesForComponents:(id)arg1 ;
-(void)determineOptimalImagesForComponentStyles:(id)arg1 ;
-(void)determineOptimalImagesForMetadata;
-(id)imageResourceForImageIdentifier:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(NSMutableDictionary *)optimalImageResources;
-(id)imageResourcesForComponent:(id)arg1 ;
-(id)imageResourceForImageComponent:(id)arg1 ;
-(id)imageResourceForScalableImageComponent:(id)arg1 ;
-(id)imageResourceForVideoComponent:(id)arg1 ;
-(id)imageResourceForAudioComponent:(id)arg1 ;
-(id)imageResourcesForGalleryComponent:(id)arg1 ;
-(id)imageResourceForDataTableComponent:(id)arg1 ;
-(CGSize)sizeConstraintForComponent:(id)arg1 ;
-(id)imageResourceForGalleryItem:(id)arg1 ;
-(id)imageResourcesForComponentStyle:(id)arg1 ;
-(id)imageResourceForImageFill:(id)arg1 ;
-(id)imageResourceForVideoFill:(id)arg1 ;
-(id)imageResourceForRepeatableImageFill:(id)arg1 ;
-(id)imageResourcesForImageIdentifier:(id)arg1 ;
-(id)largestImageResourceForImageIdentifier:(id)arg1 ;
-(id)taggedEquivalentOfImageResource:(id)arg1 ;
-(id)Image2ResourcesForImageIdentifier:(id)arg1 ;
-(NSDictionary *)imageResourcesGroupedByImageIdentifier;
-(NSDictionary *)image2ResourcesGroupedByImageIdentifier;
@end

