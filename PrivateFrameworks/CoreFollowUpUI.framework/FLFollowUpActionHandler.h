/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFollowUp/FLHeadlessActionHandler.h>
#import <libobjc.A.dylib/FLExtensionHostContextInterface.h>

@class FLViewExtensionLoader, UIViewController, NSString;

@interface FLFollowUpActionHandler : FLHeadlessActionHandler <FLExtensionHostContextInterface> {

	FLViewExtensionLoader* _extensionLoader;
	UIViewController* _remoteViewController;
	/*^block*/id _completionHandler;
	/*^block*/id _extensionRequestedViewControllerPresentation;

}

@property (nonatomic,copy) id extensionRequestedViewControllerPresentation;              //@synthesize extensionRequestedViewControllerPresentation=_extensionRequestedViewControllerPresentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)_extensionLoader;
-(void)handleExtensionBasedAction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)extensionDidFinish;
-(void)extensionDidFinishWithError:(id)arg1 ;
-(id)extensionRequestedViewControllerPresentation;
-(void)setExtensionRequestedViewControllerPresentation:(id)arg1 ;
@end

