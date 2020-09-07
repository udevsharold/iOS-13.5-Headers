/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OBPrivacyLinkController.h>

@class OBPrivacyLinkButton, UIImageView, UITextView;

@interface OBPrivacyLinkController_iOS : OBPrivacyLinkController {

	OBPrivacyLinkButton* _linkButton;
	BOOL bundleTitlesMatch;
	BOOL bundlesIncludePII;

}

@property (readonly) UIImageView * iconView; 
@property (readonly) UITextView * textView; 
-(UITextView *)textView;
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(UIImageView *)iconView;
-(id)initWithPrivacyBundle:(id)arg1 ;
-(id)initWithBundleIdentifiers:(id)arg1 ;
-(void)processBundlesForTitleInformation;
-(void)setLinkEnabled:(BOOL)arg1 ;
@end
