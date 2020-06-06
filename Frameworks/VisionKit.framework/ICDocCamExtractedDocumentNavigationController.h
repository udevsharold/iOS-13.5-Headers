/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/DCUnsavedDataDelegate.h>

@class NSString;

@interface ICDocCamExtractedDocumentNavigationController : UINavigationController <DCUnsavedDataDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_canShowWhileLocked;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)didReceiveMemoryWarning;
-(void)prepareForDismissal;
-(id)initWithDelegate:(id)arg1 documentInfoCollection:(id)arg2 imageCache:(id)arg3 currentIndex:(long long)arg4 mode:(int)arg5 ;
@end

