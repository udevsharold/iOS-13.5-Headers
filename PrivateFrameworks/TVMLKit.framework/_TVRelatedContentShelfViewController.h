/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/__TVShelfViewControllerDelegate.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class _TVShelfViewController, NSString;

@interface _TVRelatedContentShelfViewController : UIViewController <__TVShelfViewControllerDelegate, TVAppTemplateImpressionable> {

	_TVShelfViewController* _shelfViewController;

}

@property (nonatomic,retain) _TVShelfViewController * shelfViewController;              //@synthesize shelfViewController=_shelfViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(id)preferredFocusEnvironments;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(_TVShelfViewController *)shelfViewController;
-(void)shelfViewController:(id)arg1 updateRelatedView:(id)arg2 ;
-(void)setShelfViewController:(_TVShelfViewController *)arg1 ;
@end

