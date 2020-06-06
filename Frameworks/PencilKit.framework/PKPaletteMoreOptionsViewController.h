/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol PKPaletteMoreOptionsViewControllerDelegate;
@class UITraitCollection, NSLayoutConstraint, NSArray, UIStackView, PKPaletteAutoMinimizeOptionCell;

@interface PKPaletteMoreOptionsViewController : UIViewController {

	BOOL _autoHideOn;
	id<PKPaletteMoreOptionsViewControllerDelegate> _delegate;
	UITraitCollection* _externalTraitCollection;
	NSLayoutConstraint* _stackViewMinWidthConstraint;
	NSArray* _stackViewPositioningConstraints;
	UIStackView* _stackView;
	PKPaletteAutoMinimizeOptionCell* _autoMinimizeCell;

}

@property (nonatomic,retain) UITraitCollection * externalTraitCollection;                                 //@synthesize externalTraitCollection=_externalTraitCollection - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackViewMinWidthConstraint;                            //@synthesize stackViewMinWidthConstraint=_stackViewMinWidthConstraint - In the implementation block
@property (nonatomic,retain) NSArray * stackViewPositioningConstraints;                                   //@synthesize stackViewPositioningConstraints=_stackViewPositioningConstraints - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                                     //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) PKPaletteAutoMinimizeOptionCell * autoMinimizeCell;                          //@synthesize autoMinimizeCell=_autoMinimizeCell - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaletteMoreOptionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isAutoHideOn,nonatomic) BOOL autoHideOn;                                         //@synthesize autoHideOn=_autoHideOn - In the implementation block
-(id<PKPaletteMoreOptionsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPaletteMoreOptionsViewControllerDelegate>)arg1 ;
-(UIStackView *)stackView;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)_reloadItems;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)_updateContentSize;
-(void)setAutoHideOn:(BOOL)arg1 ;
-(void)setStackViewMinWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)stackViewMinWidthConstraint;
-(void)setStackViewPositioningConstraints:(NSArray *)arg1 ;
-(NSArray *)stackViewPositioningConstraints;
-(void)setExternalTraitCollection:(UITraitCollection *)arg1 ;
-(void)_updateAutoMinimizeCell;
-(PKPaletteAutoMinimizeOptionCell *)autoMinimizeCell;
-(void)setAutoMinimizeCell:(PKPaletteAutoMinimizeOptionCell *)arg1 ;
-(void)_autoMinimizeCellDidChangeValue:(id)arg1 ;
-(BOOL)isAutoHideOn;
-(void)updateUIForTraitCollection:(id)arg1 ;
-(UITraitCollection *)externalTraitCollection;
@end

