/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:04 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CPSBaseTemplateViewController.h>
#import <libobjc.A.dylib/CPSButtonDelegate.h>

@class NSArray, CPAlertTemplate, NSString;

@interface CPSFullScreenAlertViewController : CPSBaseTemplateViewController <CPSButtonDelegate> {

	NSArray* _alertButtons;

}

@property (nonatomic,readonly) CPAlertTemplate * alert; 
@property (nonatomic,retain) NSArray * alertButtons;                 //@synthesize alertButtons=_alertButtons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)preferredFocusEnvironments;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)_titleFont;
-(CPAlertTemplate *)alert;
-(void)didSelectButton:(id)arg1 ;
-(void)_viewDidLoad;
-(id)initWithAlert:(id)arg1 alertDelegate:(id)arg2 ;
-(NSArray *)alertButtons;
-(void)setAlertButtons:(NSArray *)arg1 ;
@end
