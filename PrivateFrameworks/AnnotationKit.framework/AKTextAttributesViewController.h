/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/AKFontChooserUserInterfaceItem.h>
#import <libobjc.A.dylib/AKTextAttributesUserInterfaceItem.h>

@class UITableViewCell, UIColor, NSString, NSNumber, AKController, AKFontListController, AKFontChooserUIItemDelegate, AKTextAttributesUIItemDelegate;

@interface AKTextAttributesViewController : UITableViewController <AKFontChooserUserInterfaceItem, AKTextAttributesUserInterfaceItem> {

	UITableViewCell* _sizeTableCell;
	UITableViewCell* _alignmentTableCell;
	UIColor* _currentFontColor;
	NSString* _currentFontFamilyName;
	NSNumber* _currentFontSize;
	id _currentAlignment;
	id _currentStyle;
	AKController* _controller;
	AKFontListController* _presetFontController;
	long long _lastActionID;
	id _lastActionValue;
	AKFontChooserUIItemDelegate* _fontUIItemDelegate;
	AKTextAttributesUIItemDelegate* _textAttributesUIItemDelegate;

}

@property (nonatomic,retain) UITableViewCell * sizeTableCell;                                            //@synthesize sizeTableCell=_sizeTableCell - In the implementation block
@property (nonatomic,retain) UITableViewCell * alignmentTableCell;                                       //@synthesize alignmentTableCell=_alignmentTableCell - In the implementation block
@property (nonatomic,retain) UIColor * currentFontColor;                                                 //@synthesize currentFontColor=_currentFontColor - In the implementation block
@property (nonatomic,retain) NSString * currentFontFamilyName;                                           //@synthesize currentFontFamilyName=_currentFontFamilyName - In the implementation block
@property (nonatomic,retain) NSNumber * currentFontSize;                                                 //@synthesize currentFontSize=_currentFontSize - In the implementation block
@property (assign,nonatomic) id currentAlignment;                                                        //@synthesize currentAlignment=_currentAlignment - In the implementation block
@property (assign,nonatomic) id currentStyle;                                                            //@synthesize currentStyle=_currentStyle - In the implementation block
@property (assign,nonatomic,__weak) AKController * controller;                                           //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) AKFontListController * presetFontController;                                //@synthesize presetFontController=_presetFontController - In the implementation block
@property (assign) long long lastActionID;                                                               //@synthesize lastActionID=_lastActionID - In the implementation block
@property (retain) id lastActionValue;                                                                   //@synthesize lastActionValue=_lastActionValue - In the implementation block
@property (nonatomic,retain) AKFontChooserUIItemDelegate * fontUIItemDelegate;                           //@synthesize fontUIItemDelegate=_fontUIItemDelegate - In the implementation block
@property (nonatomic,retain) AKTextAttributesUIItemDelegate * textAttributesUIItemDelegate;              //@synthesize textAttributesUIItemDelegate=_textAttributesUIItemDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fontSizeNumberFormatter;
-(void)_commonInit;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)setController:(AKController *)arg1 ;
-(AKController *)controller;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setCurrentStyle:(id)arg1 ;
-(id)currentStyle;
-(id)initWithController:(id)arg1 ;
-(id)convertTextAttributes:(id)arg1 ;
-(void)syncTextAttributesToUI:(id)arg1 ;
-(id)convertFont:(id)arg1 ;
-(void)syncFontsToUI:(id)arg1 ;
-(void)setPresetFontController:(AKFontListController *)arg1 ;
-(AKFontListController *)presetFontController;
-(void)setCurrentFontFamilyName:(NSString *)arg1 ;
-(void)setCurrentFontSize:(NSNumber *)arg1 ;
-(void)setCurrentFontColor:(UIColor *)arg1 ;
-(void)setFontUIItemDelegate:(AKFontChooserUIItemDelegate *)arg1 ;
-(AKFontChooserUIItemDelegate *)fontUIItemDelegate;
-(void)setTextAttributesUIItemDelegate:(AKTextAttributesUIItemDelegate *)arg1 ;
-(AKTextAttributesUIItemDelegate *)textAttributesUIItemDelegate;
-(BOOL)validateUserInterfaceItems;
-(id)createRowFontSizeCell;
-(id)createRowAlignmentCell;
-(NSString *)currentFontFamilyName;
-(void)didSelectFont:(id)arg1 ;
-(UITableViewCell *)sizeTableCell;
-(NSNumber *)currentFontSize;
-(void)_sizeStepperValueChanged:(id)arg1 ;
-(void)setSizeTableCell:(UITableViewCell *)arg1 ;
-(UITableViewCell *)alignmentTableCell;
-(void)_alignmentSegmentChanged:(id)arg1 ;
-(void)setAlignmentTableCell:(UITableViewCell *)arg1 ;
-(void)setLastActionID:(long long)arg1 ;
-(void)setLastActionValue:(id)arg1 ;
-(void)_sendFontAction;
-(void)_sendTextAttributesAction;
-(long long)lastActionID;
-(id)lastActionValue;
-(void)_styleSegmentChanged:(id)arg1 ;
-(UIColor *)currentFontColor;
-(id)currentAlignment;
-(void)setCurrentAlignment:(id)arg1 ;
@end

