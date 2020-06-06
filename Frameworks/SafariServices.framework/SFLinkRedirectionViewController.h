/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SFSafariViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class NSString;

@interface SFLinkRedirectionViewController : SFSafariViewController <UIViewControllerTransitioningDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(void)viewDidLoad;
-(void)setDefersAddingRemoteViewController:(BOOL)arg1 ;
-(void)remoteViewController:(id)arg1 didResolveRedirectionWithURL:(id)arg2 appLink:(id)arg3 ;
@end

