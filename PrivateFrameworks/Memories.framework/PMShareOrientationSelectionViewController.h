/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class PMActivityItemProvider, PMPosterViewController, NSLayoutConstraint;

@interface PMShareOrientationSelectionViewController : UIViewController {

	PMActivityItemProvider* _itemProvider;
	double _exportAspect;
	PMPosterViewController* _posterViewController;
	NSLayoutConstraint* _aspectRatioConstraint;

}

@property (nonatomic,retain) PMPosterViewController * posterViewController;              //@synthesize posterViewController=_posterViewController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * aspectRatioConstraint;                 //@synthesize aspectRatioConstraint=_aspectRatioConstraint - In the implementation block
@property (assign,nonatomic,__weak) PMActivityItemProvider * itemProvider;               //@synthesize itemProvider=_itemProvider - In the implementation block
@property (assign,nonatomic) double exportAspect;                                        //@synthesize exportAspect=_exportAspect - In the implementation block
-(id)init;
-(PMActivityItemProvider *)itemProvider;
-(void)setItemProvider:(PMActivityItemProvider *)arg1 ;
-(void)viewDidLoad;
-(void)createConstraints;
-(NSLayoutConstraint *)aspectRatioConstraint;
-(void)setAspectRatioConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPosterViewController:(PMPosterViewController *)arg1 ;
-(PMPosterViewController *)posterViewController;
-(double)upScalingFactor;
-(void)_updateSharingHeaderIcons;
-(double)exportAspect;
-(void)setExportAspect:(double)arg1 ;
@end

