/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AMSUIWebPagePresenter.h>

@class _UIContentUnavailableView, AMSUIWebClientContext, AMSUIWebErrorPageModel, NSString;

@interface AMSUIWebErrorViewController : UIViewController <AMSUIWebPagePresenter> {

	_UIContentUnavailableView* _errorView;
	AMSUIWebClientContext* _context;
	AMSUIWebErrorPageModel* _model;

}

@property (nonatomic,retain) _UIContentUnavailableView * errorView;              //@synthesize errorView=_errorView - In the implementation block
@property (nonatomic,retain) AMSUIWebClientContext * context;                    //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) AMSUIWebErrorPageModel * model;                     //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSUIWebClientContext *)context;
-(AMSUIWebErrorPageModel *)model;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(void)setModel:(AMSUIWebErrorPageModel *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(_UIContentUnavailableView *)errorView;
-(void)setErrorView:(_UIContentUnavailableView *)arg1 ;
-(void)_applyAppearance;
-(void)applyPageModel:(id)arg1 ;
@end

