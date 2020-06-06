/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:04 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CPSTripPreviewsCardView.h>
#import <libobjc.A.dylib/CPSAlternateRouteSelecting.h>
#import <libobjc.A.dylib/CPSPageControlling.h>

@class NSMutableDictionary, CPSPagingControlView, CPSRouteOverviewView, CPSHairlineBorderedView, UIButton, NSLayoutConstraint, NSString;

@interface CPSPagingTripPreviewsCardView : CPSTripPreviewsCardView <CPSAlternateRouteSelecting, CPSPageControlling> {

	BOOL _showMoreRoutes;
	NSMutableDictionary* _estimatesForTripIdentifiers;
	CPSPagingControlView* _pageControl;
	CPSRouteOverviewView* _overviewView;
	CPSHairlineBorderedView* _borderedAlternatesView;
	CPSHairlineBorderedView* _borderedGoButton;
	CPSHairlineBorderedView* _borderedMoreRoutesButton;
	UIButton* _moreRoutesButton;
	NSLayoutConstraint* _contentTopConstraint;
	NSLayoutConstraint* _contentBottomConstraint;
	NSLayoutConstraint* _alternateRoutesHeightConstraint;
	NSLayoutConstraint* _toggleRoutesButtonHeightConstraint;

}

@property (nonatomic,readonly) NSMutableDictionary * estimatesForTripIdentifiers;                  //@synthesize estimatesForTripIdentifiers=_estimatesForTripIdentifiers - In the implementation block
@property (nonatomic,readonly) CPSPagingControlView * pageControl;                                 //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,readonly) CPSRouteOverviewView * overviewView;                                //@synthesize overviewView=_overviewView - In the implementation block
@property (nonatomic,readonly) CPSHairlineBorderedView * borderedAlternatesView;                   //@synthesize borderedAlternatesView=_borderedAlternatesView - In the implementation block
@property (nonatomic,readonly) CPSHairlineBorderedView * borderedGoButton;                         //@synthesize borderedGoButton=_borderedGoButton - In the implementation block
@property (nonatomic,readonly) CPSHairlineBorderedView * borderedMoreRoutesButton;                 //@synthesize borderedMoreRoutesButton=_borderedMoreRoutesButton - In the implementation block
@property (nonatomic,readonly) UIButton * moreRoutesButton;                                        //@synthesize moreRoutesButton=_moreRoutesButton - In the implementation block
@property (assign,nonatomic) BOOL showMoreRoutes;                                                  //@synthesize showMoreRoutes=_showMoreRoutes - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentTopConstraint;                            //@synthesize contentTopConstraint=_contentTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentBottomConstraint;                         //@synthesize contentBottomConstraint=_contentBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * alternateRoutesHeightConstraint;                 //@synthesize alternateRoutesHeightConstraint=_alternateRoutesHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toggleRoutesButtonHeightConstraint;              //@synthesize toggleRoutesButtonHeightConstraint=_toggleRoutesButtonHeightConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(CPSPagingControlView *)pageControl;
-(id)_linearFocusItems;
-(void)alternateRoutesView:(id)arg1 didSelectRouteChoice:(id)arg2 ;
-(void)pagingControlView:(id)arg1 didSelectPageIndex:(unsigned long long)arg2 ;
-(void)_updateButtonColors;
-(void)setSelectedRouteChoice:(id)arg1 ;
-(id)initWithTripDelegate:(id)arg1 trips:(id)arg2 textConfiguration:(id)arg3 ;
-(void)setSelectedTrip:(id)arg1 ;
-(void)updateEstimates:(id)arg1 forTripIdentifier:(id)arg2 ;
-(void)setContentTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentTopConstraint;
-(void)setAlternateRoutesHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)alternateRoutesHeightConstraint;
-(void)setContentBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_toggleMoreRoutesButtonPressed:(id)arg1 ;
-(void)setToggleRoutesButtonHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)toggleRoutesButtonHeightConstraint;
-(UIButton *)moreRoutesButton;
-(CPSRouteOverviewView *)overviewView;
-(CPSHairlineBorderedView *)borderedAlternatesView;
-(CPSHairlineBorderedView *)borderedMoreRoutesButton;
-(CPSHairlineBorderedView *)borderedGoButton;
-(NSLayoutConstraint *)contentBottomConstraint;
-(NSMutableDictionary *)estimatesForTripIdentifiers;
-(BOOL)showMoreRoutes;
-(void)setShowMoreRoutes:(BOOL)arg1 ;
-(void)_setOverviewCollapsed:(BOOL)arg1 ;
@end

